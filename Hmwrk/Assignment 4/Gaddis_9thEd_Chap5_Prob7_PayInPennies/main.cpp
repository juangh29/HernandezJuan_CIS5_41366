
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Adding a penny for days worked
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
    int   days,
          dayPay = 1, // Amount of Pennies a day
          totPay = 0;
    //Declare Variables
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cin >> days;
    while (days <=0){
        cout << "PLease enter a valid number of days\n";
        cin >> days;         
    }
    
    for (int count=0; count < days; count++){
       totPay += dayPay ;
       dayPay = dayPay * 2;
    }
    //Display Inputs/Outputs
    cout << "Pay = $" << totPay/100 << ".";
    if((totPay%100)<10){
        cout << "0" << totPay % 100;
    }else if((totPay % 100) >= 10){
        cout << totPay % 100; 
    }
    //Exit the Program - Cleanup
    return 0;
}