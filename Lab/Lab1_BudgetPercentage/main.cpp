
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 11, 2021, 6:57 PM
 * Purpose:  Mil budget as a percentage of 
 *           federal budget.
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
    float milBdgt,
          fedBdgt,
          mlProg,
          mlPrcnt;
    
    //Initialize Variables
    milBdgt = 7.0e11f ;
    fedBdgt = 4.1e12f ;
    //Map Inputs to Outputs -> Process
    mlProg = milBdgt / fedBdgt ; 
    mlPrcnt = mlProg * 100;
    //Display Inputs/Outputs
    cout << "The military budget is " << mlPrcnt <<
            " percent of the federal budget. \n" ;
    //Exit the Program - Cleanup
    return 0;
}