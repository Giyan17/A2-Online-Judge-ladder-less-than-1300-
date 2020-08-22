#include<iostream>
#include<algorithm>

#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;

    ll v[n], u[n];
    for(ll i=0; i<n; i++){cin >> v[i]; u[i]=v[i];}

    sort(u, u+n);

    ll sum_v[n+1], sum_u[n+1];
    sum_v[0]=0, sum_u[0]=0;
    ll sumv=0, sumu=0;
    for(ll i=1; i<=n; i++){
        sumv+=v[i-1];
        sumu+=u[i-1];
        sum_v[i]=sumv;
        sum_u[i]=sumu;
    }



    ll m;
    cin >> m;

    for(ll j=0; j<m; j++){
        ll type, l, r;
        cin>> type >> l >> r;
        if(type == 1){
            ll sum=sum_v[r] - sum_v[l-1];

            cout << sum << endl;
        }
        else{
            ll sum=sum_u[r] - sum_u[l-1];

            cout << sum << endl;
        }
    }


    return 0;
}
