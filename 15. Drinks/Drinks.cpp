#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int A[n];
for(int i=0; i<n; i++){
    cin >> A[i];
}

float percentage = 0;

for(int i=0; i<n; i++){
    percentage += A[i];
}

percentage = percentage/n;
cout << fixed <<setprecision(6) << percentage << endl;
return 0;
}
