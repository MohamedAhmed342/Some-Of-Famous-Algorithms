#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
   if(n==1){
       return 0;
   }
   else if(n==2){
       return 1;
   }
   else {
       return (fib(n-1)+fib(n-2));
   }
}
int fib2(int n) {
    int f[n];
    f[0]=0;
    if(n>0)f[1]=1;
    for (int i = 2; i < n; ++i) {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n-1];
}

int32_t main() {
   int n;
   cin >> n;
   cout<<fib(n)<<endl;
   cout<<fib2(n);

}
