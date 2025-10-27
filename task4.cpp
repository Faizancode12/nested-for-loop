#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int countDiv2 = 0;
    int countDiv3 = 0;
    int countDiv4 = 0;
    
    // Outer loop: for each number
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        // Inner loop: check divisibility by 2, 3, and 4
        for (int divisor = 2; divisor <= 4; divisor++) {
            if (num % divisor == 0) {
                if (divisor == 2) {
                    countDiv2++;
                } else if (divisor == 3) {
                    countDiv3++;
                } else if (divisor == 4) {
                    countDiv4++;
                }
            }
        }
    }
    
    double p1 = (countDiv2 * 100.0) / n;
    double p2 = (countDiv3 * 100.0) / n;
    double p3 = (countDiv4 * 100.0) / n;
    
    cout << fixed << setprecision(2) << p1 << "%" << endl;
    cout << fixed << setprecision(2) << p2 << "%" << endl;
    cout << fixed << setprecision(2) << p3 << "%" << endl;
    
    return 0;
}