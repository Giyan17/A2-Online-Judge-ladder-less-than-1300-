#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n=s.size();
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') {s.erase(i,1);break;}
    }

    if(s.size() == n) s.erase(0, 1);

    cout << s << endl;

    return 0;
}
