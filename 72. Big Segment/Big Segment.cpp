#include<iostream>


using namespace std;

int main(){
    long long n;
    cin >> n;

    long long A[n][2], max, min;
    for(long long i=0; i<n; i++){
        for(long long j=0; j<2; j++) cin >> A[i][j];
        if(i==0){min=A[i][0]; max=A[i][1];}
        else{
            if(A[i][0] < min) min=A[i][0]; // finding min value
            if(A[i][1] > max) max=A[i][1]; // finding max value
        }

    }

    long long index = -1;

    for(long long i=0; i<n ; i++){

        if(A[i][0] <= min && A[i][1] >= max){
            index = i+1;
            min = A[i][0];
            max = A[i][1];
        }
    }

    cout << index;

    return 0;
}
