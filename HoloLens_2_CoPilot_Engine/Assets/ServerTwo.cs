using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;

public class ServerTwo : MonoBehaviour
{
    System.Threading.Thread SocketThread;
    volatile bool keepReading = false;
    public static string localIP = "127.0.0.1"; // USE WHEN RUNNING ON LOCAL MACHINE FOR TESTING - GO LINE 45
    //public static string localIP = "160.69.69.125"; // 147 USE WHEN USING WITH HOLOLENS CONENCTED TO CARIS NETWORK
    //public IPAddress setIpAddress = IPAddress.Parse("127.0.0.1");
    public IPAddress setIpAddress = IPAddress.Parse(localIP);
    public int port = 5007;
    private static int velocityGenBracket = 3;
    public float receivedX, receivedY, receivedZ, receivedAX, receivedAY, receivedAZ, receivedMag;
    private int iX=0, iY=0, iZ=0;
    public float[] posAx = new float[velocityGenBracket], posAy= new float[velocityGenBracket], posAz = new float[velocityGenBracket];
    public float lastPosX, lastPosY, lastPosZ, cPosX, cPosY, cPosZ;

    // Use this for initialization
    void Start()
    {
        Application.runInBackground = true;
        startServer();
    }

    void startServer()
    {
        SocketThread = new System.Threading.Thread(networkCode);
        SocketThread.IsBackground = true;
        SocketThread.Start();
    }



    private string getIPAddress()
    {
        IPHostEntry host;
        string setlocalIP = "127.0.0.1"; // Old
        // string setlocalIP = "160.69.69.125";
        host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (IPAddress ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                localIP = ip.ToString();
            }
        }
        return setlocalIP;
    }


    Socket listener;
    Socket handler;

    void networkCode()
    {
        string data;

        // Data buffer for incoming data.
        byte[] bytes = new Byte[1024];

        // host running the application.
        //Debug.Log("Ip " + getIPAddress().ToString());
        IPAddress[] ipArray = Dns.GetHostAddresses(getIPAddress());
        IPEndPoint localEndPoint = new IPEndPoint(setIpAddress, port); // SET IP

        // Create a TCP/IP socket.
        listener = new Socket(ipArray[0].AddressFamily,
            SocketType.Stream, ProtocolType.Tcp);

        // Bind the socket to the local endpoint and 
        // listen for incoming connections.

        try
        {
            listener.Bind(localEndPoint);
            listener.Listen(10);

            // Start listening for connections.
            while (true)
            {
                keepReading = true;

                // Program is suspended while waiting for an incoming connection.
                //Debug.Log("Waiting for Connection");     //It works

                handler = listener.Accept();
                //Debug.Log("Client Connected");     //It doesn't work
                data = null;

                // An incoming connection needs to be processed.
                while (keepReading)
                {
                    bytes = new byte[1024];
                    int bytesRec = handler.Receive(bytes);
                    //Debug.Log("Received by Server");

                    if (bytesRec <= 0)
                    {
                        keepReading = false;
                        handler.Disconnect(true);
                        break;
                    }

                    data += Encoding.ASCII.GetString(bytes, 0, bytesRec);

                    if (data.IndexOf("<EOF>") > -1)
                    {
                        string removeString = "<EOF>";
                        data = data.Replace(removeString, "");

                        if (data.Contains("xP"))
                        {
                            removeString = "xP";
                            data = data.Replace(removeString, "");
                            receivedZ = float.Parse(data);
                            posAz[iZ] = receivedZ;
                            iZ++;
                            if (iZ == velocityGenBracket)
                            {
                                iZ = 0;
                                lastPosZ = cPosZ;
                                cPosZ = receivedZ;
                            }
                            //Debug.Log("Received X is ");
                            //Debug.Log(receivedX);
                        }
                        else if (data.Contains("yP"))
                        {
                            removeString = "yP";
                            data = data.Replace(removeString, "");
                            receivedX = float.Parse(data);
                            posAx[iX] = receivedX;
                            iX++;
                            if (iX == velocityGenBracket)
                            {
                                iX = 0;
                                lastPosX = cPosX;
                                cPosX = receivedX;
                            }
                            //Debug.Log("Received Y is ");
                            //Debug.Log(receivedY);
                        }
                        if (data.Contains("zP"))
                        {
                            removeString = "zP";
                            data = data.Replace(removeString, "");
                            receivedY = -1 * float.Parse(data);
                            posAy[iY] = receivedY;
                            iY++;
                            if (iY == velocityGenBracket)
                            {
                                iY = 0;
                                lastPosY = cPosY;
                                cPosY = receivedY;
                            }
                            //Debug.Log("Received Z is ");
                            //Debug.Log(receivedZ);
                        }
                        if (data.Contains("aX"))
                        {
                            removeString = "aX";
                            data = data.Replace(removeString, "");
                            receivedAX = float.Parse(data);
                            //Debug.Log("Received Angle X is ");
                            //Debug.Log(receivedAX);
                        }
                        if (data.Contains("aY"))
                        {
                            removeString = "aY";
                            data = data.Replace(removeString, "");
                            receivedAY = float.Parse(data);
                            //Debug.Log("Received Angle Y is ");
                            //Debug.Log(receivedAY);
                        }
                        if (data.Contains("aZ"))
                        {
                            removeString = "aZ";
                            data = data.Replace(removeString, "");
                            receivedAZ = float.Parse(data);
                            //Debug.Log("Received Angle Z is ");
                            //Debug.Log(receivedAZ);
                        }
                        if (data.Contains("M"))
                        {
                            removeString = "M";
                            data = data.Replace(removeString, "");
                            receivedMag = float.Parse(data);
                            Debug.Log("Received Magnitude is ");
                            //Debug.Log(receivedMag);
                        }
                        //Debug.Log(data);
                        break;
                    }

                    System.Threading.Thread.Sleep(1);
                }

                System.Threading.Thread.Sleep(1);
            }
        }
        catch (Exception e)
        {
            Debug.Log(e.ToString());
        }
    }

    void stopServer()
    {
        keepReading = false;

        //stop thread
        if (SocketThread != null)
        {
            SocketThread.Abort();
        }

        if (handler != null && handler.Connected)
        {
            handler.Disconnect(false);
            Debug.Log("Disconnected!");
        }
    }

    void OnDisable()
    {
        stopServer();
    }
}
