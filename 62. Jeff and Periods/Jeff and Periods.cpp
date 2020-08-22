#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n;
cin >> n;

int a[n], x[n], p[n];
for(int i=0; i<n; i++){
    cin >> a[i];
}



int start=0, end=0, flag=0, temp=0, dif_p=0, max=-1;
for(int i=0; i<n; i++){
    if(a[i] == -1) continue;
    if(a[i] != -1) start = i, end = i, flag=0;
    for(int j=i; j<n; j++){
        if(a[i]==a[j] && i!=j)end = j;
        if(dif_p != 0){
            if(dif_p != end - start && dif_p != 0 && end - start != 0) {flag = 1;}
        }
        if(a[i]==a[j] && i!=j)dif_p = end - start;
        if(dif_p > max) max = dif_p;
        if(a[i]==a[j] && i!=j)a[j]=-1;
        start = end;
    }

    cout <<"loop " << i << " flag is " << flag << endl;

    if(flag == 0){
        x[temp] = a[i];
        p[temp] = max;
        temp++;
    }
    a[i]=-1;
    max = -1;
    dif_p = 0;

}

for(int i=0; i<temp; i++){
    for(int j=i; j<temp; j++){
        if(x[i] > x[j]){
            swap(x[i], x[j]);
            swap(p[i], p[j]);
        }
    }
}

cout << temp << endl;
for(int i=0; i<temp; i++) cout << x[i] << " " << p[i] << endl;

return 0;
}
