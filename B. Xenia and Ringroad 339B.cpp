/* Question Link: https://codeforces.com/problemset/problem/339/B
Question Tag: implementation, 1000*
Codeforces ID: arpit_26 */

#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
typedef long long ll;
/*------------------------------------------------------------------------------*/
void solve(){
    ll n,m,cnt=0;  cin>>n>>m;
    ll a[m];
    cin>>a[0];
    cnt=a[0]-1;
    for(ll i=1;i<m;i++){
        cin>>a[i];

        if(a[i] < a[i-1]){
            cnt+=n-a[i-1]+a[i];
        } 
        else if(a[i]>a[i-1]){
            cnt+=a[i]-a[i-1];
        }
        else if(a[i]==a[i-1]) continue;
    }

    cout<<cnt<<endl;

}
int main(){
int t=1;   //cin>>t;
while(t--){
    solve();
}
}
