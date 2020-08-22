#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
string s;
string test = "";
cin >> s;
int num = 0;
int same = 0;
for(int i = 0; i<s.size(); i++){
    for(int j=i+1; j<s.size(); j++){
        if(s[i] == s[j])num++;
    }
    if(num==0) {
            test = test+s[i];
            }
    num = 0;
}
if((test.size())%2 == 0) cout << "CHAT WITH HER!" ;
else cout << "IGNORE HIM!" << endl;

return 0;
}
