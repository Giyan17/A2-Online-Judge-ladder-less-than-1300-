#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[n][2];
for(int i=0; i<n; i++){
    for(int j=0; j<2; j++) cin >> A[i][j];
}
int time=0, time_o=0, time_c=0;
for(int i=0; i<2; i++){
     for(int j=0; j<n; j++){
        if(A[j][i] == 1)time_o++;
        else time_c++;
     }
     if(time_c < time_o) time += time_c;
     else time += time_o;
     time_o = 0;
     time_c = 0;
}

cout << time << endl;

return 0;
}
