//C is a relatively high level language which means that it is close to machine level, but it is still not as close compared to languages like python. C is still pretty useful to learn as it can provide a strong foundation for learning about data types, variables, function, loops, and arrays.

//Comments in c: To comment in c you can use // for single line comments and /* and */ for multiline comments

//Let's start with our first c program
/*
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
*/
//c syntax:

//As seen in the first line of our first c program, c starts with including a header file. Header files are files with the .h extension which are used to define macros, constants, and function prototypes. You include a header file with the #include directive.

//c ignores white spaces so they are included to help the code become more readable

//The int main() is the main function. The main function is the entry point of the program. Any code inside the curly brackets {} is the body of the main function, and it is this code that will be executed

//Every statement in c has to end with a semicolon ;

//The return 0 is the last part of any c function and refers to the return values from any function

//

//Variable in c:
//variables are containers for storing data
//in c there are different types of variables: int, float, and char
//int is used for storing integers
//example: int myNum = 5; in this case the variable myNum is storing the number 5

//float is used for storing floating point numbers(decimals)
//example: float myFloatNum = 5.99;

//char is used for storing single characters
//example: char myLetter = 'B';

//you are also able to declare a variable without assign a value so that you can assign a value later
//example: int myNum;

//Note that you are also able to declare multiple variables of the same type in one line using comma seperated list:
//int x = 5, y = 6, z = 50;

//if you don't want a variable to change at all you can use const to declare a variable as constant
//example: const int x = 5;

//if you want to output values of a variable, you have to use format specifiers: %d or %i is used for integers, %c for characters, and %f for floats.

//example of outputting the value of variables:
/*
int myNum = 5;
char myLetter = 'B';
printf("My number is %d and my letter is %c", myNum, myLetter);
*/

//Data types in c:
/*
As already mentioned, in c we have the int, float, and char data types. These are the most commonly used data types in c along with double which just allows you to store more decimal places.

We also have a boolean data type which represents two values true or false. To use booleans you need to import the header file <stdbool.h>. to use it.
A boolean variable is declared with the bool keyword and can only take the values true or false
boolean values are returned as integers (0 is false, and 1 or any other number is true)
that means that you should use the %d format specifier to print boolean values.
*/

//with float, if you want to be precise with the number of digits after the decimal point, you can use a dot followed by the number of digits you want after the % in the %f
//example: printf("%.2f\n", myFloatNum); Only show 2 digits

//if you want to convert one type to another type, you can do that by by placing the type in parentheses () in front of the value.
/*
int myNum = 15;
float myFloat = (float)myNum;
printf("%.2f", myFloat);
*/

//Arithmetic Operators in c:
/*
+ addition (x+y)
- subtraction (x-y)
* multiplication (x*y)
/ division (x/y)
% modulus (x%y)
*/

//examples of arithmetic operators:
/*
int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);
*/

//assignment operators:
/*
=, x = 5, x = 5
+=, x += 3, x = x + 3
-=, x -= 3, x = x - 3
*=, x *= 3, x = x * 3
/=, x /= 3, x = x / 3
%=, x %= 3, x = x % 3
*/


//comparison operators:
/*
== equal to x == y
!= not equal to x != y
> greater than x > y
< less than x < y
>= greater than or equal to x >= y
<= less than or equal to x <= y
*/
