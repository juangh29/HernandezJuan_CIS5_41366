
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 23, 2021, 11:52 PM
 * Purpose:  Inflation Rate
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
    float tdyPrc, //Price of item today
          prvPrc, //Price of item one year ago
          infRt;  //Inflation Rate
    char  choice; 
    
    //Map Inputs to Outputs -> Process
    do {
        cout<<"Enter current price:\n";
        cin>>tdyPrc;
        cout<<"Enter year-ago price:\n";
        cin>>prvPrc;
        
        infRt= (tdyPrc - prvPrc)/prvPrc;
        
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRt*100<<"%\n\n";
        
        cout<<"Again:\n";
        cin>>choice;
        if (choice == 'y' || choice == 'Y'){
            cout<<endl;
        }
    }while (choice == 'y' || choice == 'Y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}