using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{

    public Camera cam;
    public float gunRange = 5000f;

    public void Shoot()
    {
        RaycastHit hit;
        if (Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, gunRange))
        {
            Target target = hit.transform.GetComponent<Target>();
            if (target != null)
            {
                target.Die();
            }
            if (hit.transform.gameObject.tag == "Target")
            {
                target.Die();
            }
        }
    }
}
