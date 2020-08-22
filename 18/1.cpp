#include<iostream>
using namespace std;

int best(int A[], int n){
int test = 0;
int best = 0;
for(int i=1; i<n; i++){
    for(int j=i-1; j>=0; j--){
        if(A[i]>A[j]) {
                test++;
        }
    }
    if(i==test){
            best++;
    }
    test =0;
}
return best;
}

int worst(int A[], int n){
int test = 0;
int worst = 0;
for(int i=1; i<n; i++){
    for(int j=i-1; j>=0; j--){
        if(A[i]<A[j]) test++;
    }
    if(i==test) worst++;
    test =0;
}
return worst;
}

int main(){
int n;
cin >> n;
int A[n];
for(int i = 0; i<n ;i++) cin >> A[i];
cout << best(A, n) + worst(A, n)   << endl;

return 0;
}
