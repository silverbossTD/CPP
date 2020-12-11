#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(float a[][100], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

//Kiem tra co la so nguyen to
bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int ktSNT(float a[][100], int m, int n) {
    int count = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(IsPrime(a[i][j])) {
                count++;
            }
        }
    }
    return count;
}

void nhapMangB(float a[][100], float b[][100], int m, int n) {
    float tong;
    float max = a[0][0];
    float min = a[0][0];
    for(int i = 0; i < m; i++) {
        max = a[i][1];
        min = a[i][1];
        for(int j = 0; j < n; j++) {
            if(max < a[i][j]) {
                max = a[i][j];
            }
            if(min > a[i][j]) {
                min = a[i][j];
            }
        }
        tong = (max / 2) + (min / 2);
        cout << "Max: " << max << " Min: " << min << " Tong: " << tong << endl;
        for(int j = 0; j < n; j++) {
            b[i][j] = a[i][j] * tong;
        }
    }
}

void xuatMang(float a[][100], float b[][100], int m, int n) {
    cout << "-----Mang A-----" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "-----Mang B-----" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    float a[100][100];
    float b[100][100];
    int m, n;
    cin >> m >> n;
    nhapMang(a, m, n);
    int soNT = ktSNT(a, m, n);
    cout << "So luong so nguyen to: " << soNT << endl;
    nhapMangB(a, b, m, n);
    xuatMang(a, b, m, n);
    return 0;
}

//Pewpew
//This shit made by SILVERBOSS
//IM 9 years old
//AND I FINISHED UNI HOMEWORK
//WOW
//IM SO GOOD