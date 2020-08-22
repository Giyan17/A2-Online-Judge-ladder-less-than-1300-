#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int A[n][2], sum_u=0, sum_l=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++) cin >> A[i][j];
        sum_u+=A[i][0];
        sum_l+=A[i][1];
    }

    int time=0;
    if(sum_u%2==0 && sum_l%2==0){cout << time;return 0;} //both are even
    if(sum_u%2==0 && sum_l%2==1){cout << -1;return 0;}  // upper is even, lower is odd
    if(sum_u%2==1 && sum_l%2==0){cout << -1;return 0;}  // upper is odd, lower is even
    if(sum_u%2==1 && sum_l%2==1){
        for(int i=0; i<n; i++){
            if(A[i][0]%2==0 && A[i][1]%2==1){
                sum_u-=A[i][0], sum_l-=A[i][1];
                swap(A[i][0], A[i][1]);
                time++;
                sum_u+=A[i][0], sum_l+=A[i][1];
                if(sum_u%2==0 && sum_l%2==0){cout << time;return 0;}
            }
            else if(A[i][0]%2==1 && A[i][1]%2==0){
                sum_u-=A[i][0], sum_l-=A[i][1];
                swap(A[i][0], A[i][1]);
                time++;
                sum_u+=A[i][0], sum_l+=A[i][1];
                if(sum_u%2==0 && sum_l%2==0){cout << time;return 0;}
            }
            if(i==n-1)if(time==0)cout << -1;
        }
    }


    return 0;
}
