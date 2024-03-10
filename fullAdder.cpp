#include <iostream>
using namespace std;

int 
andGate(int a, int b),
xorGate(int a, int b),
halfSum(int a, int b),
halfCarry(int a, int b),
fullSum(int halfSum, int carryIn),
fullCarry(int halfCarryA, int halfCarryB);


int main(){
    int sum = 0,
    carry = 0;
    int a,
    b,
    carryIn;
    cout << "Enter A, B and C-In" << endl;
    cin >> a >> b >> carryIn;

    sum = fullSum(halfSum(a, b), carryIn);
    carry =  (halfCarry(a,b), halfCarry(carryIn,xorGate(a,b)));
    //half adder

    cout << "sum: " << sum << endl << "carry: " << carry << endl;
}




//2 logic gates that make half adder
int andGate(int a, int b){
    int out = 0;
    (a == 1 && b == 1) ? out = 1 : out = 0;
    return out;
}

int xorGate(int a, int b){
    int out = 0;
    (a == 1 && b == 0) || (a == 0 && b == 1) ? out = 1 : out = 0;
    return out;
}

int orGate(int a, int b){
    int out = 0;
    (a == 1) || (b == 1) ? out = 1 : out = 0;
}

int halfSum(int a, int b){
    int out = 0;
    out = xorGate(a, b);
    return out;
}

int halfCarry(int a, int b){
    int out = 0;
    out = andGate(a, b);
    return out;
}

int fullSum(int halfSum, int carryIn){
    int out = 0;
    out = xorGate(halfSum, carryIn);
    return out;
}