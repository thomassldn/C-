/* 
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on October 10, 2020, 2:43 PM
 * Desc: Problem 4
 Write a program that simulates a soft drink machine. The program should use a structure

that stores the following data:

Drink Name

Drink Cost

Number of Drinks in Machine

The program should create an array of five structures. The elements should be initialized

with the following data:

Drink Name - Cost - Number in Machine

Cola .75 20

Root Beer .75 20

Lemon-Lime .75 20

Grape Soda .80 20

Cream Soda .80 20

Each time the program runs, it should enter a loop that performs the following

steps: A list of drinks is displayed on the screen. The user should be allowed to

either quit the program or pick a drink. If the user selects a drink, he or she will

next enter the amount of money that is to be inserted into the drink machine. The

program should display the amount of change that would be returned and subtract

one from the number of that drink left in the machine. If the user selects a drink that

has sold out, a message should be displayed. The loop then repeats. When the user

chooses to quit the program it should display the total amount of money the

machine earned.

Input Validation: When the user enters an amount of money, do not accept negative

values, or values greater than $1.00.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

struct VendingMachine {
  string drinkName; 
  float cost; 
  int numOfDrinks; 
}; //create 5 drink objects

//Global variables 

//Function prototypes
void initializeDrinks(VendingMachine []);
void displayDrinks(VendingMachine);


//Execution begins 
int main(int argc, char** argv) {

    //Declaration of variables 
    VendingMachine drinks[5];//create an array of five drink objects 
    
    initializeDrinks(drinks);


    return 0;

}//End main

//Function definitions 
void initializeDrinks(VendingMachine drinks[]){
    
    bool quit = true; //used to let the user quit  
    string drink = " ";
    char quitChoice;
    int amnt  =  0.0, chng = 0.0;
    int choice = 0; 
    
    //initialize drinks
    drinks[0].drinkName = "Cola";
    drinks[0].cost = 75;
    drinks[0].numOfDrinks = 20;
    
    drinks[1].drinkName = "Root Beer";
    drinks[1].cost = 75 ;
    drinks[1].numOfDrinks = 20;
    
    drinks[2].drinkName = "Lemon-Lime";
    drinks[2].cost = 75;
    drinks[2].numOfDrinks = 20;
    
    drinks[3].drinkName = "Grape Soda";
    drinks[3].cost = 80;
    drinks[3].numOfDrinks = 20;
    
    drinks[4].drinkName = "Cream Soda";
    drinks[4].cost = 80;
    drinks[4].numOfDrinks = 20;
    //
    
    while( quit ){
        
        for( int  i = 0; i < 5; i++){
            
        displayDrinks(drinks[i]);
        
        }
        
            //ask user for drink choice
            
            cout << "\nEnter drink: "; 
            
            getline( cin, drink); 
            
            //Ask user to enter dollar ammount
            amnt = 0.0;    
            cout << "\nEnter dollar ammount: $";
            cin >> amnt;    
            
            if( drink == "Cola" ) choice = 1; 
            if( drink == "Root Beer" ) choice = 2; 
            if( drink == "Lemon-Lime" ) choice = 3;
            if( drink == "Grape Soda" ) choice = 4;
            if( drink == "Cream Soda" ) choice = 5;
           
            switch (choice) {
                case 1:
                    --drinks[0].numOfDrinks;
                    chng = amnt * 100 - drinks[0].cost;
                    break; 
                case 2:
                    --drinks[1].numOfDrinks;
                    chng = amnt * 100 - drinks[1].cost;
                    break;
                case 3:
                    --drinks[2].numOfDrinks;
                    chng = amnt * 100 - drinks[2].cost;
                    break;
                    
                case 4:
                    --drinks[3].numOfDrinks;
                    chng = amnt * 100 - drinks[3].cost;
                    break;
                    
                case 5:
                    --drinks[4].numOfDrinks;
                    chng = amnt * 100 - drinks[4].cost;
                    break;
                
                default: 
                    cout << "Drink not found!\n";                 
                    
            }//END switch 


           cout << "Change: " << chng;
            
           //user input validation
           while( amnt < 0 || amnt > 100){
                       cout << "Enter dollar ammount greater than 0 and less than $1: ";
                       cin >> amnt;
           }
           
        cout << "\nQuit [y/n]: ";
        cin >>  quitChoice;  
        (quitChoice == 'n') ? quit  = true: quit = false;
        cin.ignore();
            
    }//END WHILE
      
}
void displayDrinks(VendingMachine drink){
        
        cout  << endl << left <<  setw(11) << drink.drinkName << drink.cost << "  " << drink.numOfDrinks << endl; 
        
}

/*Output: 
 Cola       75  20

Root Beer  75  20

Lemon-Lime 75  20

Grape Soda 80  20

Cream Soda 80  20

Enter drink: Cola

Enter dollar ammount: $1
Change: 25
Quit [y/n]: n

Cola       75  19

Root Beer  75  20

Lemon-Lime 75  20

Grape Soda 80  20

Cream Soda 80  20

Enter drink: 

 
 */
