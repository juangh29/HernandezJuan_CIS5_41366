
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 19, 2021, 3:00 PM
 * Purpose:  Change numbers to Roman numerals
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned int   noInp; // Number inputted
             char  thou,  //How many 1000's
                   hund,   //How many 100's
                   ten,    //How many 10's
                   sing;     //How many 1's
    
    //Process or map Inputs to Outputs
    cout<<"Arabic to Roman numeral conversion.\n";
    cout<<"Input the integer to convert.\n";
    cin>>noInp;
    
    if(noInp>=1000&&noInp<=3000){
    cout<<noInp<<" is equal to ";
     
        //Determine 1000's, 100's, 10's, 1's
        thou = noInp/1000;
        hund = (noInp - thou * 1000)/100;
        ten = (noInp - thou * 1000 - hund *100)/10;
        sing = noInp%10;
        
        //Output the number of 1000's in Roman Numerals
        switch(thou){
            case 3: cout<<'M';
            case 2: cout<<'M';
            case 1: cout<<'M';
        }
        
        //Number of 100's
        cout<<(hund == 9? "CM":
               hund == 8? "DCCC":
               hund == 7? "DCC":
               hund == 6? "DC":
               hund == 5? "D":
               hund == 4? "CD":
               hund == 3? "CCC":
               hund == 2? "CC":
               hund == 1? "C":"");
        
        //Number of 10's
        if(ten==9) cout << "XC";
        if(ten==8) cout << "LXXX";
        if(ten==7) cout << "LXX";
        if(ten==6) cout << "LX";
        if(ten==5) cout << "L";
        if(ten==4) cout << "XL";
        if(ten==3) cout << "XXX";
        if(ten==2) cout << "XX";
        if(ten==1) cout << "X";
        
        //Number of 1's
        if(sing==9)     cout << "IX";
        else if(sing==8){
            cout << "VIII";
        }
        else if(sing==7){
          cout << "VII";
        }
        else if(sing==6){
            cout << "VI";
        }
        else if(sing==5){
            cout << "V";
        }
        else if(sing==4){
            cout << "IV";
        }
        else if(sing==3){
            cout << "III";
        }
        else if(sing==2) {
            cout << "II";
        }
        else if(sing==1){ 
            cout << "I";
        }
        }else{
        cout << noInp << " is Out of Range!";
    }
    return 0;
}
