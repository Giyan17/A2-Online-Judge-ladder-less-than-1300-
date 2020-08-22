#include<iostream>

using namespace std;
#define ll long long


int main(){
    ll y, k, n;
    cin >> y >> k >> n;

    ll flag=0;
    ll m = k - (y%k);
    for(ll i=m; i<=n-y; i+=k){
        flag = 1;
        cout << i << " ";
    }

    if(flag == 0) cout << -1;
    return 0;
}
