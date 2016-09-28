using UnityEngine;
using System.Collections;

/*Author: Ashley Tjon-Hing
Date: September 26th 2016*/

public class BackgroundController : MonoBehaviour {
    //Private Instance Variables
    private int _speed = 3;
    private Transform _transform;

    //Public Properties
    public int Speed {
        get { return this._speed; }
        set { this._speed = value; }
    } //shortcut public+tab+tab
                                       // Use this for initialization
    void Start () {
        this._transform = this.GetComponent<Transform>();//storing transformations from object into '_transform'; keeps track of position in every frame
	}
	
	// Update is called once per frame
	void Update () {
        this._Move();
        this._BoundaryCheck();
	}

    private void _Move()
    {

        if (Input.GetKey(KeyCode.UpArrow)) //allows player to choose to move forward
        {
            Vector2 newPosition = this.transform.position; //Old position and new position are equal; must use vector(can be temporary) to modify transform components
            newPosition.y -= this._speed; //brings the image downwards every fram
            this._transform.position = newPosition; //resets so that it can continue bringing the image down
        }

        if (Input.GetKey(KeyCode.DownArrow)) //allows player to move backward
        {
            if (this._transform.position.y <= 775f) //prevents too much back-scrolling
                    {
                Vector2 newPosition = this.transform.position; //Old position and new position are equal; must use vector(can be temporary) to modify transform components
                newPosition.y += this._speed; //brings the image up every fram
                this._transform.position = newPosition; //resets so that it can continue bringing the image down
            }

        }

    }

    //The following method checks if the top of the game object meets the top border of the screen
    private void _BoundaryCheck()
    {
        if(this._transform.position.y <=-780f)
        { this._reset(); }
    }

    //resets object to original position
    private void _reset()
    {
        this._transform.position = new Vector2(0f, 780f); //using new object to shift image back
    }
}
