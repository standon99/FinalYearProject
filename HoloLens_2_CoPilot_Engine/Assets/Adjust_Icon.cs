using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Adjust_Icon : MonoBehaviour
{
    public Vector3 desiredPos = new Vector3(0f, 0f, 0f);
    public Quaternion desiredRot = Quaternion.Euler(0, 0, 0);
    Vector3 startPos = new Vector3(0f, 0f, 0f);
    Quaternion startRot = Quaternion.Euler(0, 0, 0);

    public float desiredArrowScale = 1;

    GameObject Arrow;
    GameObject Collider;

    // GameObject ArrowContainer;
    // Start is called before the first frame update
    Vector3 fetchNewPos()
    {
        // Populate with code used to access these params from the Co-Pilot
        desiredPos = new Vector3(gameObject.GetComponent<ServerTwo>().receivedX, gameObject.GetComponent<ServerTwo>().receivedY, gameObject.GetComponent<ServerTwo>().receivedZ);
        return desiredPos;
    }

    Quaternion fetchNewRot()
    {
        // Populate with code used to access these params from the Co-Pilot
        float angleX = gameObject.GetComponent<ServerTwo>().receivedAX;
        float angleY = gameObject.GetComponent<ServerTwo>().receivedAY;
        float angleZ = gameObject.GetComponent<ServerTwo>().receivedAZ;
        // desiredRot = Quaternion.Euler(-1 * angleY, -1 * angleX, angleZ);
        desiredRot = Quaternion.Euler(angleY, -1 * angleZ, angleX);
        // desiredRot = Quaternion.Euler(-1 * angleY, -1 * angleX, angleZ);
        return desiredRot;
    }

    void RescaleArrow()
    {
        desiredArrowScale = gameObject.GetComponent<ServerTwo>().receivedMag;
        if (desiredArrowScale < 0.3) desiredArrowScale = 0.3f;
        Arrow.transform.localScale = new Vector3(desiredArrowScale, desiredArrowScale, desiredArrowScale);
    }

    void Start()
    {
        // Set the desired initial positions of the 
        transform.position = startPos;
        transform.rotation = startRot;
        Arrow = GameObject.Find("ArrowContainer");
    }

    // Update is called once per frame
    void Update()
    {
        fetchNewPos();
        transform.position = desiredPos;
        fetchNewRot();
        Arrow.transform.rotation = desiredRot;
        RescaleArrow();
    }
}
