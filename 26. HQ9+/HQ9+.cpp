#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
string s;
cin >> s;
int count=0;
for(int i=0; i<s.size() ; i++){
    if(s[i] == 'H') {cout << "YES" << endl;break;}
    else if(s[i] == 'Q') {cout << "YES" << endl;break;}
    else if(s[i] == '9') {cout << "YES" << endl;break;}
    else if(s[i] == '+') {cout << "YES" << endl;break;}
    else count++;
}
if(count == s.size()) cout << "NO" << endl;

return 0;
}
