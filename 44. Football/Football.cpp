#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
int n;
cin >> n;
string s[n], team1, team2;
for(int i=0; i<n; i++){
    cin >> s[i];
    team1=s[0];
    if(s[i]!=team1) team2=s[i];
}

int team_1=0, team_2=0;

for(int i=0; i<n; i++){
    if(s[i] == s[0]) team_1++;
    else team_2++;
}
if(team_1 > team_2) cout << team1 ;
else cout << team2;

return 0;
}
