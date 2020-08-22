#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    ll x, y, n;
    cin >> x >> y >> n;

    vector<ll> f;
    f.push_back((x+mod)%mod);
    f.push_back((y+mod)%mod);

    for(int i=2; i<6; i++){
        f.push_back((f[i-1]-f[i-2]+mod)%mod);
    }

    ll num=f[(n-1)%6];
    cout << (num+mod)%mod << endl;

    return 0;
}
