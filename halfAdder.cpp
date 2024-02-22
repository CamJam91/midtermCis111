#include <iostream>
using namespace std;

int andGate(int a, int b);
int xorGate(int a, int b);
int halfSum(int a, int b);
int halfCarry(int a, int b);

int main(){
    int sum = 0,
    carry = 0;
    int a,
    b;
    cin >> a >> b;
    
    //half adder
    sum = halfSum(a, b),
    carry = halfCarry(a, b);

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