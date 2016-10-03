using UnityEngine;
using UnityEngine.UI;
using System.Collections;

/*Author: Ashley Tjon-Hing
Date: September 26th 2016*/

public class CodrinController : MonoBehaviour
{
    //Private Instance Variables
    private int _speed = 10;
    private Transform _transform;

    //Public Instance Variables
    public Transform player;

    //Public Properties

    public int Speed
    {
        get { return this._speed; }
        set { this._speed = value; }
    } //shortcut public+tab+tab


    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();//storing transformations from object into '_transform'; keeps track of position in every frame
        player = GameObject.Find("Stephanie1").transform;

        if (!player)
            Debug.Log("ERROR could not find Player!");
    }

    // Update is called once per frame
    void Update()
    {
        this._Move();
    }


    private void _Move()
    {
        this.transform.position = new Vector2(Mathf.Clamp(transform.position.x, -280, 280), Mathf.Clamp(transform.position.y, 170, 195)); //Clamps movement to one area         

        transform.position = Vector2.MoveTowards(transform.position, player.position, _speed * Time.deltaTime);

    }

}
