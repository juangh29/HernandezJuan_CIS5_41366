/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 23, 2021 8:00 PM
 * Purpose: Outputting car MPG
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float CNVGAL = .264179f; // liters to gal 
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short int ls, //liters
              mi; //miles
    float     mpg; //miles per gallon
    char      cont; // to continue the loop 
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    do{
        cout << "Enter number of liters of gasoline:\n";
        cin >> ls;
        cout << endl <<"Enter number of miles traveled:\n";
        cin >> mi;
        cout << endl;
        mpg = mi/(ls*CNVGAL);
        cout << "miles per gallon:\n" << fixed << setprecision(2)
             << mpg << endl << "Again:\n";
        cin >> cont;
        if (cont == 'Y' || cont == 'y'){
            cout <<endl;
        }
    }while(cont == 'Y' || cont == 'y');
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}