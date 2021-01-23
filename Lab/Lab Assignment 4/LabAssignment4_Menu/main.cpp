
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 19, 2021, 6:23 PM
 * Purpose:  Menu for Assignment 2
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Level Libraries

//Global Constants - Science/Math Related

//Conversions, Higher Dimensions
const float CNVERNGM = 453.592 ;
const float pi = 4 * atan(1);
const float rad2Deg = pi/180;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Savitch Diet Coke Problem"<<endl;
    cout<<"Type 2 for Gaddis Trig Problem"<<endl;
    cout<<"Type 3 for Savitch Sums Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
    float wght, //desired weight
          lthlDse,
          massCan = 350,
          swtCan = 0.001f, // amount of sweetener in can
          massMse = 35, // Mass of mouse
          ldMse = 5 ;  // lethal dose for mouse
    int   nCans; // Number of cans of coke
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Program to calculate the limit of Soda Pop Consumption.\n"
         << "Input the desired dieters weight in lbs.\n" ;
    cin >> wght ;
    nCans = (ldMse*wght*CNVERNGM)/(massMse*massCan*swtCan) ;
    
    //Display Inputs/Outputs
    cout << "The maximum number of soda pop cans\n" 
         << "which can be consumed is " << nCans << " cans" ;
        
    }else if(choice=='2'){
     int deg;
     float rad;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Calculate trig functions\n" 
         << "Input the angle in degrees.\n" ;   
    cin >> deg;
    rad = deg * rad2Deg;
   
    //Display Inputs/Outputs
    cout << setprecision(4) << fixed << showpoint;
    cout << "sin(" << deg << ") = " << sin(rad) << endl;
    cout << "cos(" << deg << ") = " << cos(rad) << endl;
    cout << "tan(" << deg << ") = " << tan(rad) ;
        
    }else if(choice=='3'){
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
   
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}