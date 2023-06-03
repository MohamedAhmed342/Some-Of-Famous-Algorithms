#include <bits/stdc++.h>
using namespace std;

int sum(int n ,int s[]){
   int result=0;
   for (int i = 0; i < n; ++i) {
       result=result+s[i];
   }
   return result;
}

int32_t main() {
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];
   }
   int summ=sum(n,arr);
   cout<<summ;
}