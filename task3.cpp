#include <iostream>
using namespace std;

int main() {
    int period;
    cin >> period;
    
    int doctors = 7;
    int totalTreated = 0;
    int totalUntreated = 0;
    
    for (int day = 1; day <= period; day++) {
        
        if (day % 3 == 0) {
            if (totalUntreated > totalTreated) {
                doctors++;
            }
        }
        
        int patients;
        cin >> patients;
        
        if (patients <= doctors) {
            totalTreated += patients;
        } else {
            totalTreated += doctors;
            totalUntreated += (patients - doctors);
        }
    }
    
    cout << "Treated patients: " << totalTreated << "." << endl;
    cout << "Untreated patients: " << totalUntreated << "." << endl;
    
    return 0;
}