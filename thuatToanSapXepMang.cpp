#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "      ";
    }
}

void sapXepMang(int a[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[100];
    int n;
    cout << "Nhap N: ";
    cin >> n;
    nhapMang(a, n);
    xuatMang(a, n);
    sapXepMang(a, n);
    cout << endl <<"Sau khi sap xep" << endl;
    xuatMang(a, n);
    return 0;
}
