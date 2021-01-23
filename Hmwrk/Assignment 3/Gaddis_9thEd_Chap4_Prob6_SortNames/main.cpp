
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 17, 2021, 1:12 AM
 * Purpose: Sort Names 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    string n1, //First name
           n2, //Second name
           n3; //Third name

    //Initialize Variables

    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout<<"Sorting Names\n";
    cout<<"Input 3 names\n";
    cin>>n1;
    cin>>n2;
    cin>>n3;

    if (n1>n2 && n2>n3)
        cout<< n3 << endl << n2 << endl << n1;
    else if (n1>n3 && n3>n2)
        cout<< n2 << endl << n3 << endl << n1;
    else if (n2>n3 && n3>n1)
        cout<< n1 << endl << n3 << endl << n2;
    else if (n2>n1 && n1>n3)
        cout<< n3 << endl << n1 << endl << n2;
    else if (n3>n1 && n1>n2)
        cout<< n2 << endl << n1 << endl << n3;
    else if (n3>n2 && n2>n1)
        cout<< n1 << endl << n2 << endl << n3;
    //Exit the Program - Cleanup
    return 0;
}