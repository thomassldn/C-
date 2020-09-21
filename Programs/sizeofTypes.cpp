/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Demonstrating size_t
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  char c;
  short s;
  int i;
  long l;
  float f;
  double d;
  long double ld;
  int array[20], *Ptr = array;

  cout << "sizeof c = " << sizeof c
       << "\tsizeof(char) = " << sizeof( char )
       << "\nsizeof s = " << sizeof s
       << "\tsizeof short = " << sizeof( short )
       << "\nsizeof i = " << sizeof i
       << "\tsizeof int = " << sizeof(int)
       << "\nsizeof l = " << sizeof l
       << "\tsize of long = " << sizeof(long)
       << "\nsizeof f = " << sizeof f
       << "\tsizeof float = " << sizeof (float)
       << "\nsize of d = " << sizeof d
       << "\tsizeof double = " << sizeof(double)
       << "\nsizeof ld = " << sizeof ld
       << "\tsizeof long double = " << sizeof(long double)
       << "\nsizeof array = " << sizeof array
       << "\nsieof Ptr = " << sizeof Ptr;

  cout << endl;

  return 0;
}





/*
OUTPUT:

MAC$ !.
./a.out
sizeof c = 1    sizeof(char) = 1
sizeof s = 2    sizeof short = 2
sizeof i = 4    sizeof int = 4
sizeof l = 8    size of long = 8
sizeof f = 4    sizeof float = 4
size of d = 8   sizeof double = 8
sizeof ld = 16  sizeof long double = 16
sizeof array = 80
sieof Ptr = 8

*/




