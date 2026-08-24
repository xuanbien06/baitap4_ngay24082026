#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu N: ";
    cin >> n;

    double* a = new double[n]; 
    
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double x;
    cout << "Nhap gia tri x can xoa: ";
    cin >> x;

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            a[k] = a[i];
            k++;
        }
    }

    n = k;

    cout << "Mang sau khi xoa " << x << ": ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a; 
    return 0;
}