#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print(const string& data) {
    cout << data << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int Answer = 0, Number = rand() % 10 + 1;
    
    print("Guessing Number Game 1-10");
    
    while (Number!=Answer) {
        print("Enter Number :");
        cin >> Answer;
        
        if (Answer > Number) {
            print("too high");
        }
        else if (Answer < Number) {
            print("too low");
        }
    }
    
    print("You Won!");
    
    return 0;
}

