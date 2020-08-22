#include<iostream>

using namespace std;

//Check prime number
int check_prime(int n){
int j =1;
for(int i=2; i<=(n/2); i++){
    if(n%i==0) j=0;
}
return j;
}

int main(){
int n, m, test;
cin >> n >> m;
test = n+1;
while(test<=m){
    if(check_prime(test) == 1) break;
    else test++;
}

if(test == m) cout << "YES" << endl;
else cout << "NO" << endl;


return 0;
}
