//Deitel Chp5, 311

#include <iostream>

using namespace std;

void cubeByReference( int * );

int main(){

  int num = 5;

  cout << "The original value of number is " << num;

  cubeByReference( &num );
  cout << "\n After cubing by reference, the value of num is " << num << endl;



  return 0;
}

void cubeByReference( int *nPtr ){

  *nPtr = *nPtr * *nPtr * *nPtr;

}

//OUTPUT:
//The original value of number is 5


