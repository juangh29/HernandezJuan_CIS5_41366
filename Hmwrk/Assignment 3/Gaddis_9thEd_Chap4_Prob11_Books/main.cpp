
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 17, 1:51 AM
 * Purpose:  Book club points
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
    int books;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Book Worm Points\n" << 
            "Input the number of books purchased this month.\n" ;
    cin >> books ;
    cout << "Books purchased = " <<setw(2) << books << endl;
    if (books<=0){
        cout << "Points earned   = " <<setw(2) <<"0";
    } else if(books==1 ) {
        cout << "Points earned   = " <<setw(2) <<"5";
    } else if(books==2) {
        cout << "Points earned   = " <<setw(2) <<"15";
    } else if(books==3){
        cout << "Points earned   = " <<setw(2) <<"30";
    } else {
        cout << "Points earned   = " <<setw(2) <<"60";
    }
        
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}