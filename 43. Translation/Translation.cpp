#include<iostream>
#include<string>

using namespace std;

int main(){
string s, t;
cin >> s >> t;
int count = 0;
for(int i=0; i<s.size(); i++){
    if(s[i] == t[t.size()-1-i]) count ++;
}

if(count == s.size()) cout << "YES" << endl;
else cout << "NO" << endl;

return 0;
}
