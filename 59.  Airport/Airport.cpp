#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int n, m;
cin >> n >> m;

int a[m], b[m];
for(int i=0; i<m; i++){
        cin >> a[i];
        b[i] = a[i];
}

int min=0, max=0, j=0;

//min
for(int i=0; i<n; i++){
    sort(a, a+m);
    min += a[j];
    a[j]--;
    if(a[j]==0)j++;
}
j=0;
//max
for(int i=0; i<n; i++){
    sort(b, b+m, greater<int>());
    max += b[j];
    b[j]--;
}

cout << max << " " << min;

return 0;
}
