#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
int n;
cin >> n;
int A[n];
for(int i=0; i<n; i++)cin >> A[i];
int min = abs(A[0] - A[1]);
int i1=0, i2=1;
for(int i=0; i<n; i++){
        if(i==n-1){
            if(abs(A[i] - A[i - n + 1]) < min){
            i1 = i, i2 = i - n + 1;
        }
        break;
        }

        if(abs(A[i] - A[i+1]) < min){
            i1 = i, i2 = i+1;
            min = abs(A[i] - A[i+1]);
        }
}
cout << i1 + 1 << " " << i2 + 1;

return 0;
}
