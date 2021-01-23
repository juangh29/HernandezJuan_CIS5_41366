
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 18, 2021, 2:23 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    char p1, //Input of player one
         p2; //Input of player two
    //Initialize Variables

    //Display Inputs/Outputs
    cout<<"Rock Paper Scissors Game\n"
        <<"Input Player 1 and Player 2 Choices\n";
    cin>>p1>>p2;

    if (p1 == 'P' && p2 == 'S' || p1 == 'p' && p2 == 's' ||
        p1 == 'P' && p2 == 's' || p1 == 'p' && p2 == 'S'){
        cout<<"Scissors cuts paper.";
    } else if (p1 == 'P' && p2 == 'R' || p1 == 'p' && p2 == 'r' ||
               p1 == 'P' && p2 == 'r' || p1 == 'p' && p2 == 'R'){
         cout<<"Paper covers rock.";
    } else if (p1 == 'S' && p2 == 'P' || p1 == 's' && p2 == 'p' ||
               p1 == 'S' && p2 == 'p' || p1 == 's' && p2 == 'P' ){
        cout<<"Scissors cuts paper.";
    } else if (p1 == 'S' && p2 == 'R' || p1 == 's' && p2 == 'r' ||
               p1 == 'S' && p2 == 'r' || p1 == 's' && p2 == 'R'){
        cout<<"Rock breaks scissors.";
    } else if (p1 == 'R' && p2 == 'S' || p1 == 'r' && p2 == 's' ||
               p1 == 'R' && p2 == 's' || p1 == 'r' && p2 == 'S'){
        cout<<"Rock breaks scissors.";
    } else if (p1 == 'R' && p2 == 'P' || p1 == 'r' && p2 == 'p' ||
               p1 == 'R' && p2 == 'p' || p1 == 'r' && p2 == 'P' ){
        cout<<"Paper covers rock.";
    } else 
        cout<<"Nobody wins.\n";  
    //Exit the Program - Cleanup
    return 0;
}