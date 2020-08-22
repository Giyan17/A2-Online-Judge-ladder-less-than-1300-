#include<iostream>
#include<string>
using namespace std;

int main(){
int n , stone = 0;
string s;
cin >> n >> s;

for(int i=0; i<n; i++){
    if((s[i] == 'R' && s[i+1] == 'R') || (s[i] == 'G' && s[i+1] == 'G') || (s[i] == 'B' && s[i+1] == 'B')) stone++;
}
cout << stone << endl;
return 0;
}
