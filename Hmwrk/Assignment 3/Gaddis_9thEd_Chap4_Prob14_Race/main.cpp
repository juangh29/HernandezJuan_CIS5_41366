
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 18, 2021, 4:03 AM
 * Purpose:  Race Times
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
    int  tm1,//Time of runner 1
         tm2,//Time of runner 2
         tm3;//Time of runner 3
    string nm1,//Name of runner 1
           nm2,//Name of runner 2
           nm3;//Name of runner 3 
    
    //Display Inputs/Outputs
    cout<<"Race Ranking Program\n"
        <<"Input 3 Runners\n"
        <<"Their names, then their times\n";
    cin >>nm1 >> tm1 >> nm2 >>tm2 >> nm3 >> tm3;
    
    if (tm1>0 && tm2>0 && tm3>0)
    {
        if (tm1>tm2 && tm2>tm3){
            cout<< nm3 << "\t" << setw(3) << tm3 << endl
                << nm2 << "\t" << setw(3) << tm2 << endl
                << nm1 << "\t" << setw(3) << tm1;  
        } else if (tm1>tm3 && tm3>tm2){
            cout<< nm2 << "\t" << setw(3) << tm2 << endl
                << nm3 << "\t" << setw(3) << tm3 << endl
                << nm1 << "\t" << setw(3) << tm1; 
        } else if (tm2>tm1 && tm1>tm3){
            cout<< nm3 << "\t" << setw(3) << tm3 <<endl
                << nm1 << "\t" << setw(3) << tm1 <<endl
                << nm2 << "\t" << setw(3) << tm2; 
        } else if (tm2>tm3 && tm3>tm1){
            cout<< nm1 << "\t" << setw(3) << tm1 <<endl
                << nm3 << "\t" << setw(3) << tm3 << endl
                << nm2 << "\t" << setw(3) << tm2; 
        } else if (tm3>tm2 && tm2>tm1){
            cout<< nm1 << "\t" << setw(3) << tm1 << endl
                << nm2 << "\t "<< setw(3) << tm2 << endl
                << nm3 << "\t" << setw(3) << tm3; 
        } else if (tm3>tm1 && tm1>tm2){
            cout<< nm2 << "\t" << setw(3) << tm2 << endl
                << nm1 << "\t" << setw(3) << tm1 << endl
                << nm3 << "\t" << setw(3) << tm3;
        }
    }
    else if (tm1<=0 || tm2<=0 || tm3<=0)
    {
        cout<<"ERROR! Time cannot be a negative value.";
    }
    //Exit the Program - Cleanup
    return 0;
}


