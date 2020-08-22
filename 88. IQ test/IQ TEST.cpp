#include<iostream>
#include<string>

using namespace std;

int main(){
    string s[4];
    for(int i=0; i<4; i++)cin >> s[i];

    int count = 1;

    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            count = 1;
            if(s[i][j]==s[i][j-1])count++;
            if(s[i][j]==s[i-1][j])count++;
            if(s[i][j]==s[i-1][j-1])count++;
            if(count==4 || count == 3) {cout << "YES"; return 0;}
        }
    }

    cout << "NO";
    return 0;
}
