#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, y;
    
    cout << "Nhap N: ";
    cin >> n;
    
    vector<int> a(n);
    cout << "Nhap mang A: ";
    for (int &val : a) cin >> val;
    
    cout << "Nhap gia tri x va vi tri y: ";
    cin >> x >> y;
    
    a.insert(a.begin() + y, x);
    
    cout << "Mang sau khi chen: ";
    for (int val : a) cout << val << " ";
    
    return 0;
}