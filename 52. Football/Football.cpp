#include<iostream>
#include<string>

using namespace std;

int main(){
string s;
cin >> s;

int index=0, count = 0, flag = 0;

for(int i=0; i<s.size(); i++){

    if(s[index] == s[i]){
        count ++;
        if(count == 7){
         flag = 1;
         break;
    }
    }
    else {
        index = i;
        count = 1;
    }
}

if(flag == 1) cout << "YES";
else cout << "NO" ;

return 0;
}
