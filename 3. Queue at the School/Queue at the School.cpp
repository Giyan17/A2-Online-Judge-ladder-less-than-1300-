#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

int main(){
int n , t;
cin >> n >> t;
string s;
cin >> s;
int i,j;
for(j=0; j<t ; j++){
    for(i=0; i<n-1; i++){
        if(s[i]=='B' && s[i+1]=='G'){
            s[i] = 'G';
            s[i+1] = 'B';
            i++;
        }
    }
}

cout << s << endl;
return 0;
}
