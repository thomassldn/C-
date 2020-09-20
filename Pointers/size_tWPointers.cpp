/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Demonstrating size_t
*/

#include <iostream>

using namespace std;

size_t getPtrSize( double * ); //size_t is usually an unsigned int

int main (){

  int SIZE = 20;
  double array[SIZE];

  cout << "The number of bytes in the array is: " << sizeof(array);
  cout << "\nThe number of bytes help by a pointer: " << getPtrSize( array);
  cout << endl;

  return 0;

}

size_t getPtrSize( double * Ptr){

  return sizeof(Ptr);
}


/*
OUTPUT: 

MAC$ ./a.out
The number of bytes in the array is: 160
The number of bytes help by a pointer: 8

*/
