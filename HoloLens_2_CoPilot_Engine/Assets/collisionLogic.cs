using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collisionLogic : MonoBehaviour
{
    // Start is called before the first frame update

    //Detect collisions between the GameObjects with Colliders attached
    private void OnCollisionEnter(Collision collision)
    {
        bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
        if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
        {
            GetComponent<MeshRenderer>().material.color = Color.green;
            Debug.LogWarning("GREEN");
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
        if (collision.gameObject.name == "ColliderCube" || inAirSpace == false)
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
            Debug.LogWarning("WHITE");
        }
    }
}
