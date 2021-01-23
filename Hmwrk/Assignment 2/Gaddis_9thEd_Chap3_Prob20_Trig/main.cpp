/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 15, 2021, 9:23 PM 
 * Purpose:  Trig Functions
 */

//System Libraries
#include <iostream>//I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float pi = 4 * atan(1);
const float rad2Deg = pi/180;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     int deg;
     float rad;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Calculate trig functions\n" 
         << "Input the angle in degrees.\n" ;   
    cin >> deg;
    rad = deg * rad2Deg;
   
    //Display Inputs/Outputs
    cout << setprecision(4) << fixed << showpoint;
    cout << "sin(" << deg << ") = " << sin(rad) << endl;
    cout << "cos(" << deg << ") = " << cos(rad) << endl;
    cout << "tan(" << deg << ") = " << tan(rad) ;
    //Exit the Program - Cleanup 
    return 0;
}