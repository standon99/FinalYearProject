using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class airSpaceLogic : MonoBehaviour
{
    public bool activated = false, inAirSpace = false;
    public float timer = 0;
    public float startTime = 0, endTime = 0, deltaTime = 0, timeThreshold = 3f;
    // Start is called before the first frame update

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Icon")
        {
            startTime = Time.time;
            deltaTime = 0;
            Debug.LogWarning("STARTED FLYING IN AIRSPACE");
            inAirSpace = true;
        }
    }

    //private void OnCollisionStay(Collision collision)
    //{
    //    if (collision.gameObject.name == "Icon")
    //    {
    //        endTime = Time.time;
    //        deltaTime = endTime - startTime;
    //        //Debug.Log(deltaTime);
    //    }
    //}

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.name == "Icon")
        {
            deltaTime = 0;
            inAirSpace = false;
            activated = false;
            Debug.LogWarning("LEFT AIRSPACE");

            //Debug.LogWarning("");
        }
    }


    void Start()
    {
        GetComponent<MeshRenderer>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (inAirSpace)
        {
            endTime = Time.time;
            deltaTime = endTime - startTime;
            Debug.Log(deltaTime);
        }

        if (deltaTime > timeThreshold)
        {
            activated = true;
        }
        else
        {
            activated = false;
        }
    }
}
