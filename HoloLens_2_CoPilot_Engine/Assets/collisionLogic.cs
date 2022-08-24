using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collisionLogic : MonoBehaviour
{
    // Start is called before the first frame update

    public bool airSpaceTF = false;
    public bool colliderTF = false;
    public float colourIntensity = 0;
    //Detect collisions between the GameObjects with Colliders attached
    private void OnCollisionEnter(Collision collision)
    {
        bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
        float timeInAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().deltaTime;
        if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
        {
            //int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 30);
            //if (colourIntensity > 255)
            //{
            //    colourIntensity = 255;
            //}
            //Color padCol = new Color(colourIntensity, 0, 0);
            GetComponent<MeshRenderer>().material.color = Color.red;
            Debug.LogWarning("RED");
        }

        //if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
        //{
        //    if (inAirSpace && !(collision.gameObject.name == "ColliderCube"))
        //    {
        //        int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 20) + 50;
        //        if (colourIntensity > 255)
        //        {
        //            colourIntensity = 255;
        //        }
        //        Debug.Log(colourIntensity);
        //        Color padCol = new Color(colourIntensity, 0, 0);
        //        GetComponent<MeshRenderer>().material.color = padCol;
        //        Debug.LogWarning("Variable Enter");
        //        Debug.LogWarning(colourIntensity);
        //        airSpaceTF = true;
        //    }
        //    else if (collision.gameObject.name == "ColliderCube")
        //    {
        //        Color padCol = Color.red;
        //        GetComponent<MeshRenderer>().material.color = padCol;
        //        Debug.LogWarning("Set Red Enter");
        //        colliderTF = true;
        //    }

        //}
    }

    //private void OnCollisionStay(Collision collision)
    //{
    //    bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
    //    float timeInAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().deltaTime;
    //    Debug.Log("In Airspace");
    //    Debug.Log(timeInAirSpace);
    //    if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
    //    {
    //        if (inAirSpace && !(collision.gameObject.name == "ColliderCube"))
    //        {
    //            int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 20) + 50;
    //            if (colourIntensity > 255)
    //            {
    //                colourIntensity = 255;
    //            }
    //            Debug.Log(colourIntensity);
    //            Color padCol = new Color(colourIntensity, 0, 0);
    //            GetComponent<MeshRenderer>().material.color = padCol;
    //            Debug.LogWarning("Variable Stay");
    //            Debug.LogWarning(colourIntensity);
    //        }
    //        else if (collision.gameObject.name == "ColliderCube")
    //        {
    //            Color padCol = Color.red;
    //            Debug.LogWarning("Set Red Stay");
    //        }

    //    }
    //}

    private void OnCollisionExit(Collision collision)
    {
        bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
        if (collision.gameObject.name == "ColliderCube" || inAirSpace == false)
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
            Debug.LogWarning("WHITE");

            if (collision.gameObject.name == "ColliderCube") colliderTF = false;
            if (inAirSpace == false) airSpaceTF = false;
        }
    }


    void Update()
    {

        bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
        airSpaceTF = inAirSpace;
        Debug.LogWarning(inAirSpace);
        float timeInAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().deltaTime;
        if (colliderTF || airSpaceTF)
        {
            if (airSpaceTF && !colliderTF)
            {
                int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 5) + 20;
                if (colourIntensity > 255)
                {
                    colourIntensity = 255;
                }
                Debug.Log(colourIntensity);
                Color padCol = new Color(colourIntensity, 0, 0);
                GetComponent<MeshRenderer>().material.color = padCol;
                Debug.LogWarning("Variable Stay");
                Debug.LogWarning(colourIntensity);
            }
            else if (colliderTF)
            {
                Color padCol = Color.red;
                GetComponent<MeshRenderer>().material.color = padCol;
                Debug.LogWarning("Set Red Stay");
            }
        }
        if (!airSpaceTF && !colliderTF)
        {
            Color padCol = Color.white;
            GetComponent<MeshRenderer>().material.color = padCol;
        }
    }
}
