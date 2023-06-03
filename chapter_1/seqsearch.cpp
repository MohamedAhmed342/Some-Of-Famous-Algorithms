#include <bits/stdc++.h>
using namespace std;
void seqsearch(int n ,int s[],int x,int &location){
   location=1;
   while (location<=n && s[location]!=x){
       location++;
   }
   if(location>n){
       location=0;
   }

}

int32_t main() {
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];
   }
   int real;
   seqsearch(n,arr,6,real);
   cout<<real;
}