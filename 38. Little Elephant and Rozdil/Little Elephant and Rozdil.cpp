#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
long long n;
cin >> n;
long long A[n];
long long index;
long long min=pow(10, 11);
long long count = 0;
for(int i=0; i<n; i++){
    cin >> A[i];
    if(A[i] < min){
        min = A[i];
        index = i;
        count = 0;
    }
    if(A[i] == min) count ++;
}

if(count != 1) cout << "Still Rozdil" << endl;
else cout << index + 1 << endl;




return 0;
}
