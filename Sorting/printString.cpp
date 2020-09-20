/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Bubble sort using call-by-refernece and pointers
*/

#include <iostream>

using namespace std;

int main (){


  int choice = 1;

  cout << "What is your symptom: ";
  cout << "\n1) Anxiety\n"
       << "2) Depression\n"
       << "3) Headache\n"
       << "4) Stomach Ache\n";

  cin >> choice;

  if ( choice == 2 ){

    cout << "\nYou need to take Prozac.\n";

  } else if ( choice == 3) {

    cout << "You need to take advil!\n";

  } else if (  choice == 1) {

    cout << "you need to take xanax\n";

  } else if ( choice == 4)  {

    cout << "you need to take pepto\n";
  }

}
