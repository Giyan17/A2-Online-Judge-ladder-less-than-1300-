#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int m = n;
int sum=0;
int num;
while(m--){
    cin >> num;
    sum += num;
}
int count = 0;
for(int i=1; i<=5; i++){
    if((i+sum)%(n+1)!=1){
            count++;
    }
}

cout << count << endl;

return 0;
}
