
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Determining fire code violation
 * for a room
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int pplInRm,
        maxInRm,
        rmdr;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Input the maximum room capacity and the number of people\n" ;
    cin >> maxInRm >> pplInRm ;
    if (pplInRm > maxInRm){
        rmdr = pplInRm - maxInRm ;
        cout << "Meeting cannot be held.\n" 
             << "Reduce number of people by " << rmdr 
             << " to avoid fire violation." ;
    } else {
        rmdr = maxInRm - pplInRm ;
        cout << "Meeting can be held.\n" 
             << "Increase number of people by " << rmdr
             << " will be allowed without violation." ;
             
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}