//Inputs with c:
//Inputs allow users to interact with your code
/*
To get user inputs in python we need to use the scanf() function
example:
int myNum;
printf("Type a number: \n");
scanf("%d", &myNum);
printf("Your number is: %d", myNum);
*/

//the scanf() function even allows you to take multiple inputs
/*
example:
int myNum;
char myChar;
printf("Type a number AND a character and press enter: \n");
scanf("%d %c", &myNum, &myChar);
printf("Your number is: %d\n", myNum);
printf("Your character is: %c\n", myChar);
*/

//If you want the user to get a string input, you can again also use the scanf() function
/*
example:
char myString[100];
printf("Type a string and press enter: \n");
scanf("%s", myString);
printf("Your string is: %s", myString);
*/

//Unfortunately, scanf considers spaces as a terminating character, so if you want to get a string input with spaces, you can use the fgets() function
/*
example:
char myString[100];
printf("Type a string and press enter: \n");
fgets(myString, 100, stdin);
printf("Your string is: %s", myString);
*/

//So to conclude use scanf() function to get a single word as input, and use fgets() for multiple words.

//Math functions in c:
//Note for math functions, we must include the math.h header file
/*
sqrt() - square root function
pow() - power function
ceil() - rounds up to the nearest integer
floor() - rounds down to the nearest integer
*/

//formatting in c
/*
if you want a new line in your print statement, you can use the \n character after the format specifier
Reminder with floats, you can specify the number of digits after the decimal place with . followed up with a number after the %
*/

//Conditions and if statements
/*
Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

Syntax:
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
*/

//example:
/*
int time = 20;
if (time < 18) {
  printf("Good day.");
  } else if (time < 20) {
  printf("Good evening.");
  } else {
  printf("Good night.");
  }
*/

//Switch statements:
/*
Switch statements are basically if..else statements, it is just the fact that switch statements select one of many blocks of code to be executed.

Syntax:
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

in this case the break statement is used to break out of the switch block.
The default is basically the else statement.
*/
//example
/*
int day = 4;
switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  default:
    printf("It's the weekends!!!")
    break;
}
*/

//logical operators in c:
/*
&&, Logical and, Returns true if both statements are true	x < 5 &&  x < 10
||, Logical or,	Returns true if one of the statements is true	x < 5 || x < 10
!, Logical not,	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
*/

//Nested ifs:
//You can also have if statements inside other if statements
//example:
/*
int x = 20;
if (x > 10) {
  printf("x is greater than 10");
  if (x > 15) {
    printf("\nx is greater than 15");
  }
}
*/
