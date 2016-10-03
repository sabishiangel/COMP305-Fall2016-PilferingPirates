using UnityEngine;
using UnityEngine.UI;
using System.Collections;

/*Author: Ashley Tjon-Hing
Date: September 26th 2016*/

public class PirateController : MonoBehaviour
{
    //Private Instance Variables
    private int _speed = 3;
    private Transform _transform;


    //Public Properties
    public GameController gameController;
    public int Speed
    {
        get { return this._speed; }
        set { this._speed = value; }
    } //shortcut public+tab+tab


    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();//storing transformations from object into '_transform'; keeps track of position in every frame
    }

    // Update is called once per frame
    void Update()
    {
        this._Move();
        this._BoundaryCheck();
    }

    private void _Move()
    {
        //This method moves the game pirate down the screen
        Vector2 newposition = this._transform.position;
        newposition.y -= this.Speed;
        this.transform.position = newposition;

        if (Input.GetKey(KeyCode.UpArrow)) //
        {
            Vector2 newPosition = this.transform.position; //Old position and new position are equal; must use vector(can be temporary) to modify transform components
            newPosition.y -= this.Speed; //brings the image downwards every frame
            this._transform.position = newPosition; //loops
        }

    }

    //The following method checks if the top of the game object meets the top border of the screen
    private void _BoundaryCheck()
    {
        if (this._transform.position.y <= -780f)
        { this._reset(); }
    }

    //resets object to original position
    private void _reset()
    {
        this._transform.position = new Vector2(Random.Range(-160f, 160f), Random.Range(272f, 330f)); //using new object to shift image back
    }
}
