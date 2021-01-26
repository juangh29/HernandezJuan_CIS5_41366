/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 23, 2021, 7:00 PM 
 * Purpose: Triangle Pattern
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constant
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short int rows;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cin >> rows;
    for(int a = 0; a < rows; ++a){
        for(int b = 0; b <= a; ++b){
            cout << "+";
        } cout << endl << endl;
    } for(int a = rows; a >= 2; --a){
        for(int b = 1; b <= a; ++b){
            cout <<"+";
        } cout << endl << endl;
    } cout << "+";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}