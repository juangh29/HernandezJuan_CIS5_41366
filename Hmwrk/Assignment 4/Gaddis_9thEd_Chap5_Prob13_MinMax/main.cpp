
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Display a minimum and maximum number.
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
    short int numb, //input
              maxi, // biggest number
              mini, // smallest number 
              fin = -99; // End
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cin >> numb;
    mini = maxi = numb ;
    
     while (numb != -99){
        if (numb < mini){
            mini = numb;
    }else if (numb > maxi){
        maxi = numb;
    }
        cin >>numb;
    }
    //Display Inputs/Outputs
    cout << "Smallest number in the series is" << setw(2) << mini << endl;
    cout << "Largest  number in the series is" << setw(2) << maxi;  
    //Exit the Program - Cleanup
    return 0;
}