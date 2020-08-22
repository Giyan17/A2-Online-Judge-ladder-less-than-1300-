#include<iostream>
#include <bits/stdc++.h>
#include<set>
using namespace std;
#define ll long long
int main(){
    ll n, m;
    cin >> n >> m;

    ll a[n], sum[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
        }

    set<int> s;
    ll j=0;
    for(int i=n-1; i>=0; i--){
        s.insert(a[i]);
        sum[j]=s.size();
        j++;
    }

    while(m--){
        int l;
        cin >> l;
        cout << sum[n-l] << endl;
    }

    return 0;
}
