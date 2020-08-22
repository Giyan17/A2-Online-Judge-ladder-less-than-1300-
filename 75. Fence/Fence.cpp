#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;

    ll h[n+1] = {0};
    for(int i=1; i<=n; i++){
        cin >> h[i];
        h[i] += h[i-1];
    }

    ll t=150000000, index;

    for(int i=k; i<=n; i++){
        if(h[i] - h[i-k] < t){
            t = h[i] - h[i-k];
            index = i;
        }
    }

    cout << index - k + 1 ;



    return 0;
}
