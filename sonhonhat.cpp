#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[101];
    for (int i = 0; i < n; i++)
    cin >> a[i];
    
    int so_nho_nhat = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < so_nho_nhat) so_nho_nhat = a[i];
    }
    cout << so_nho_nhat;
    return 0;
}