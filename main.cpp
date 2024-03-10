#include<iostream>
#include<iomanip>
using namespace std;

int
    // logic gate functions
andGate(int a, int b),
orGate(int a, int b),
xorGate(int a, int b);

    //While loop to ensure that only binary numbers are entered
int inputCheck();

int main(){
        //inputs
    int
    a = 0,
    b = 0,
    cIn = 0;

        //outputs
    int
    sum = 0,
    carry = 0;

        //getting input from user
        cout << "This program mimics a full adder by taking 3 binary inputs and adding them. Turn each input on or off by using a 1 or 0."
        << endl;
        cout << "A: ";
        a = inputCheck();
        cout << "B: ";
        b = inputCheck();
        cout << "C-In: ";
        cIn = inputCheck();

        
        //sum is 2 xorgates
    sum = xorGate(cIn, xorGate(a, b));
        //carry is a little more complicated
        //it relies on 4 gates: 1 or, 2 and, 1 xor
    carry = orGate(andGate(a, b),andGate(cIn, (xorGate(a, b))));

    cout << "There are two outputs, sum that represents binary 1 and carry that represents the second place in bianry"
    << endl; 
    cout << "Sum: " << setw(22) << sum << endl << "Carry: " << setw(20) << carry << endl;


    
}


        //Functions for gates. They all rely on if statements since their output is of only two possible circumstances.
int andGate(int a, int b){
    int out = 0;
    out = (a == 1 && b == 1)? out = 1: out = 0;
    return out;
}
int orGate(int a, int b){
    int out = 0;
    out = (a == 1 || b == 1)? out = 1: out = 0;
    return out;
}
int xorGate(int a, int b){
    int out = 0;
    out = ((a == 1 && b != 1) || (a != 1 && b == 1))? out = 1: out = 0;
    return out;
}
    //Loop check, if anything other than an int is entered, program terminates with improper output. 
int inputCheck(){
    int input;
    cin >> input;
    while (input != 0 && input != 1){
        cout << "Only Binary numbers please" << endl;
        cin >> input;
    }
    return input;
}

    //Cameron Murphy
    //Full Adder program