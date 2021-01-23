
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
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
    unsigned int hseCost, //Cost of Replacement
                 recIns;  // Amount of insurance needed
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Insurance Calculator\n" 
         << "How much is your house worth?\n" ;
    cin >> hseCost ;
    recIns = hseCost * .80; //.80 is the 80% recommended. 
    
    //Display Inputs/Outputs
    cout << "You need $" << recIns 
         << " of insurance." ;
            
    //Exit the Program - Cleanup
    return 0;
}