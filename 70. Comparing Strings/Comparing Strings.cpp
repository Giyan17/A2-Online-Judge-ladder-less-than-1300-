#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int num=0;
    string s1_dif, s2_dif;
    if(s1.size() != s2.size()) num=1;
    else if(s1.size() == s2.size()){
        for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                num++;
                s1_dif += s1[i];
                s2_dif += s2[i];
            }
            if(num >=3) break;
        }
    }
    if(num == 2 && s1_dif[0] == s2_dif[1] && s1_dif[1] == s2_dif[0]) cout << "YES" << endl;
    else if(num == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
