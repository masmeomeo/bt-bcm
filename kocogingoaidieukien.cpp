#include <iostream>
using namespace std;
int main() {
    int diem;
    cout << "Nhap diem: "; 
    cin >> diem;

    if (diem >= 85) {
        cout << "GIOI";
    } else if (diem >= 70) {
        cout << "KHA";
    } else if (diem >= 50) {
        cout << "TRUNG BINH";
    } else {
        cout << "YEU";
    }
    return 0;
}