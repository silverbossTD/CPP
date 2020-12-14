#include <iostream>
using namespace std;

void nhapMang(int a[][100], int &m, int &n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuatMang(int a[][100], int &m, int &n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void hoanVi(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sapXepMang(int a[][100], int &m, int &n) {
    int temp;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(a[i][j] > a[i][k]) {
                    hoanVi(a[i][j], a[i][k]);
                }
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int l = i + 1; l < m; l++) {
                if(a[i][j] > a[l][j]) {
                    hoanVi(a[i][j], a[l][j]);
                }
            }
        }
    }
}

int main() {
    int a[100][100];
    int m, n;
    cin >> m >> n;
    nhapMang(a, m, n);
    xuatMang(a, m, n);
    sapXepMang(a, m, n);
    cout << "Sau khi sap xep" << endl;
    xuatMang(a, m, n);
    return 0;
}