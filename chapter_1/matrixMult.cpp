#include <bits/stdc++.h>
using namespace std;
void matrixMult(int n, int a[][100], int b[][100], int c[][100]) {
   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j) {
           c[i][j] = 0;
           for (int k = 0; k < n; ++k) {
               c[i][j] += a[i][k] * b[k][j];
           }
       }
   }
}

int32_t main() {
   int n;
   cin >> n;
   int arr[100][100];
   int arr2[100][100];
   int arr3[100][100];

   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j) {
           cin >> arr[i][j];
           arr3[i][j] = 0;
       }
   }

   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j) {
           cin >> arr2[i][j];
       }
   }

   matrixMult(n, arr, arr2, arr3);

   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j) {
           cout << arr3[i][j] << " ";
       }
       cout << el;
   }

   return 0;
}