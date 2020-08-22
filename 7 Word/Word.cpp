#include<iostream>
#include<string>
#include<string.h>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin , s);
if(islower(s[0])){
    putchar(toupper(s[0]));
    s.erase(0,1);
}

cout << s << endl;

return 0;
}
