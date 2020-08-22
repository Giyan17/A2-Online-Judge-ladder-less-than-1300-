#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int n, m;
cin >> n >> m;

int f[m];
for(int i=0; i<m; i++) cin >> f[i];

sort(f, f+m);


int min=f[n-1] - f[0];

for(int i=0; i<m; i++){
    if(f[i+n-1] - f[i] <= min) min = f[i+n-1] - f[i];
    if(i+n-1 == m-1) break;
}

cout << min ;
return 0;
}
