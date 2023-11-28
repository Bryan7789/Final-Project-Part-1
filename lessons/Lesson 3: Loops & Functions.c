//Loops in c
//Loops can execute a block of code as long as a specified condition is reached.

//While Loops:
/*
A while loop will loop through a block of code as long as a specified condition is true.

Syntax:
while (condition) {
  // code block to be executed
}
*/

//Example:
/*
int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}
*/
//In this example you can see that the print block of code would be executed as long as i was less than 5. This is why the i++ is important, without it, the loop would go on forever.

//Do/While loops:
//Do while loops are loops that execute a block of code at least once, even if the condition is false and then it will check if the condition is true.

//Syntax:
/*
do {
  // code block to be executed
}
while (condition);
*/

//For Loops:
/* 
A For Loop is a loop that executes a block of code a specified number of times.

Syntax:
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

statement 1 is executed once before the execution of the code block.
statement 2 is the condition that has to be met for the loop to run.
statement 3 is executed every time after the code block has been executed.
*/

//Examples:
/*
int i;

for (i = 0; i < 5; i++) {
  printf("%d\n", i);
}
*/
//In this example you can see that the print block of code would be executed 5 times.

//Nested loops:
//It is also possible to have loops inside another loop, and that makes it so the inner loop is executed for every iteration of the outer loop.

//break and continue:
/* 
break statements can be used to jump out of a loop, just like how you can jump out of a switch statement.

continue statements can be used to skip the rest of the loop body and start the next iteration.
*/

//Functions:
//Functions are blocks of code that run only when they are called, they can be useful because they can be reused.

//we create a function with "void" at the beginnning, and then we put the name of the function followed by (). 
//example
/*
void myFunction() {
  printf("hello world");
}
*/
//we can then call the function in main by typing the name of the function followed by ()

//example
/*
int main() {
  myFunction();
  return 0;
}
*/

//Parameters
/*
Information can be passed to functions as parameters.
Parameters are specified inbetween the () after the functions name

Example:
void myFunction(int x) {
  printf(x)
}

int main() {
  myFunction(5);
  return 0;
}

In this example, the function myFunction takes a parameter, x, and prints it.

When a parameter is passed to a function, it is called an argument. And in this example 5 would be the argument

Number of parameters and arguments:
You can have as many parameters as you want, you just have to seperate them with a comma in the (). Just be careful because when you are working with multiple parameters you also have to call the same number of arguments.
*/

//Return Values
/*
Using the void keyword in the examples above were required because it indicates that the function does not return a value, but if you want to return a value, instead of a void, you would put the type of the value that you want to return, and a return keyword inside your function

example:
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("%d", myFunction(5, 3));
}

in this case my function returns the sum of x and y which are 5 and 3 in this case
*/
