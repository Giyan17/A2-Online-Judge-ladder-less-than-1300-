#include<iostream>
#include<algorithm>
#include <cstdlib>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;

    ll a[n];
    for(ll i=0; i<n; i++)cin >> a[i];

    sort(a, a+n);

    int move=0;

    for(int i=0; i<n; i++){
        move += abs(i+1 - a[i]);
    }
    cout << move;

    return 0;
}
