#inlcude <iostream>

using namespace std; 
int main () {

  int num; 
  int guess;
  int tries; 

  srand(time(NULL));
  num = (rand() % 100) + 1; 

  cout << "********* RANDOM NUMBER GUESSING GAME ************* << endl"; 

  do {

    cout << "Enter a number between (1 to 100)": << endl; 
    cin >> guess; 
    tries++; 

    if ( guess > num) {
      cout << "Your guess is too high" << endl; 
    }
    else if ( guess < num ) {
      cout << "Your guess is too low" << endl; 
    } 
    else {
      cout << "The number which you have guessed is correct for tries": << tries << endl; 
    } 
    
  } while ( guess != num)

    cout << "Hope you enjoyed your game.... can try again***" << endl; 

  return 0; 
  
}
