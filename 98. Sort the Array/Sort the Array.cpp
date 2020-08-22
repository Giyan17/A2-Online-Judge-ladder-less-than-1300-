#include<iostream>
#include<algorithm>

using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    ll a[n], b[n];
    for(ll i=0; i<n; i++){cin >> a[i]; b[i]=a[i];}

    sort(b, b+n);
    int flag=0, ini=0, fin=0;
    for(ll i=0; i<n; i++){
        if(b[i]!=a[i]){
            if(flag==0){ini=i;flag=1;}
            if(flag==2){cout<<"no"; return 0;}
            if(i==n-1)fin=i;
        }
        if(flag==1){
            if(b[i]==a[i] && a[i]>a[i-1] && a[i]<a[i+1]){
                fin=i-1;
                flag=2;

            }
        }
    }

    for(int i=ini, j=fin; i<=fin, j>=ini; i++, j--){
        if(b[i]!=a[j]){cout << "no"; return 0;}
    }

    cout << "yes" << endl;
    cout << ini+1 << " " << fin+1 << endl;

    return 0;
}
