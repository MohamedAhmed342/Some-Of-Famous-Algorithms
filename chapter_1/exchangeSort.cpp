#include <bits/stdc++.h>
using namespace std;

void exchange(int &x,int &y){
   int garage=x;
   x=y;
   y=garage;
}

void exchangeSort(int n ,int s[]){
   for (int i = 0; i < n; ++i) {
       for (int j = i+1; j < n; ++j) {
           if(s[j]<s[i]){
               exchange(s[i],s[j]);
           }
       }
   }
}

int32_t main() {
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];
   }
   exchangeSort(n,arr);
   for (int i = 0; i < n; ++i) {
       cout<<arr[i]<<" ";
   }
}