
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Calculating gross pay
 */

//System Libraries
#include <iostream>  //I/O Library
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
    float tmeWrkd,
          payRte,
          totPay;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "This program calculates the gross paycheck.\n" 
         << "Input the pay rate in $'s/hr and the number of hours.\n" ; 
    cin >> payRte >> tmeWrkd ;
    if (tmeWrkd > 40) {
        totPay = (40 * payRte) + (tmeWrkd - 40) * (2 * payRte) ;
        
    } else {
        totPay = payRte * tmeWrkd ;
    } 
   
    //Display Inputs/Outputs
    cout << "Paycheck = $ " << setprecision(2) << fixed << showpoint << setw(7) 
            << totPay ;
   
    //Exit the Program - Cleanup
    return 0;
}