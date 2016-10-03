using UnityEngine;
using System.Collections;

public class CanonBehaviour : MonoBehaviour {

    //Public Instance Variables
    public Transform player;
    public GameObject canonball;
    public float canonDistance = 5f;
    public float timeBetweenFires = 2.5f;

    float lastFired = -100f; //absolute time of last fired shot

    //Private Instance Variables
    private float timeTilNextFire = 3.0f;

    // Use this for initialization
    void Start () {
        player = GameObject.Find("Stephanie1").transform;
        if (!player)
            Debug.Log("ERROR could not find Player!");

        

    }
	
	// Update is called once per frame
	void Update () {
        Rotation();
        Invoke("ShootCanon", 1f);
        

    }

    void Rotation()
    {
        Vector2 target = player.position;

        float dx = this.transform.position.x - target.x;
        float dy = this.transform.position.y - target.y;

        float angle = Mathf.Atan2(dy, dx) * Mathf.Rad2Deg;

        Quaternion rot = Quaternion.Euler(new Vector3(0, 0, angle - 5));

        this.transform.rotation = rot;
    }

    void ShootCanon()
    {
        //audioSource.PlayOneShot(shootSound, 1.0f);

        if (Time.time < lastFired + timeBetweenFires)
        {
            return;
        }

        lastFired = Time.time;

        GameObject canonballShot = (GameObject)Instantiate(canonball, transform.position, transform.rotation);
        canonballShot.transform.position = transform.position;

        Vector2 direction = player.transform.position - canonballShot.transform.position;

        canonballShot.GetComponent<CanonballBehavior>().setDirection(direction);

    }
}
