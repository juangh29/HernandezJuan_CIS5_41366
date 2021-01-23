
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Diet pop before death
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVERNGM = 453.592 ;
//Function Prototypes

//Execution Begins Here
 int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float wght, //desired weight
          lthlDse,
          massCan = 350,
          swtCan = 0.001f, // amount of sweetener in can
          massMse = 35, // Mass of mouse
          ldMse = 5 ;  // lethal dose for mouse
    int   nCans; // Number of cans of coke
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Program to calculate the limit of Soda Pop Consumption.\n"
         << "Input the desired dieters weight in lbs.\n" ;
    cin >> wght ;
    nCans = (ldMse*wght*CNVERNGM)/(massMse*massCan*swtCan) ;
    
    //Display Inputs/Outputs
    cout << "The maximum number of soda pop cans\n" 
         << "which can be consumed is " << nCans << " cans" ;
    //Exit the Program - Cleanup
    return 0;
}