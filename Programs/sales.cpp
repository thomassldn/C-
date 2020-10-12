/*
 * File:
 * Author: Thomas Saldana
 * Created on 10 Oct 2020
 * Purpose:
 Write a program that uses a structure to store the following data on a company division:

Division Name(such as East, West, North, or South)

First-Quarter Sales

Second-Quarter Sales

Third-Quarter Sales

Fourth-Quarter Sales

Total Annual Sales

Average Quarterly Sales

The program should use four variables of this structure. Each variable should represent on of the following corporate divisions: East, West, North, and South. The user should be asked for the four quarters' sales figures for each division. Each division's total and average sales should be calculated and stored in the appropriate member of each structure variable. These figures should then be displayed on the screen.
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

struct divisions {

  float firstQtr; //first quarter sales
  float secondQtr;//second quarter sales
  float thirdQtr; //third quarter sales
  float fourthQtr;//fourth quarter sales

}North, West, East, South;

//Function Prototypes
void displayQuestions();

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variable Data Types and Constants
    const int arrSize = 4;
    string division [arrSize] = {"North", "West", "East", "South"};

    //Process or map Inputs to Outputs
    displayQuestions();


    return 0;

}//END main()

//Function Definitions
void displayQuestions(){

      //North
      cout << "North\n";
      cout << "Enter first quarter sales: $\n";
      cin >> North.firstQtr;
      cout << "Enter second quarter sales: $\n";
      cin >> North.secondQtr;
      cout << "Enter third quarter sales: $\n";
      cin >> North.thirdQtr;
      cout << "Enter fourth quarter sales: $\n";
      cin >> North.fourthQtr;
      cout << "Total Annual Sales: $" << fixed << setprecision(2) << (North.firstQtr +  North.secondQtr + North.thirdQtr + North.fourthQtr);
      cout << "\nAverage Quarterly Sales: $" << ((North.firstQtr +  North.secondQtr + North.thirdQtr + North.fourthQtr) / 4);

      //West
      cout << "\nWest\n";
      cout << "Enter first quarter sales: $\n";
      cin >> West.firstQtr;
      cout << "Enter second quarter sales: $\n";
      cin >> West.secondQtr;
      cout << "Enter third quarter sales: $\n";
      cin >> West.thirdQtr;
      cout << "Enter fourth quarter sales: $\n";
      cin >> West.fourthQtr;
      cout << "Total Annual Sales: $" << (West.firstQtr + West.secondQtr + West.thirdQtr + West.fourthQtr);
      cout << "\nAverage Quarterly Sales: $" << ((West.firstQtr + West.secondQtr + West.thirdQtr + West.fourthQtr) / 4);

      //East
      cout << "\nEast\n";
      cout << "Enter first quarter sales: $\n";
      cin >> East.firstQtr;
      cout << "Enter second quarter sales: $\n";
      cin >> East.secondQtr;
      cout << "Enter third quarter sales: $\n";
      cin >> East.thirdQtr;
      cout << "Enter fourth quarter sales: $\n";
      cin >> East.fourthQtr;
      cout << "Total Annual Sales: $" << (East.firstQtr + East.secondQtr + East.thirdQtr + East.fourthQtr);
      cout << "\nAverage Quarterly Sales: $" << ((East.firstQtr + East.secondQtr + East.thirdQtr + East.fourthQtr) / 4);

      //South
      cout << "\nSouth\n";
      cout << "Enter first quarter sales: $\n";
      cin >> South.firstQtr;
      cout << "Enter second quarter sales: $\n";
      cin >> South.secondQtr;
      cout << "Enter third quarter sales: $\n";
      cin >> South.thirdQtr;
      cout << "Enter fourth quarter sales: $\n";
      cin >> South.fourthQtr;
      cout << "Total Annual Sales: $" << (South.firstQtr + South.secondQtr + South.thirdQtr + South.fourthQtr);
      cout << "\nAverage Quarterly Sales: $" << ((South.firstQtr + South.secondQtr + South.thirdQtr + South.fourthQtr) / 4 ) << endl;

}


/* OUtput:
North↵
Enter·first-quarter·sales:↵
Enter·second-quarter·sales:↵
Enter·third-quarter·sales:↵
Enter·fourth-quarter·sales:↵
Total·Annual·sales:$4400.00↵
Average·Quarterly·Sales:$1100.00↵
West↵
Enter·first-quarter·sales:↵
Enter·second-quarter·sales:↵
Enter·third-quarter·sales:↵
Enter·fourth-quarter·sales:↵
Total·Annual·sales:$4400.00↵
Average·Quarterly·Sales:$1100.00↵
East↵
Enter·first-quarter·sales:↵
Enter·second-quarter·sales:↵
Enter·third-quarter·sales:↵
Enter·fourth-quarter·sales:↵
Total·Annual·sales:$6800.00↵
Average·Quarterly·Sales:$1700.00↵
South↵
Enter·first-quarter·sales:↵
Enter·second-quarter·sales:↵
Enter·third-quarter·sales:↵
Enter·fourth-quarter·sales:↵
Total·Annual·sales:$6000.00↵
Average·Quarterly·Sales:$1500.00
*/
