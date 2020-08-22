#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[n][3];

for(int i=0; i<n; i++){
    for(int j=0; j<3; j++)cin >> A[i][j];
}

int problem=0;

for(int i = 0; i<n; i++){
    if((A[i][0] + A[i][1] + A[i][2]) > 1) problem++;
}

cout << problem << endl;
return 0;
}
