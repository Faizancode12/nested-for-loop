#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int totalTons = 0;
    int minibusTons = 0;
    int truckTons = 0;
    int trainTons = 0;
    double totalCost = 0.0;
    
    // Outer loop: for each cargo
    for (int i = 0; i < n; i++) {
        int tons;
        cin >> tons;
        
        totalTons += tons;
        
        // Inner loop: check each vehicle type
        for (int vehicle = 1; vehicle <= 3; vehicle++) {
            if (vehicle == 1) {
                // Check if minibus
                if (tons <= 3) {
                    minibusTons += tons;
                    totalCost += tons * 200;
                    break;
                }
            }
            if (vehicle == 2) {
                // Check if truck
                if (tons > 3 && tons <= 11) {
                    truckTons += tons;
                    totalCost += tons * 175;
                    break;
                }
            }
            if (vehicle == 3) {
                // Check if train
                if (tons > 11) {
                    trainTons += tons;
                    totalCost += tons * 120;
                    break;
                }
            }
        }
    }
    
    double avgPrice = totalCost / totalTons;
    
    double minibusPercent = (minibusTons * 100.0) / totalTons;
    double truckPercent = (truckTons * 100.0) / totalTons;
    double trainPercent = (trainTons * 100.0) / totalTons;

    cout << fixed << setprecision(2);
    cout << avgPrice << endl;
    cout << minibusPercent << "%" << endl;
    cout << truckPercent << "%" << endl;
    cout << trainPercent << "%" << endl;
    
    return 0;
}