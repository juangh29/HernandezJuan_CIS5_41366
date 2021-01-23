
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 17, 2021, 1:55 AM
 * Purpose:  Checking for bank charges
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

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
    int   checks; // number of checks written

    float blnc, // starting balance
          chkFee, // fee per check
          mthBlnc, // Balance after monthly fee
          feeBlnc, // balance after possible low balance fee
          finBal,  // final balance 
          lbFee,   // low balance fee
          mthFee = 10 ; // Monthly fee
    //Initialize Variables

    //Map Inputs to Outputs -> Process
    cout << "Monthly Bank Fees\n" <<
            "Input Current Bank Balance and Number of Checks\n" ;
    cin >> blnc >> checks ;
    cout << fixed << setprecision(2) << showpoint;
     if (blnc < 0){
        cout << "Attention this account is overdrawn." ;
    }
    mthBlnc = blnc - mthFee ;

    if (blnc < 400){
        lbFee = 15 ;
        feeBlnc = mthBlnc - lbFee; 
    }  else if (blnc >= 400) {
        lbFee = 0;
        feeBlnc = mthBlnc ;
    }
    if (checks < 20 && checks > 0){
        chkFee = checks * .10 ;
    } else if (checks >= 20 && checks < 40){
        chkFee = checks * .08 ;
    } else if (checks >= 40 && checks < 60){
        chkFee = checks * .06 ;
    } else if (checks >= 60){
        chkFee = checks * .04 ;
    }

    finBal = feeBlnc - chkFee;

    //Display Inputs/Outputs
    cout << "Balance     $" << setw(9) << blnc << endl 
         << "Check Fee   $" << setw(9) << chkFee << endl 
         << "Monthly Fee $" << setw(9) << mthFee << endl 
         << "Low Balance $" << setw(9) << lbFee << endl 
         << "New Balance $" << setw(9) << finBal ;
    //Exit the Program - Cleanup
    return 0;
}