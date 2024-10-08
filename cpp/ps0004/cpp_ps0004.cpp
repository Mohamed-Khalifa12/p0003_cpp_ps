/* ps0004 - Give me a number! I'll send back a character.
=========================================================
Write a program that takes a number as input and outputs an equivalent ASCII Character.

- If the inputted data is a zero-value, a character, a letter or a text, print
      "Invalid character/s or zero value!" and exit the program RETURNING 1.

- If the inputted data is a floating number, print
      "Invalid: a floating point number!" and exit the program RETURNING 2.

- If the inputted data is a negative or out-of-range number, print
      "Invalid: number is out of the range!" and exit the program RETURNING 3.

- If the inputted data is a number [32:126], print
      "The character for <PRINT_YOUR_NUMBER_HERE> is <PRINT_THE_EQUIVALENT_CHARACTER_HERE>." and exit the program RETURNING 0.
*/

#include  <iostream> 
using namespace std;

int main() {
    int asciiValue;

    cout  <<  "Enter a number from 32 to 126: ";
    cin  >>  asciiValue;

    if(asciiValue < 32 || asciiValue > 126)
    {
      cout  <<  "Invalid character/s or zero value!";
      return 0;
    }

    char charValue = char(asciiValue); 

    cout  <<  "The character for " << asciiValue << " is "<< charValue << "." <<endl;

    return 0;
}