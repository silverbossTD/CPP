#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    cout << "----MANG-----" << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void demDayTang(int a[], int n) {
    cout << "So Day Tang La: " << endl;
    int dem;
    for (int i = 0; i < n; i++) {
        dem = 0;
        while (a[i] < a[i + 1]) {
            (dem == 0) ? cout << a[i] << " " << a[i + 1] : cout << " " << a[i + 1];
            i++; dem++;
        }
        cout << endl;
    }
}

int main() {
    int a[100];
    int n;
    cin >> n;
    nhapMang(a, n);
    xuatMang(a, n);
    demDayTang(a, n);
    return 0;
}