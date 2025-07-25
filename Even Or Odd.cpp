#include <iostream>
using namespace std;

void print(const string& data) {
    cout << data << endl;
}

bool isEven(int Number) {
    return (Number % 2) == 0;
}

int main() {
    int Number;
    
    print("Welcome to the 'Even Or Odd game'");
    print("Please Enter Number");
    
    cin >> Number;
    if (isEven(Number)) {
        print("Even");
    }
    else {
        print("Odd");
    }
    
    return 0;
}

