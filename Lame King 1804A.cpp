/* Question link: https://codeforces.com/contest/1804/problem/A
Tag: greedy, maths, 900*
Codeforces ID: arpit_26 */

# include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,maxi=0; cin>>a>>b;
    a=abs(a);
    b=abs(b);
    if(a==b){
        cout<<a+b<<endl;
        return;
    }
    else{
        maxi=max(a,b);
        cout<<2*maxi-1<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
