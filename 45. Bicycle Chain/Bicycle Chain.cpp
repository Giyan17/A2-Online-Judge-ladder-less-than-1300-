#include<iostream>

using namespace std;

int main(){
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++) cin >> a[i];
int m;
cin >> m;
int b[m];
for(int i=0; i<m; i++) cin >> b[i];

int max = 0, count=0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if((b[j]/a[i]) > max && b[j]%a[i] == 0){
            max = b[j]/a[i];
            count=1;
        }
        else if(b[j]/a[i] == max && b[j] && b[j]%a[i] == 0){
            count++;
        }
    }
}

cout << count << endl;


}
