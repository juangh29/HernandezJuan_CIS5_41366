
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 25, 2021, 5:00 PM
 * Purpose:  Inflation
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
    char  cont; 
    float curPri, //The Current price
          oneYr,  //Price a year ago
          inf,    //Inflation Rate  
          inf1Yr, //Inflated price in one year
          inf2Yr; //Inflated price in two years
    
    //Map Inputs to Outputs -> Process
    do {
        cout << "Enter current price:\n";
        cin >> curPri;
        cout << "Enter year-ago price:\n";
        cin >> oneYr;
        inf = (curPri - oneYr)/oneYr;
        cout << "Inflation rate: " << fixed 
             << setprecision(2) << inf*100 << "%\n\n";
        inf1Yr = curPri + (inf*curPri);
        cout << "Price in one year: $" << fixed 
             << setprecision(2) << inf1Yr << endl;
        inf2Yr = inf1Yr + (inf*inf1Yr);
        cout << "Price in two year: $" << fixed 
             << setprecision(2)<< inf2Yr << endl << endl;
        
        cout << "Again:\n";
        cin >> cont;
        if (cont == 'Y' || cont == 'y'){
            cout << endl;
        }
    }while (cont == 'Y' || cont == 'y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}