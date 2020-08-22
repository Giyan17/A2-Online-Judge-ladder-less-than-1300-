#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int f_h[n], s_h[n];
    for(int i=0; i<n; i++){
        f_h[i] = s[i] - '0';
    }

    for(int i=0; i<n; i++){
        s_h[i] = s[n+i] - '0';
    }

    sort(f_h , f_h+n);
    sort(s_h , s_h+n);

    int flag=0;

    if(f_h[0] < s_h[0]){
        for(int i=1; i<n; i++){
            if(f_h[i] >= s_h[i]){flag=1;break;}
        }
    }

    else if(f_h[0] > s_h[0]){
        for(int i=1; i<n; i++){
            if(f_h[i] <= s_h[i]){flag=1;break;}
        }
    }

    else if(f_h[0] == s_h[0]) flag = 1;

    if(flag == 0) cout << "YES";
    else cout << "NO";


    return 0;
}
