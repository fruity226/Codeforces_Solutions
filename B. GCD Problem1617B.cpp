/* Question Link: https://codeforces.com/problemset/problem/1617/B
Question Tag: brute force, constructive algorithms, math, number theory, 900*
Codeforces ID: arpit_26  */


#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define endl "\n"
#define all(v) v.begin(),v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
typedef long long ll;

void solve(){
    long long n;  cin>>n;
    int c=1;
    int b=ceil(n/(2*1.0));
    int a=n-(b+c);
    if( a%2==0 and b%2==0 ){
        a=a-1; b+=1;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
