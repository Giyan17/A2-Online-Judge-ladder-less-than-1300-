#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[n][2];

for(int i=0; i<n; i++){
    for(int j=0; j<2; j++)cin >> A[i][j];
}

int num = 0;
int right, left, upper, lower ;
for(int i=0; i<n; i++){
    right = 0, left = 0, upper = 0, lower = 0;
    for(int j=0; j<n; j++){
        if( i != j){
            if (A[i][0] < A[j][0] && A[i][1] == A[j][1]) right++; //right
            if (A[i][0] > A[j][0] && A[i][1] == A[j][1]) left++; //left
            if (A[i][0] == A[j][0] && A[i][1] < A[j][1]) upper++; //upper
            if (A[i][0] == A[j][0] && A[i][1] > A[j][1]) lower++; //lower
        }
    }

    if (right>0 && left>0 && upper>0 && lower>0){
            num++;

    }
}
cout << num << endl;
return 0;
}
