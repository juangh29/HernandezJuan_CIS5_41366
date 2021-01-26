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
    short int lsOne, //liters
              lsTwo,
              miOne, //miles
              miTwo;
    float     mpgOne, //miles per gallon
              mpgTwo;
    char      cont; // to continue the loop 
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    do{
        cout << "Car 1\n" ;
        cout << "Enter number of liters of gasoline:\n";
        cin >> lsOne;
        cout << "Enter number of miles traveled:\n";
        cin >> miOne;
      
        mpgOne = miOne/(lsOne*CNVGAL);
        cout << "miles per gallon: " << fixed << setprecision(2)
             << mpgOne << endl << endl;
         
         cout << "Car 2\n" ;
        cout << "Enter number of liters of gasoline:\n";
        cin >> lsTwo;
        cout << "Enter number of miles traveled:\n";
        cin >> miTwo;
        
        mpgTwo = miTwo/(lsTwo*CNVGAL);
        cout << "miles per gallon: " << fixed << setprecision(2)
             << mpgTwo << endl << endl;
       
        if (mpgOne > mpgTwo){
            cout << "Car 1 is more fuel efficient\n" << endl;
        }if(mpgTwo > mpgOne){
            cout << "Car 2 is more fuel efficient\n" << endl; 
        }
        cout << "Again:\n";
        cin >> cont;
        if (cont == 'Y' || cont == 'y'){
            cout <<endl;
        }
    }while(cont == 'Y' || cont == 'y');
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}