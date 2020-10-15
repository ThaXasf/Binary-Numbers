# Binary-Numbers
So this is a homework assignment for my CSC 211 class.
***************************************************************************
Create a class BinaryNumber to represent a binary number, with the following members
An integer pointer digits to represent a binary number, an array will be dynamically allocated according to the length of the binary number, for example: a binary number 1010 is stored in an array {1, 0, 1, 0} with size of 4, a binary number 100010 is stored in an array {1, 0,  0, 0, 1, 0} with size of 6. The array will be referenced by digits.

An integer length represents the length of the above array.

One constructor taking an integer number as parameter to represent the length of the binary number, the number will be randomly created, note the first number (0-index) must be 1.

One constructor taking 2 parameters, including an integer number len and an integer array arr as parameters, len is the length of the arr, and arr represent a sequence of binary digits, will be used to initialized the digits.

One COPY constructor taking an instance of BinaryNumber, the constructor should initialize the binary number array by cloning from the parameter.

A function to calculate the decimal value of the binary number

A function to print the binary number

The class should be able to keep track the number of instances of the BinaryNumber class.

Implement a main function to demonstrate the above constructors and functions. 
