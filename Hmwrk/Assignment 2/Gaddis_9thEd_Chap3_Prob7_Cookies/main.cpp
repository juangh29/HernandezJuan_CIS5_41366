
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 15, 2021, 7:44 PM
 * Purpose:  Calories of cookies consumed
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned int cookEat, //Cookies Eaten
                 calEat, // Total Calories
                 cookCal; // Calories per cookie
    //Initialize Variables
    cookCal = 75 ;
            
    //Map Inputs to Outputs -> Process
   
    //Display Inputs/Outputs
    cout << "Calorie Counter\n" << "How many cookies did you eat?\n" ;
    cin >> cookEat ;
    calEat = cookCal * cookEat ;
    cout << "You consumed " << calEat <<" calories." ;
   
    //Exit the Program - Cleanup
    return 0;
}