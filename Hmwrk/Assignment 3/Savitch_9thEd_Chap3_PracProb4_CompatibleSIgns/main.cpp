
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 18, 2021, 2:53 AM
 * Purpose:  Checking Compatible Signs
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
    string sign1,
           sign2;
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Horoscope Program which examines compatible signs.\n"
         << "Input 2 signs.\n" ;
    cin >> sign1 >> sign2 ;
    if(sign1 == "Taurus" && sign2 == "Virgo" || sign1 == "Taurus" && sign2 == "Capricorn" ||
       sign1 == "Virgo" && sign2 == "Taurus" || sign1 == "Virgo" && sign2 == "Capricorn" ||
       sign1 == "Capricorn" && sign2 == "Taurus" || sign1 == "Capricorn" && sign2 == "Virgo" ||
       sign1 == "Taurus" && sign2 == "Taurus" || sign1 == "Virgo" && sign2 == "Virgo" ||
       sign1 == "Capricorn" && sign2 == "Capricorn"){
        cout << sign1 << " and " << sign2 << " are compatible Earth signs." ;
    }else if(sign1 == "Aries" && sign2 == "Leo" || sign1 == "Aries" && sign2 == "Sagittarius" ||
             sign1 == "Aries" && sign2 == "Aries" || sign1 == "Leo" && sign2 == "Aries" ||
             sign1 == "Leo" && sign2 == "Sagittarius" || sign1 == "Leo" && sign2 == "Leo" ||
             sign1 == "Sagittarius" && sign2 == "Aries" || sign1 == "Sagittarius" && sign2 == "Leo"||
             sign1 == "Sagittarius" && sign2 == "Sagittarius"){
        cout << sign1 << " and " << sign2 << " are compatible Fire signs." ;
    }else if(sign1 == "Gemini" && sign2 == "Libra" || sign1 == "Gemini" && sign2 == "Aquarius" ||
             sign1 == "Gemini" && sign2 == "Gemini" || sign1 == "Libra" && sign2 == "Gemini" ||
             sign1 == "Libra" && sign2 == "Aquarius" || sign1 == "Libra" && sign2 == "Libra" ||
             sign1 == "Aquarius" && sign2 == "Gemini" || sign1 == "Aquarius" && sign2 == "Libra"||
             sign1 == "Aquarius" && sign2 == "Aquarius"){
        cout << sign1 << " and " << sign2 << " are compatible Air signs." ;
        
    }else if(sign1 == "Cancer" && sign2 == "Scorpio" || sign1 == "Cancer" && sign2 == "Pisces" ||
             sign1 == "Cancer" && sign2 == "Cancer" || sign1 == "Scorpio" && sign2 == "Cancer" ||
             sign1 == "Scorpio" && sign2 == "Pisces" || sign1 == "Scorpio" && sign2 == "Scorpio" ||
             sign1 == "Pisces" && sign2 == "Cancer" || sign1 == "Pisces" && sign2 == "Scorpio" ||
             sign1 == "Pisces" && sign2 == "Pisces"){
        cout << sign1 << " and " << sign2 << " are compatible Water signs." ;   
    }else{
         cout << sign1 << " and " << sign2 << " are not compatible signs." ;
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}