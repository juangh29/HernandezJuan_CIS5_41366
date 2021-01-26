
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 25, 2021, 6:00 PM
 * Purpose:  Maximum and minimum float
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
    float f1,   //First float
          f2,   //Second float
          f3,   //Third float
          maxi2, //Maximum of 2 numbers
          maxi3; //Maximum of 3 numbers
    
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> Process
   
    cout << "Enter first number:\n";
    cin >> f1;
    cout << endl << "Enter Second number:\n";
    cin >> f2;
    cout << endl << "Enter third number:\n";
    cin >> f3;
    cout << endl;
    
    if (f1>f2){
        cout << "Largest number from two parameter function:\n"
             << fixed <<setprecision(1) << f1 
             << endl << endl;
    }else if (f2>f1){
        cout << "Largest number from two parameter function:\n"
             << fixed << setprecision(1) 
             << f2 << endl << endl;
    } if (f1>f2 && f1>3){
        cout <<"Largest number from three parameter function:\n"
             << fixed << setprecision(1) 
             << f1 << endl;
    }else if (f2>f1 && f2>3){
        cout <<"Largest number from three parameter function:\n"
             << fixed << setprecision(1) 
             << f2 << endl;
    }else if (f3>f1 && f3>2){
        cout << "Largest number from three parameter function:\n"
             << fixed << setprecision(1) 
             << f3 << endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}
