//In c, we don't have multiple collection types like in python, so we have to use arrays.

/*
Arrays are used to store multiple values in a single variable. To create an array, we have to state data type, and then the name of the array followed by []

to insert values, add values into the array by having a comma separated list inside {}

example:
int arr[] = {1, 2, 3, 4, 5};
*/

//Accessing arrays:
/*
To access arrays, we use index numbers, which start at 0. To access the first value in the array, we would use arr[0]. To access the second value in the array, we would use arr[1] and so on

Changing elements inside an array:
to do that, just replace the value of the index number that you want to replace with a new value

example:
int arr[2] = 4;

in this case we would be replacing the number 3 in our array with a 4

set array size:
another way to create an array is to specify its size, then add elements later

example:
int arr[4];
arr[0] = 1;
arr[1] = 2;
arr[2] = 3;
arr[3] = 4;
arr[4] = 5;

Note:you are not able to change size of array after creation
*/

//Using arrays with loops: We are able to use loops to iterate through arrays. To do that, we use a for loop
/*
int arr[] = {1, 2, 3, 4};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}
*/

//2D arrays:
/*
If you want to store data in tabular form with rows and columns, you should be using 2D arrays which is also known as a matrix

example:
int arr[2][3] = {{1,2,3},{4,5,6}};
printf("%d",arr[1][1])

in this case the first [] is the row, and the second [] is the column so when we print [1][1], we should be printing out the 2nd row and 2nd column which is 5.
*/
