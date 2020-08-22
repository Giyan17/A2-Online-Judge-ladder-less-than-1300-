#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a, a+n);

    int money = 0;

    for(int i=0; i<m; i++){

        if(a[i]>=0) break;

        else money += a[i];
    }

    cout << -money << endl;


    return 0;
}
