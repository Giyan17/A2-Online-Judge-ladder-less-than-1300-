#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[7];
for(int i=0; i<7; i++) cin >> A[i];

int last;

for(int i=0; i<7; i++){

    n -= A[i];

    if(n <= 0){
        last = i;
        break;
    }
    if( i == 6) i=-1;
}

cout << last + 1 << endl;

return 0;
}
