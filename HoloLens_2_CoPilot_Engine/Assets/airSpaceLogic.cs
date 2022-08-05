using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class airSpaceLogic : MonoBehaviour
{
    public bool activated = false;
    public float timer = 0;
    public float startTime = 0, endTime = 0, deltaTime = 0, timeThreshold = 3;
    // Start is called before the first frame update

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Icon")
        {
            startTime = Time.time;
            deltaTime = 0;
            //Debug.LogWarning("");
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.name == "Icon")
        {
            endTime = Time.time;
            deltaTime = endTime - startTime;

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
