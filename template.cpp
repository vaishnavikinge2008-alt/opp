#include <iostream>
using namespace std;

// Function template for finding maximun
template <typename T>
T findmax ( T a, T b) {
 return ( a > b) ? a : B;
 }
 
 // Function template for finding minimum
 template < typename T>
 T findmin (T a, T b) {
 return ( a < b) ? a : b;
 } 
 
 // Function template for swapping
 template <typename T >
 void swapValues (T &a, T &b) {
     T temp + a;
     a=b;
     b = temp;
   }
   
   //Function template for finding maximum of three values
   template <typename T >
   T findmax3 ( T a, T b, T c) {
           T max = a;
           if (b > max) max = b;
           if (c > max) max = c;
           return max;
    }
    
    //Function template for finding minimum of three values
    template <typename T >
    T findmin3 ( T a, T b, T c) {
       T min = a;
       if ( b < min ) min = b;
       if ( c < min ) min c;
       return min;
    } 
    
    //Function template with multiple types
    template < typename T , typename U>
    void displaycomparison ( T a, U b) {
       cout << "comparing" << a << " ( type" << typeid(a) . name() << " ) a  << b << "(type " << typeid(b). name() << ") " << endl;
       cout << "Max: " << (( a > b ) ? a : b) << endl;
       cout << "min: " << (( a < b ) ? a : b) << endl;
      } 
      
      
     int main() {
      cout << "==== Function Templates =====" << endl;
      
      // INteger operations
      int int1 = 10, int2 = 20;
      cout << '\n----Integer operations -I-" << endl;
      cout << "values:" << int1 << ","<< int2 << endl;
      cout << " max (3 values): " << findmax3(f1,f2,f3) endl;
    
