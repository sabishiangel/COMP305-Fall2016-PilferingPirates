using UnityEngine;
using System.Collections;

public class StephanieController : MonoBehaviour {
    //Private Instance Variables
    private int _speed = 2;
    private Transform _transform;

    //Public Properties
    public int Speed
    {
        get { return this._speed; }
        set { this._speed = value; }
    }
    // Use this for initialization
    void Start () {
        this._transform = this.GetComponent<Transform>();//storing transformations from object into '_transform'; keeps track of position in every frame
    }
	
	// Update is called once per frame
	void Update () {

        this._Move();
	
	}

    private void _Move()
    {

        this.transform.position = new Vector2(Mathf.Clamp(transform.position.x, -165, 165), Mathf.Clamp(transform.position.y, -184, 184)); //Clamps movement to one area

        if (Input.GetKey(KeyCode.UpArrow)) //allows player to choose to move forward
        {
            Vector2 newPosition = this.transform.position; //Old position and new position are equal; must use vector(can be temporary) to modify transform components
            newPosition.y += this._speed; //brings the image downwards every frame
            this._transform.position = newPosition; //loops
        }

        if (Input.GetKey(KeyCode.DownArrow)) //allows player to move backward
        {
            Vector2 newPosition = this.transform.position;
            newPosition.y -= this._speed; // brings the image up every frame
            this._transform.position = newPosition;               
        }

        if (Input.GetKey(KeyCode.LeftArrow)) //allows player to choose to move left
        {
            Vector2 newPosition = this.transform.position;
            newPosition.x -= this._speed*2; //brings the image left every frame
            this._transform.position = newPosition; 
        }

        if (Input.GetKey(KeyCode.RightArrow)) //allows player to move right
        {
            Vector2 newPosition = this.transform.position;
            newPosition.x += this._speed*2; //brings the image right every frame
            this._transform.position = newPosition; 
        }

    }
}
