#include <iostream>
using namespace std;

// Lab 6 — Genesis Martinez
// CIS 5 Week 06 · Even and odd

int main() {
  // -----------------------------------------
  // FOR LOOP SECTION: sum even numbers 0 to 100
  // -----------------------------------------
  int evenSum = 0;
  // Start at 0, go to 100, jump by 2 each time
  for (int i = 0; i <= 100; i = i + 2) {   // custom updater: i = i + 2 
  evenSum += i;
  }

cout << "Sum of even numbers (0-100): " << evenSum << endl;


  // ----------------------------------------
  // WHILE LOOP: sum odd numbers from 1 to 99
  // ----------------------------------------
  int oddSum = 0;
  int j = 1; // first odd number
  
  while (j <= 99) {
    oddSum += j;
    j = j + 2;    // custom updater: j = j + 2
  } 

  cout << "Sum of odd numbers (1-99): " << oddSum << endl;

  
  return 0;
}
