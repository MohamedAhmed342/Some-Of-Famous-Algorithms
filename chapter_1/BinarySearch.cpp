#include <bits/stdc++.h>
using namespace std;

void binarySearch(int n, int s[], int x, int &location) {
   int low=0,high=n-1,mid;
   location=0;
   while (low<=high && location==0){
       mid=(low+high)/2;
       if(x==s[mid]){
           location=mid;
       }
       else if (x<s[mid]){
           high=mid-1;
       }
       else{
           low=mid+1;
       }
   }
}

int32_t main() {
   int n,k;
   cin >> n>>k;
   int arr[n];
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];
   }
   int loc;
   binarySearch(n,arr,k,loc);
   cout<<loc;
}
