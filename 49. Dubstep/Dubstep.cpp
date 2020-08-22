#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
string s;
cin >> s;

for(int i=0; i<s.size(); i++){
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
        s[i] = ' ', s.erase(i+1,2);
        //s[i-1] = ' ';
        i--;
    }
}

cout << s << endl;

return 0;
}
