#include<iostream>
using namespace std;

int main(){
int n, m;
cin >> n >> m;
int a[n];
for(int i=0; i<n; i++){
    cin >> a[i];
}
int last = n-1;
int count = 0;
for(int i=0; i<=n; i++){
    if(i == n){
        if(count !=0){
            i = 0;
            count = 0;
        }
        else break;
    }
    if(a[i] <= m){
            a[i] = 0;

    }
    else{
        a[i] -=m;
        count++;
        last = i;
    }
}

cout << last + 1 << endl;

return 0;
}
