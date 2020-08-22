#include<iostream>
using namespace std;

int find_min(int A[] , int n){
int min = 0;
int min_value = A[0];
for(int i=0; i<n; i++){
    if(A[i]<=min_value){
        min_value = A[i];
        min = i;
        }
    }
return min;
}

int find_max(int A[], int n){
int max = 0;
int max_value = A[0];
for(int i=0; i<n; i++){
    if(A[i]>max_value){
        max_value = A[i];
        max = i;
        }
    }
return max;
}

int main(){
int n;
cin >> n;
int A[n];
for(int i=0; i<n; i++){
    cin >> A[i];
}

int count = 0;

int min_value = find_min(A, n);
for(int i = min_value; i<n-1; i++){
        swap(A[i], A[i+1]);
        count++;
}

int max = find_max(A, n);

for(int i = max; i>0; i--){
    swap(A[i], A[i-1]);
    count++;
}

cout << count << endl;


return 0;
}
