
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Adding Numbers
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
    int number, //10 numbers to input    
        totSum, 
        negSum,
        posSum;
    //Initialize Variables
    totSum=negSum=posSum=0;
    //Map Inputs to Outputs -> Process
    cout << "Input 10 numbers, any order, positive or negative\n";  
   
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin >> number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    totSum = posSum + negSum;
    //Display Inputs/Outputs
    cout << "Negative sum =" << setw(4) << negSum << endl
         << "Positive sum =" << setw(4) << posSum <<endl 
         << "Total sum    =" << setw(4) << totSum ;
            
    //Exit the Program - Cleanup
    return 0;
}