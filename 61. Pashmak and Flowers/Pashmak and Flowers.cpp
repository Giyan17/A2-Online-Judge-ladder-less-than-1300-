#include<iostream>
#include<algorithm>

using namespace std;

int main(){
long long n;
cin >> n;

long long b[n];
for(int i=0; i<n; i++) cin >> b[i];

sort(b, b+n);

long long difference = b[n-1] - b[0];

long long big=0, small=0, ways;

for(int i=0; i<n; i++){
    if(b[i] == b[0]){
        small++;
    }
    if(b[i] == b[n-1]){
        big++;
    }
}

if(small == n) ways = (small*(small-1))/2;
else ways = small*big;

cout << difference << " " << ways << endl;
return 0;
}
