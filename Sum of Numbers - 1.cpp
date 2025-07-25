#include <iostream>
#include <algorithm>
using namespace std;

void print(const string& data) {
    cout << data << endl;
}

int main() {
    // Sum of Numbers in a Range
    int SN, EN, sum = 0;
    
    print("Enter Starting Number");
    cin >> SN;
    
    print("Enter Ending Number");
    cin >> EN;
    
    if (SN > EN) {
        swap(SN,EN);
    }
    
    for (int i = SN; i <= EN; i++) {
        sum += i;
    }
    
    cout << sum << "\n";
    
    return 0;
}

