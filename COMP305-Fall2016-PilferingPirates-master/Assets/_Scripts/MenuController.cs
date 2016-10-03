using UnityEngine;
//reference to UI
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class MenuController : MonoBehaviour {
    public Button startButton;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void startbutton_Click()
    {
        SceneManager.LoadScene("Game");
    }
}
