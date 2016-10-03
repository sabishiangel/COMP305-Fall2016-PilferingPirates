using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

/*Author: Ashley Tjon-Hing
Date: September 26th 2016*/

public class GameController : MonoBehaviour {
    //Private Instance Variables
    

    //Public Instance Variables (Testing)
    public int pirateNumber = 1;
    public GameObject pirate;
    public int score = 0;


    [Header ("Labels")]
    public Text livesLabel;
    public Text scoreLabel;
    public Text gameOverLabel;
    public Text finalLabel;
    public Button restartButton;

    [Header("Game Objects")]
    public GameObject Stephanie;
    public GameObject Treasure;
    public GameObject Codrin;

    [Header("Music")]
    public AudioSource endMusic;

    // Use this for initialization
    void Start () {

        gameOverLabel.gameObject.SetActive(false);
        finalLabel.gameObject.SetActive(false);
        restartButton.gameObject.SetActive(false);
        Codrin.gameObject.SetActive(false);

        for (int pirateCount = 0; pirateCount < this.pirateNumber; pirateCount++)
        {
            Instantiate(pirate);
        }
    }
	
	// Update is called once per frame
	void Update () {

	}

    public void endGame()
    {
        this.scoreLabel.gameObject.SetActive(false);
        this.livesLabel.gameObject.SetActive(false);
        this.gameOverLabel.gameObject.SetActive(true);
        this.finalLabel.gameObject.SetActive(true);
        this.finalLabel.text = "Score: " + this.score;
        this.restartButton.gameObject.SetActive(true);
        this.Stephanie.SetActive(false);
        this.Treasure.SetActive(false);
        this.Codrin.SetActive(false);
        endMusic.Play();
        endMusic.loop = true;
    }

    public void restart_click()
    {
        SceneManager.LoadScene("Game");
    }
}
