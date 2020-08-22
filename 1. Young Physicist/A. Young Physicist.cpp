#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
int A[n][3];
for(int i =0; i<n; i++){
    for(int j =0; j<3; j++){
        cin >> A[i][j];
    }
}

int sum_x = 0;
int sum_y = 0;
int sum_z = 0;

for(int i =0; i<n; i++){
    sum_x += A[i][0];
    sum_y += A[i][1];
    sum_z += A[i][2];

}

if(sum_x == 0 && sum_y == 0 && sum_z == 0){
    cout << "YES" << endl;
}

else {
    cout << "NO" << endl;
}

return 0;
}
