
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 23, 2021, 6:00 PM
 * Purpose: Printing a rectangle
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
    short int intInp; // integer to be inputted
    char      patt; // letter that will be printed
   
    //Initialize Variables
   
    //Map Inputs to Outputs -> Process
    cin >> intInp;
    cin >> patt;
    
    //Display Inputs/Outputs
    if (intInp >= 15){
        cout << "Input a positive integer no larger than 15.\n";
        cin >> intInp;
        cin >> patt;
    }else {
        for (int a = 0; a < intInp - 1; a++){
            for( int b = 0; b < intInp - 1; b++){
                cout << patt;
            }cout << patt <<endl;
        }for (int c = 0; c < intInp; c++){
            cout << patt;
        }
    }
    
    //Exit the Program - Cleanup
    return 0;
}