#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    do {
        cout << "Nhap so phan tu cua mang n (nguyen duong): ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap mot so nguyen duong!\n";
        }
    } while (n <= 0);

    vector<int> a(n);
    long long sum_all = 0;
    long long sum_gt_7 = 0;
    vector<int> pos_10;

    cout << "\n--- Nhap cac phan tu cua mang ---\n";
    for (int i = 0; i < n; ++i) {
        do {
            cout << "a[" << i << "] = ";
            cin >> a[i];
            if (a[i] <= 0) {
                cout << "Vui long nhap so nguyen duong!\n";
            }
        } while (a[i] <= 0);

        sum_all += a[i];

        if (a[i] > 7) {
            sum_gt_7 += a[i];
        }

        if (a[i] == 10) {
            pos_10.push_back(i);
        }
    }

    double average = (double)sum_all / n;

    cout << "\n============= KET QUA =============\n";
    
    // a) In tổng n phần tử
    cout << "a) Tong cac phan tu trong mang la: " << sum_all << "\n";
    
    // b) In tổng các phần tử > 7
    cout << "b) Tong cac phan tu lon hon 7 la: " << sum_gt_7 << "\n";
    
    // c) In giá trị trung bình
    cout << "c) Gia tri trung binh cua mang la: " << average << "\n";
    
    // d) In vị trí phần tử có giá trị = 10
    cout << "d) Vi tri cac phan tu co gia tri bang 10: ";
    if (pos_10.empty()) {
        cout << "Khong co phan tu nao bang 10 trong mang.\n";
    } else {
        for (size_t i = 0; i < pos_10.size(); ++i) {
            cout << pos_10[i] << (i == pos_10.size() - 1 ? "" : ", ");
        }
        cout << " (Luu y: Chi so mang bat dau tu 0)\n";
    }
    
    cout << "===================================\n";

    return 0;
}