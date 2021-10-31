/*
A set of similar data type is called array.
ordinary variables are capable of holding only one value at a time.
Array store more than one value at a time in a single variable.
An array is a collective name given to a group of similar quantities.
In C language the counting of elements begins with 0 and not with 1.
The elements of an array could be all ints, or all floats, or all chars etc.
Usually, the array of charactes is called a "string", whereas an array of ints or
floats is called simply an array.
We cannot have an array of 10 numbers, of which 5 are ints and 5 are floats.
Like other variables an array needs to be declared so that the compiler know
what kind of an array and how large an array we want.
All the array elements are numbered starting with 0.
The first element in the array is numbered 0, so the last element is 1 less than
the size of the array.
Before using an array its type and dimension must be declared.
However big an array its elements are always stored in contiguous memory locations.

*/
#include<stdio.h>
void main(){
    int num[6]={2,4,12,5,45,5};
    float elements[] = {12.3,34.2,-23.4,-11.3};
    printf("the element of array num 0th position is %d\n",num[0]);
    
}