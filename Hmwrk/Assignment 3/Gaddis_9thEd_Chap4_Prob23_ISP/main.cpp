
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 18, 2021, 4:00 AM
 * Purpose:  ISP Sub Services
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    short int  hrsUse,     
               pkHrs, //Hours provided for each package
               exHrs;  //Pay rate for extra hours
    char       pkg;           //Package type
    float      finBill, //Monthly Bill
               mnthCrg;  //Monthly base charge for package

    //Display the outputs
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin >> pkg >> hrsUse;

    switch(pkg)
    {
        case'A':
            mnthCrg = 9.95;
            pkHrs = 10;
            exHrs = 2;
            break;
        case 'B':
            mnthCrg = 14.95;
            pkHrs = 20;
            exHrs = 1;
            break;
        case 'C':
            mnthCrg = 19.95;
            pkHrs = 0;
            exHrs = 0;
            break;
        default:
            cout << "You did not enter A, B, or C\n";
    }
    if (hrsUse > pkHrs){
        finBill= mnthCrg + (hrsUse - pkHrs) * exHrs;
    }else if (hrsUse <= pkHrs){
        finBill= mnthCrg;
    }
    if (hrsUse>744)
        cout<<"Number of hours cannot exceed over 744\n";

    cout << "Bill = $" << fixed << setprecision(2) << setw(6) << finBill;
    
    return 0;
}