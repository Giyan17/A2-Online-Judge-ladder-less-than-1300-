#include<iostream>

using namespace std;

int* fn(int n, int a[]){
    if(n==1) return a;
    else{
        swap(a[n-2], a[n-1]);
        n--;
        fn(n, a);
    }
}


int main(){
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++) a[i] = i+1;

fn(n, a);

for(int i=0; i<n; i++) cout << a[i] << " ";


return 0;
}
