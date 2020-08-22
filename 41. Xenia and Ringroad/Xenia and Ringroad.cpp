#include<iostream>

using namespace std;

int main(){
long long n, m;
cin >> n >> m;
long long a[m];
for(int i=0; i<m; i++)cin>> a[i];

long long time = 0;
long long initial = 1;
for(int i=0; i<m; i++){
    if(initial < a[i]){
        time += a[i] - initial;
        initial = a[i];
    }
    else if(initial > a[i]){
        time += n - initial + a[i];
        initial = a[i];
    }
}

cout << time << endl;
return 0;
}
