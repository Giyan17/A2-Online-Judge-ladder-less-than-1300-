#include<iostream>

using namespace std;

int main(){
int s, n;
cin >> s >> n;

int x[n], y[n];
for(int i=0; i<n; i++) cin >> x[i] >> y[i];


for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
    if(x[i] > x[j]){
        swap(x[i] ,x[j]);
        swap(y[i] ,y[j]);
    }
     if(x[i] == x[j] && y[i]<y[j]){
        swap(x[i] ,x[j]);
        swap(y[i] ,y[j]);
    }
    }
}
int flag = 0;
for(int i=0; i<n; i++){
    if(s <= x[i]) break;
    else{
        s += y[i];
        flag++;
    }
}

if(flag==n)cout << "YES";
else cout << "NO";

return 0;
}
