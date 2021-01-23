
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
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
    float prevSal, // previous salary
          prevMo, // previous monthly rate
          payRse = .076, // raise is 7.6%
          retPay, //amount of retroactive pay
          nAnSal, // New annual salary 
          nMoSal; // New monthly salary
          
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Input previous annual salary.\n" ;
    cin >> prevSal ;
    nAnSal = prevSal + (prevSal * payRse); 
    nMoSal = nAnSal/12 ;
    prevMo = prevSal/12 ;
    retPay = (nAnSal/2) - (prevSal/2);
    //Display Inputs/Outputs
   
    cout << fixed << setprecision(2) << showpoint <<setw(7)
         <<"Retroactive pay    = $" << setw(7) << retPay <<  endl   
         <<"New annual salary  = $" << setw(7) << nAnSal << endl 
         <<"New monthly salary = $" << setw(7) << nMoSal ;
    //Exit the Program - Cleanup
    return 0;
}