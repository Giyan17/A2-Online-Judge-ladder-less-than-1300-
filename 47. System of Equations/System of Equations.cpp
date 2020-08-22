#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a, count = 0;

    if(n<m){
        for(int i=0; i<=n; i++){
            a = sqrt(n - i);
            if( i==sqrt(m-a) && a<=m)count++;
        }
    }
    else{
        for(int i=0; i<=m; i++){
            a = sqrt(m - i);
            if( i==sqrt(n-a) && a<=n)count++;
        }

    }

    cout << count << endl;
    return 0;
}
