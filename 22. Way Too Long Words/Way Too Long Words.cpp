#include<iostream>
#include<string>
#include<sstream>
#include<string.h>
using namespace std;

int main(){

int n;
cin>>n;

while(n--){
    string s;
    cin >> s;
    if(s.size()>10){
        string s1;
        ostringstream strg;
        strg << s.size() - 2;
        s1 = s[0] + strg.str() + s[s.size() - 1];
        cout << s1 << endl;
    }
    else cout << s << endl;
}


return 0;
}
