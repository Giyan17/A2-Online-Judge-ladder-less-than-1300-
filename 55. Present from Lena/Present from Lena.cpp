#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
int n, a=0;
cin >> n;
int flag=0;

for(int i=0; i<=n; i++){
        for(int j=0; j<abs(n-i); j++) cout << "  " ;
             while(a<=i){
            if(a==0) cout << a;
            else cout << " " <<a ;
            a++;
        }
        a--;
        while(a>0){
            a--;
            cout << " " <<a ;
        }
        a = 0;
        cout << endl;
}

for(int i=n-1; i>=0; i--){
        for(int j=0; j<abs(n-i); j++) cout << "  " ;
         while(a<=i){
             if(a==0) cout << a;
            else cout << " " <<a ;
            a++;
        }
        a--;
        while(a>0){
            a--;
            cout << " " <<a ;
        }
        a = 0;
        cout << endl;
}

return 0;
}
