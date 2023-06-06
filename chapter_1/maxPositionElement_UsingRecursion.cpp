#include <bits/stdc++.h>
using namespace std;

int max_position(int low,int high,int s[]) {
    int position=0 ;
    if(low==high){
        return low;
    }
    else{
        position = max_position(low+1,high , s);
        if(s[low]>s[position]){
            position=low;
        }
        return position;
    }

}

int32_t main() {
    int s[7]={1,9,3,4,0,7,2};
    cout<<max_position(0,6,s);
}