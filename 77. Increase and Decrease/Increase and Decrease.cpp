#include<iostream>

using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;

    ll a[n], sum=0;
    for(ll i=0; i<n; i++){cin >> a[i]; sum+=a[i];}

    if(sum%n==0) cout << n;
    else cout << n-1;


    return 0;
}
