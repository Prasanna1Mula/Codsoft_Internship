#include <iostream> 
#include <string> 

using namespace std; 
int main() {

  cout << "Welcome to our calculator\n"; 

  int c; 
  cout << "Enter the first number: " << endl; 
  cin >> c; 
  int d; 
  cout << "Enter the second number: " << endl; 
  cin >> d; 

  string operation; 

  cout << "Choose the one amoung the following operation( Add, Subratct, Divide, Multiply): " << endl; 
  cin >> operation; 

  if (operation == Add) { 
    cout << "The addition of two numbers is: " << c + d << "c + d" << endl; 
  }
  else if ( operation == Subtract ) {
    cout << "The subraction of two numbers is: " << c - d << "c - d" << endl; 
  }
  else if ( operation == Divide ) {
    cout << "The Division of two numbers is: " << c / d << "c/d" << endl; 
  }
  else if ( operation == Multiply ) {
    cout << "The multiplication of two numbers is: " << c*d << "c*d" << endl; 
  }
  else {
    cout << "The operation entered is invalid" << endl; 
  }

  cout << "That was a simple calculator ain't it?!" endl; 

  
} 
