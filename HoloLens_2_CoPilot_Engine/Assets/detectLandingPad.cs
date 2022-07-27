using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class detectLandingPad : MonoBehaviour
{
    public GameObject Icon;
    GameObject Collider;
    public Quaternion stickAngle = Quaternion.Euler(0, 0, 0);
    public float mag;
    public Vector3 current;


    Quaternion landingLocation()
    {
        float[] xArr = Icon.GetComponent<ServerTwo>().posAx;
        float[] yArr = Icon.GetComponent<ServerTwo>().posAy;
        float[] zArr = Icon.GetComponent<ServerTwo>().posAz;

        float mag = Icon.GetComponent<ServerTwo>().receivedMag;

        float xDiff = xArr[2] - xArr[0];
        float yDiff = yArr[2] - yArr[0];
        float zDiff = zArr[2] - zArr[0];
        Vector3 targetDir = new Vector3(xDiff, yDiff, zDiff);

        float magnitude = Mathf.Sqrt(Mathf.Pow(xDiff, 2) + Mathf.Pow(yDiff, 2) + Mathf.Pow(zDiff, 2));
        Debug.LogWarning("Magnitude");
        Debug.LogWarning(magnitude);


        Debug.LogWarning("angx");
        //float angX = Mathf.Acos(xDiff / magnitude) * (180f / Mathf.PI);
        float angX = Vector3.Angle(targetDir, transform.right);
        Debug.LogWarning(angX);

        Debug.LogWarning("angy");
        // float angY = Mathf.Acos(yDiff / magnitude) * (180f / Mathf.PI);
        float angY = Vector3.Angle(targetDir, transform.up);
        Debug.LogWarning(angY);

        //float angZ = Mathf.Acos(zDiff / magnitude) * (180f / Mathf.PI);
        Debug.LogWarning("angz");
        //float angZ = Mathf.Acos((90 - ((1/90) * mag))/90) * (180f / Mathf.PI);
        //float angZ = Vector3.Angle(targetDir, transform.forward);
        //Debug.LogWarning(angZ);

        //Debug.LogWarning(angX); Debug.LogWarning(angY); Debug.LogWarning(angZ);

        return stickAngle = Quaternion.Euler(angX, angY, 0);
    }


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //transform.position = landingLocation();

        mag = Icon.GetComponent<ServerTwo>().receivedMag;


        float[] xArr = Icon.GetComponent<ServerTwo>().posAx;
        float[] yArr = Icon.GetComponent<ServerTwo>().posAy;
        float[] zArr = Icon.GetComponent<ServerTwo>().posAz;

        float lastX = Icon.GetComponent<ServerTwo>().lastPosX;
        float lastY = Icon.GetComponent<ServerTwo>().lastPosY;
        float lastZ = Icon.GetComponent<ServerTwo>().lastPosZ;

        float currentX = Icon.GetComponent<ServerTwo>().cPosX;
        float currentY = Icon.GetComponent<ServerTwo>().cPosY; // * mag / 0.5f;
        float currentZ = Icon.GetComponent<ServerTwo>().cPosZ; // * mag/0.5f;

        current = new Vector3(currentX, currentY, currentZ);

        //Vector3 startPt = new Vector3(xArr[0], yArr[0], zArr[0]);
        //Vector3 destPt = new Vector3(xArr[2], yArr[2], zArr[2]);

        Vector3 startPt = new Vector3(lastX, lastY, lastZ);
        Vector3 destPt = new Vector3(currentX, currentY, currentZ);

        transform.position = startPt;
        transform.LookAt(destPt);
    }
}
