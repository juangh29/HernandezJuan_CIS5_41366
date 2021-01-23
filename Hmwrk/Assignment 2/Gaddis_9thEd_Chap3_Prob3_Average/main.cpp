
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 15, 2021,  6:32 PM
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
               float score1,
                     score2,
                     score3,
                     score4,
                     score5,
                     avg;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
 
    cout <<"Input 5 numbers to average.\n";
    cin >> score1 >> score2 >> score3 >> score4 >> score5 ;
    avg = (score1 + score2 + score3 + score4 + score5)/ 5;
   
    //Display Inputs/Outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "The average = " 
         << avg ;
            
    //Exit the Program - Cleanup
    return 0;
}