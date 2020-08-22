#include<iostream>
#include<algorithm>

using namespace std;

int main(){
long long g[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++) cin >> g[i][j];
}

int p[5] = {0, 1, 2, 3, 4};
int temp=0, ans=0;

do{
    temp=0;

    //01234
    temp+=g[p[0]][p[1]] + g[p[1]][p[0]];
    temp+=g[p[2]][p[3]] + g[p[3]][p[2]];

    //1234
    temp+=g[p[1]][p[2]] + g[p[2]][p[1]];
    temp+=g[p[3]][p[4]] + g[p[4]][p[3]];

    //234
    temp+=g[p[2]][p[3]] + g[p[3]][p[2]];

    //34
    temp+=g[p[3]][p[4]] + g[p[4]][p[3]];

    if(temp > ans) ans = temp;
}
while(next_permutation(p, p+5));

cout << ans << endl;

return 0;
}
