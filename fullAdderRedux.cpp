#include<iostream>
using namespace std;

int
    //basic logic gate functions
andGate(int a, int b),
orGate(int a, int b),
xorGate(int a, int b);

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

    cout << "Enter three binary digits to add" << endl;
    cin >> a >> b >> cIn;
        //sum is 2 xorgates
    sum = xorGate(cIn, xorGate(a, b));
        //carry is a little more complicated
        //it relies on 4 gates: 1 or, 2 and, 1 xor
    carry = orGate(andGate(a, b),andGate(cIn, (xorGate(a, b))));

    cout << "Sum: " << sum << endl << "Carry: " << carry << endl;


    
}

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