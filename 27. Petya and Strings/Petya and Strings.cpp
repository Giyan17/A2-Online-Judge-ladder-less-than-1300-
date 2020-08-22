#include<iostream>
#include<string>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
string s1;
string s2;
int count_s1 = 0;
int count_s2 = 0;
int count_same = 0;
cin >> s1 >> s2;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
for(int i=0; i<s1.size(); i++){
    if(s1[i] > s2[i] ) {count_s1++;break;}
    else if(s1[i] < s2[i]){count_s2++;break;}
    else count_same++;
}

if(count_same == s1.size()) cout << 0 << endl;
else {
    if(count_s1 < count_s2) cout << -1 << endl;
    else cout << 1 << endl;
}

return 0;
}
