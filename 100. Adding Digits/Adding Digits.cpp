#include<iostream>

using namespace std;
#define ll long long

int main(){
    ll a, b, n;
    cin >> a >> b >> n;

    ll num;

    for(ll j=0; j<10; j++){
        ll num = a*10 + j;
        if(num%b==0){
            a=num;
            break;
        }
        if(num%b!=0 && j==9){cout << -1; return 0;}
    }
    cout << a;
    for(int i=0; i<n-1; i++)cout <<0 ;

    return 0;
}
