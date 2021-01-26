
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 23, 2021, 3:40 PM
 * Purpose:  Adding Integers 
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
    unsigned int intInp,// Integer to be inputted.
                 sum = 0; // sum of integers added in loop
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
   
    cin >> intInp;
    
    for (int count =0; count <= intInp; count++){
        sum += count;
        
    }
   
    //Display Inputs/Outputs
    cout << "Sum = " << sum ;
    //Exit the Program - Cleanup
    return 0;
}