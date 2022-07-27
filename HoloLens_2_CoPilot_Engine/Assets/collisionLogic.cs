using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collisionLogic : MonoBehaviour
{
    // Start is called before the first frame update

    //Detect collisions between the GameObjects with Colliders attached
    private void OnCollisionEnter(Collision other)
    {
        GetComponent<MeshRenderer>().material.color = Color.green;
        Debug.LogWarning("GREEN");
    }

    private void OnCollisionExit(Collision other)
    {
        GetComponent<MeshRenderer>().material.color = Color.white;
        Debug.LogWarning("WHITE");
    }
}
