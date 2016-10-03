using UnityEngine;
using System.Collections;

/*Author: Ashley Tjon-Hing
Date: September 26th 2016*/

public class StephanieController : MonoBehaviour {
    //Private Instance Variables
    private int _speed = 2;
    private Transform _transform;
    private int _livesValue = 5;

    //Public Instance Variables

    [Header("Sounds")]
    public AudioSource yikes;
    public AudioSource coins;
    public AudioSource backgroundMusic;
    public AudioSource bossMusic;


    //Public Properties
    public int Speed
    {
        get { return this._speed; }
        set { this._speed = value; }
    }

    public GameController gameController;

    public int scoreValue
    {
        get { return this.gameController.score; }
        set
        {
            this.gameController.score = value;
            this.gameController.scoreLabel.text = "Score: " + this.gameController.score;
        }
    }

    public int livesValue
    {
        get { return this._livesValue; }
        set
        {
            this._livesValue = value;
            this.gameController.livesLabel.text = "Lives: " + this._livesValue;
        }
    }

    // Use this for initialization
    void Start () {
        this._transform = this.GetComponent<Transform>();//storing transformations from object into '_transform'; keeps track of position in every frame
        backgroundMusic.Play();
        backgroundMusic.loop = true;
    }
	
	// Update is called once per frame
	void Update () {

        this._Move();

	
	}

    private void _Move()
    {

        this.transform.position = new Vector2(Mathf.Clamp(transform.position.x, -165, 165), Mathf.Clamp(transform.position.y, -190, 50)); //Clamps movement to one area

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

    void OnTriggerEnter2D(Collider2D otherGameObject)
    {
        if (otherGameObject.CompareTag("Treasure"))
        {
            this.scoreValue += 100;
            coins.Play();
            if (scoreValue == 100)
            {
                Instantiate(gameController.pirate);
            }

            if (scoreValue == 200)
            {
                Instantiate(gameController.pirate);
            }

            if (scoreValue == 300)
            {
                Instantiate(gameController.pirate);
            }

            if (scoreValue == 400)
            {
                Instantiate(gameController.pirate);
            }

            if (scoreValue == 500)
            {
                gameController.Codrin.SetActive(true);
                backgroundMusic.Stop();
                backgroundMusic.loop = false;
                bossMusic.Play();
                bossMusic.loop = true;
            }
        }

        if (otherGameObject.CompareTag("Pirate"))
        {
            this.livesValue -= 1;
            yikes.Play();
            if (livesValue <= 0)
            {
                backgroundMusic.Stop();
                backgroundMusic.loop = false;
                bossMusic.Stop();
                bossMusic.loop = false;
                gameController.endGame();
            }

        }

        if (otherGameObject.CompareTag("Canonball"))
        {
            this.livesValue -= 1;
            yikes.Play();
            if (livesValue <= 0)
            {               
                backgroundMusic.Stop();
                backgroundMusic.loop = false;
                bossMusic.Stop();
                bossMusic.loop = false;
                gameController.endGame();
            }

        }
    }


}

    

