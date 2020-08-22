#include<iostream>
#include<string>

using namespace std;

int main(){
std::string s;
cin >> s;
int amt[26];
for(int i=0; i<26; i++)amt[i] = 0;
for(int i=0; i<s.size(); i++){
    amt[s[i] - 'a']++;
}

int count_odd = 0;
for(int i=0; i<26; i++){
    if(amt[i]%2 == 1)count_odd++;
}

if(count_odd == 0 || count_odd == 1) cout << "First" << endl;
if(count_odd%2 == 0 && count_odd > 1) cout << "Second" << endl;
else if(count_odd > 1 && count_odd%2==1) cout << "First" << endl;

return 0;
}
