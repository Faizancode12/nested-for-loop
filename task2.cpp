#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the triangle number: ";
    cin >> n;

    int totalDots = 0;

    for (int i = 1; i <= n; i++) {
        int dots = 0;

        for (int j = 1; j <= i; j++) {
            dots += 1;  
        }

        totalDots += dots; 
    }

    cout << "T" << n << " = " << totalDots << endl;

    return 0;
}