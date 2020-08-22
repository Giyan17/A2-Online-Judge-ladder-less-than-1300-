#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    int a[n*m];
    int remainder, times=1;
    for(int i=0; i<n*m; i++){
        cin >> a[i];
        if(i==0)remainder= a[0]%d;
        else{
            if(a[i]%d==remainder){
                times++;
            }
        }
    }
    if(times!=n*m){cout<<-1;return 0;}


    sort(a, a+n*m);
    int mid=n*m/2, sum=0;

    for(int i=0; i<n*m; i++){
        sum+=abs(a[mid]-a[i])/d;
    }
    cout << sum;
    return 0;
}
