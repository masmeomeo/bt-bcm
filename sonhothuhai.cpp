#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[101];
    for (int i = 0; i < n; i++)
    cin >> a[i];
    
    int min1 = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min1) min1 = a[i];
    }

    int min2 = 2e9; 
    bool can_tim = false;
    for (int i = 0; i < n; i++) {
        if (a[i] > min1 && a[i] < min2) {
            min2 = a[i];
            can_tim = true;
        }
    }

    if (can_tim) {
        for (int i = 0; i < n; i++) {
            if (a[i] == min2) {
                cout << i + 1 << " "; 
            }
        }
    }

    return 0;
}