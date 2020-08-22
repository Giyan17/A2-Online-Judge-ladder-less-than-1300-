#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[n][2];
for(int i=0; i<n; i++){
    for(int j=0; j<2; j++)cin >> A[i][j];
}

int passenger = A[0][1];
int max = passenger;

for(int i=0; i<n-1; i++){
    passenger = passenger - A[i+1][0] + A[i+1][1];
    if(passenger > max) max = passenger;
}
cout << max << endl;
return 0;
}
