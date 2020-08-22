#include<iostream>
#include<string>
using namespace std;

int main(){
long long n;
cin >> n;
while(n != 0){
    if(n%10 == 1) n/=10;
    else if(n%100 == 14) n/=100;
    else if(n%1000 == 144) n/=1000;
    else break;
}

if(n==0) cout << "YES" << endl;
else cout << "NO" << endl;

return 0;
}
