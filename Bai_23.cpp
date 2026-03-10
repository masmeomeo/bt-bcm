#include <iostream>
using namespace std;

int dem[1000001]; //mảng 1 triệu chỗ

int main() {
    
    ios_base::sync_with_stdio(false);    // giúp đọc nhanh hơn
    cin.tie(NULL);

    int n, gia_tri;
    cin >> n; 
    cin >> gia_tri;
    int soMax = 0;
    for (int i = 1; i <= n; i++) {
        dem[gia_tri]++; // xếp vào đúng vị trí
        if (gia_tri > soMax) soMax = gia_tri; //danh dau so lon nhat
    }
        // sap xep giam dan
    for (int i = soMax; i >= 0; i--) {
        while (dem[i] > 0) {
            cout << i << " "; 
            dem[i]--;     
        }
    }
    return 0;
}