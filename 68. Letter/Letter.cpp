#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int flag=0, num=0;
    for(int i=0; i<s2.size(); i++){
        flag=0;
        if(s2[i]==' '){num++;continue;}
        for(int j=0; j<s1.size(); j++){
            if(s2[i]==s1[j]){
                flag = 1;
                s1.erase(j,1);
                num++;
                break;
            }
        }
        if(flag=0) break;
    }


    if(num == s2.size()) cout << "YES";
    else cout << "NO";

}
