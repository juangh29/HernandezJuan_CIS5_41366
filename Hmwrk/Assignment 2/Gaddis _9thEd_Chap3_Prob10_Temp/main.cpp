
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 15, 2021, 8:33 PM
 * Purpose:  Converting Fahrenheit to Celsius
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
    float fahr,
          cel;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Temperature Converter\n" 
         << "Input Degrees Fahrenheit\n";
    cin >> fahr ;
    cel = (fahr-32) *5/9 ;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
           
    //Display Inputs/Outputs
    cout << fahr << " Degrees Fahrenheit = " 
         << cel << " Degrees Centigrade" ;
    //Exit the Program - Cleanup
    return 0;
}