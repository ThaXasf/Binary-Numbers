#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

//example: a binary number 1010 is stored in an array {1, 0, 1, 0} with size of 4

class BinaryNumbers {

private:

    //instance variables 
    int* digits;
    int length, arra;


public:
    BinaryNumbers(int len) {
        //One constructor taking an integer number as parameter to represent the length of the binary number, the number will be randomly created, note the first number (0-index) must be 1.
        digits = new int[len];
        length = len;
        for (int i = 1; i < len; i++) {
            srand(time(NULL)); //sets the seed used to generate random numbers as CURRENT TIME.
            int randnum = rand() % 2; //returns either 0 or 1
            digits[i] = randnum;
        }
        digits[0] = 1;
    }

    BinaryNumbers(const int len, const int arr[]) {//second parameter should be an array
    //length parameter is the length of the GIVEN array, probably also the one being created.
        length = len;
        digits = new int[len];
        for (int i; i < len; i++) {
            digits[i] = arr[i]; //initialize our new array with the contents of given array.
        }
    }

    BinaryNumbers(const BinaryNumbers& obj) {//take the object given in parameter
        length = obj.digits->size();
        digits = new int[length];
        for (int i; i < length; i++) {
            digits[i] = obj.digits[i];//copy object's data to new object
        }
    }

    int decimalValue() {//calculate decimal value of binary number.
        int total = 0;
        
       /*  1) read amount of elements in array. The total length will be the starting point of the pow function
           2) next minus 1 from the length and that will be the NEW parameter for the pow function 
              -> ex pow(2,length)

            CONDTION IF THE contents OF THE ARRAY ARE OR IS 0:
            
            1) if(digits[i] = 0)
            2) skip move on to next value
            3) keep going with the loop that gets the 2nd parameter for that pow function
*/

        for (int i; i < length; i++) {
            if (digits[length - i] == 1)
                total += pow(2, length - i);
            else
                continue;
        }
        return total;

    }

    void print() {
    //loops through array, prints each element.
    }

};

