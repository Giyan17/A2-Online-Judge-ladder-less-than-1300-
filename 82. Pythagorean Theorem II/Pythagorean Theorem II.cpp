#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    ll sum=0;

    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            ll total = i*i + j*j;
            if(total > n*n)break;
            ll root = sqrt(total);
            if(root*root == total)sum++;
        }
    }
    cout <<sum;

}
