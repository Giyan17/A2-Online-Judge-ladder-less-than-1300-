#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int A[n];
for(int i=0; i<n; i++) cin >> A[i];
int count_5 = 0, count_0 = 0;

for(int i=0; i<n; i++){
    if(A[i] == 5) count_5++;
    else count_0++;
}
int num = (count_5/9)*9;
if(count_5 >= 9 && count_0>0){
    while(num--)cout << 5;
    while(count_0--)cout << 0;
}
else if(count_0 > 0) cout << 0 ;
else cout << -1;

return 0;
}
