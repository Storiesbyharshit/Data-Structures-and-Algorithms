
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main () {
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
 
   // let us have array address in pointer.
   ptr = var;
   
   for (int i = 0; i < MAX; i++) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
 
      // point to the next location
      ptr++;
   }
   
   return 0;
}

#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main () {
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++) {
      *var = i;    // This is a correct syntax
      var++;  // This is incorrect.
      *(var + 2) = 500; //Correct
   }
   
   return 0;
}




