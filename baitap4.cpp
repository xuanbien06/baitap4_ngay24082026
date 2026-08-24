#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu N: ";
    cin >> n;

    int* a = new int[n]; 
    
    cout << "Nhap " << n << " gia tri: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    delete[] a; 
    return 0;
}