//Name: Christopher Pucko
//Course: EECS 2510 - Non-Linear Data Structures
//Assignment - Homework 0, Part B

#include <iostream>
using namespace std;

bool chkPrime (int num, int* point){
    //Checks if number is prime using remainder division. Value for 1 is hardcoded.
    //
    //If the number **is not** prime when checked, the first divisible value is passed
    //into memory at the pointer.

    if (num == 1){
        return true;
    }
    if (num!=2 ){
        if (num < 2 ) {
            *point = 1;
            return false;
        }
        for (int i = 2; i <= sqrt(num); i++)
            if (num % i == 0) {
                *point = i;
                return false;
            }
    }
    return true;
}


int main() {
    int numInput, divisibleBy;
    int* pointer;
    bool isPrime;
    pointer = &divisibleBy;

    cout << "Please Enter an Integer for test:";
    cin >> numInput;
    cout<< endl << "You entered: " << numInput << endl;
    isPrime = chkPrime(numInput, pointer);
    if (isPrime)
        cout<< numInput << " number is Prime!";
    if (!isPrime)
        cout << numInput << " is not prime, because it is divisible by " << *pointer;







    return 0;
}
