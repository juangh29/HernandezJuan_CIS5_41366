
/* 
 * File:   main.cpp
 * Author: Juan Hernandez
 * Created on January 25, 2021, 7:00 PM
 * Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Level Libraries

//Global Constants - Science/Math Related
float CNVGAL = .264179f; // liters to gal 
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout << "Menu for assignment 4" << endl;
    cout << "Type 1 for Gaddis Sum Problem" << endl;
    cout << "Type 2 for Gaddis Pennies Problem" << endl;
    cout << "Type 3 for Gaddis Min Max Problem" << endl;
    cout << "Type 4 for Gaddis Rectangle Problem" << endl;
    cout << "Type 5 for Gaddis Pattern Problem" << endl;
    cout << "Type 6 for Savitch MPG Problem" << endl;
    cout << "Type 7 for Savitch Fuel Efficiency Problem" << endl;
    cout << "Type 8 for Savitch Inflation Problem" << endl;
    cout << "Type 9 for Savitch 2 Year Inflation Problem" << endl;
    cout << "Type 0 for Savitch Parameter Problem" << endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variables
        unsigned int intInp,// Integer to be inputted.
                     sum = 0; // sum of integers added in loop
        //Initialize Variables

        //Map Inputs to Outputs -> Process

        cin >> intInp;

        for (int count =0; count <= intInp; count++){
            sum += count;
         }
        //Display Inputs/Outputs
        cout << "Sum = " << sum ;
        //Exit the Program - Cleanup 

    }else if(choice=='2'){
        int   days,
          dayPay = 1, // Amount of Pennies a day
          totPay = 0;
        //Map Inputs to Outputs -> Process
        cin >> days;
        while (days <=0){
            cout << "PLease enter a valid number of days\n";
            cin >> days;         
        }
        for (int count=0; count < days; count++){
           totPay += dayPay ;
           dayPay = dayPay * 2;
        }
        //Display Inputs/Outputs
        cout << "Pay = $" << totPay/100 << ".";
        if((totPay%100)<10){
            cout << "0" << totPay % 100;
        }else if((totPay % 100) >= 10){
            cout << totPay % 100; 
        }
        //Exit the Program - Cleanup
        
    }else if(choice=='3'){
        //Declare Variables
        short int numb, //input
                  maxi, // biggest number
                  mini, // smallest number 
                  fin = -99; // End
        //Initialize Variables
        //Map Inputs to Outputs -> Process
        cin >> numb;
        mini = maxi = numb ;
         while (numb != -99){
            if (numb < mini){
                mini = numb;
        }else if (numb > maxi){
            maxi = numb;
        }
            cin >>numb;
        }
        //Display Inputs/Outputs
        cout << "Smallest number in the series is" << setw(2) << mini << endl;
        cout << "Largest  number in the series is" << setw(2) << maxi;  
        //Exit the Program - Cleanup

    }else if(choice=='4'){
        //Declare Variables
        short int intInp; // integer to be inputted
        char      patt; // letter that will be printed
        //Initialize Variables
        //Map Inputs to Outputs -> Process
        cin >> intInp;
        cin >> patt;
        //Display Inputs/Outputs
        if (intInp >= 15){
            cout << "Input a positive integer no larger than 15.\n";
            cin >> intInp;
            cin >> patt;
        }else {
            for (int a = 0; a < intInp - 1; a++){
                for( int b = 0; b < intInp - 1; b++){
                    cout << patt;
                }cout << patt <<endl;
            }for (int c = 0; c < intInp; c++){
                cout << patt;
            }
        }
        //Exit the Program - Cleanup
        
    }else if(choice=='5'){
        short int rows;
        //Initialize Variables
        //Map Inputs to Outputs -> Process
        cin >> rows;
        for(int a = 0; a < rows; ++a){
            for(int b = 0; b <= a; ++b){
                cout << "+";
            } cout << endl << endl;
        } for(int a = rows; a >= 2; --a){
            for(int b = 1; b <= a; ++b){
                cout <<"+";
            } cout << endl << endl;
        } cout << "+";
        //Display Inputs/Outputs
        //Exit the Program - Cleanup
        
    }else if(choice=='6'){
           //Declare Variables
        short int ls, //liters
                  mi; //miles
        float     mpg; //miles per gallon
        char      cont; // to continue the loop 
        //Initialize Variables
        //Map Inputs to Outputs -> Process
        do{
            cout << "Enter number of liters of gasoline:\n";
            cin >> ls;
            cout << endl <<"Enter number of miles traveled:\n";
            cin >> mi;
            cout << endl;
            mpg = mi/(ls*CNVGAL);
            cout << "miles per gallon:\n" << fixed << setprecision(2)
                 << mpg << endl << "Again:\n";
            cin >> cont;
            if (cont == 'Y' || cont == 'y'){
                cout <<endl;
            }
        }while(cont == 'Y' || cont == 'y');
        //Display Inputs/Outputs
        //Exit the Program - Cleanup
        
    }else if(choice=='7'){
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
        
    }else if(choice=='8'){
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
        
    }else if(choice=='9'){
        //Declare Variables
        char  cont; 
        float curPri, //The Current price
              oneYr,  //Price a year ago
              inf,    //Inflation Rate  
              inf1Yr, //Inflated price in one year
              inf2Yr; //Inflated price in two years
        //Map Inputs to Outputs -> Process
        do {
            cout << "Enter current price:\n";
            cin >> curPri;
            cout << "Enter year-ago price:\n";
            cin >> oneYr;
            inf = (curPri - oneYr)/oneYr;
            cout << "Inflation rate: " << fixed 
                 << setprecision(2) << inf*100 << "%\n\n";
            inf1Yr = curPri + (inf*curPri);
            cout << "Price in one year: $" << fixed 
                 << setprecision(2) << inf1Yr << endl;
            inf2Yr = inf1Yr + (inf*inf1Yr);
            cout << "Price in two year: $" << fixed 
                 << setprecision(2)<< inf2Yr << endl << endl;
            cout << "Again:\n";
            cin >> cont;
            if (cont == 'Y' || cont == 'y'){
                cout << endl;
            }
        }while (cont == 'Y' || cont == 'y');
        //Display Inputs/Outputs
        //Exit the Program - Cleanup 
   
    }else if(choice=='0'){
        //Declare Variables
        float f1,   //First float
              f2,   //Second float
              f3,   //Third float
              maxi2, //Maximum of 2 numbers
              maxi3; //Maximum of 3 number
        //Initialize Variables
        //Map Inputs to Outputs -> Process
        cout << "Enter first number:\n";
        cin >> f1;
        cout << endl << "Enter Second number:\n";
        cin >> f2;
        cout << endl << "Enter third number:\n";
        cin >> f3;
        cout << endl;
        if (f1>f2){
            cout << "Largest number from two parameter function:\n"
                 << fixed <<setprecision(1) << f1 
                 << endl << endl;
        }else if (f2>f1){
            cout << "Largest number from two parameter function:\n"
                 << fixed << setprecision(1) 
                 << f2 << endl << endl;
        } if (f1>f2 && f1>3){
            cout <<"Largest number from three parameter function:\n"
                 << fixed << setprecision(1) 
                 << f1 << endl;
        }else if (f2>f1 && f2>3){
            cout <<"Largest number from three parameter function:\n"
                 << fixed << setprecision(1) 
                 << f2 << endl;
        }else if (f3>f1 && f3>2){
            cout << "Largest number from three parameter function:\n"
                 << fixed << setprecision(1) 
                 << f3 << endl;
        }
        //Exit the Program - Cleanup

    }else{
        cout<<"Not an Option"<<endl;
    }
  
    //Clean Up
    
    //Exit stage right!
    return 0;
}