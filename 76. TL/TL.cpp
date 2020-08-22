#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int a[n], b[m];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);
    int max=a[n-1];
    if(2*a[0]>max) max = 2*a[0];

    if(max < b[0]) cout << max;
    else cout << -1;

    return 0;
}
