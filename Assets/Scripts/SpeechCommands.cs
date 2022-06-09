using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;

/*Class contains every speech command created in project  */

public class SpeechCommands : MonoBehaviour
{

    public GameObject model;
    public MeshRenderer mesh;
    //public Material materialColored;
    public int currentColor = 0;
    // Start is called before the first frame update
    void Start()
    {
     
    }

    //Create Anchor speech command
    public void createAnchor(){
        StartCoroutine(Waiter()); //Create coroutine to allow waits
       
    }
    //Courtine
    IEnumerator Waiter() {
        model.GetComponent<AnchorModuleScript>().StartAzureSession();//Start Azure session
        yield return new WaitForSeconds(4);
        //model.GetComponent<AnchorModuleScript>().CreateAzureAnchor(model.Find("model"));
        //model.Find("model").GetComponent<AnchorModuleScript>().CreateAzureAnchor(model);
        AnchorModuleScript sn = model.GetComponent<AnchorModuleScript>(); 
        sn.CreateAzureAnchor(model); //Create Anchor
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().ShareAzureAnchorIdToNetwork(); //Share created Anchor ID to Network
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().StopAzureSession(); // Stop Azure session
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().RemoveLocalAnchor(model); // Remove local anchor to allow user to move object
    }
    // Find anchor and get from network
    public void findAnchor(){
        StartCoroutine(Waiter2());
    }

    IEnumerator Waiter2(){
        model.GetComponent<AnchorModuleScript>().GetAzureAnchorIdFromNetwork(); // Get Anchor ID from network
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().StartAzureSession(); // Start azure session
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().FindAzureAnchor(); // Find anchors
        yield return new WaitForSeconds(4);
        model.GetComponent<AnchorModuleScript>().StopAzureSession(); // Stop azure session
    }

    //Create red cube and make it grabbable and can be moved
    public void createCube(){
        GameObject cubeObject = GameObject.CreatePrimitive(PrimitiveType.Cube); //Create cube
        cubeObject.AddComponent<BoxCollider>(); // Add collider
        cubeObject.AddComponent<ConstraintManager>(); // Add Manager 
        cubeObject.AddComponent<NearInteractionGrabbable>(); // Add ability to grab cube
        cubeObject.AddComponent<ObjectManipulator>(); // Add ability to manipulate cube
        
        /*if you need add position, scale and color to the cube*/
        cubeObject.transform.position = Camera.main.transform.position + Camera.main.transform.forward; // Set placement of cube to be infront of hololens
        cubeObject.transform.localScale = new Vector3(0.25f, 0.25f, 0.25f); // Set size of cube
        cubeObject.GetComponent<MeshRenderer>().material.color = Color.red  ; // Set color of cube

    }
    //Toggles bettwen showing the gameobjects mesh or not
    public void toggleModel(){
        if(mesh.enabled){
            mesh.enabled = false;
        }
        else{
            mesh.enabled = true;
        }
    }
    //Changes the color of the gameobject between 4 colors
    public void changeColorModel(){
       if(currentColor == 0){
            model.GetComponent<MeshRenderer>().material.color = new Color(106, 255, 0);
            
        }
        if(currentColor == 1){
            model.GetComponent<MeshRenderer>().material.color = new Color(231, 213, 0);
           
        }
        if(currentColor == 2){
            model.GetComponent<MeshRenderer>().material.color = new Color(255, 160, 0);
            
        }
        if(currentColor == 3){
            model.GetComponent<MeshRenderer>().material.color = new Color(0, 166, 255);
            currentColor = -1;
            
        }
        currentColor = currentColor + 1;
    }

}
