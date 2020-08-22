#include<iostream>

using namespace std;

void sort_(int A[][2], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(A[i][0] < A[j][0]){
                swap(A[i][0], A[j][0]);
                swap(A[i][1], A[j][1]);
                    }
            else if(A[i][0] == A[j][0]){
                if(A[i][1]>A[j][1]){
                    swap(A[i][0], A[j][0]);
                    swap(A[i][1], A[j][1]);
                        }
            }
        }
    }
}

int main(){
    int n, k;
    cin >> n >> k;

    int A[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++)cin >> A[i][j];
    }

    sort_(A, n);
    int group=0, problem=A[k-1][0], time=A[k-1][1];
    for(int i=0; i<n; i++){
        if(A[i][0] == problem && A[i][1] == time)group++;
        if(A[i][0] < problem) break;
        if(A[i][0] == problem && A[i][1] > time) break;
    }

    cout << group;

    return 0;
}
