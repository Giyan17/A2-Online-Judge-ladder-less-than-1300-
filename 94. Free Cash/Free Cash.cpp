#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[24][60]={0};

    int h, m;
    for(int i=0; i<n; i++){
            cin >> h >> m;
            a[h][m]++;
    }

    int max=0;
    for(int i=0; i<24; i++){
        for(int j=0; j<60; j++){
            if(a[i][j]>max) max=a[i][j];
        }
    }

    cout << max << endl;

    return 0;
}
