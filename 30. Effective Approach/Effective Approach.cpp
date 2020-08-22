#include<iostream>
using namespace std;



int main(){
int n;
cin >> n;
int A[100000], num;
for(int i=1; i<=n; i++){
    cin >> num;
    A[num] = i;
}

int m ,qu;
cin >> m;
long long vasya = 0;
long long petya = 0;
for(int i=0; i<m; i++){
    cin >> qu;

    vasya +=  A[qu];
    petya += n + 1 - A[qu];
    //cout << "Value of index " << A[b] << endl;

}


cout << vasya << " " << petya ;


return 0;
}
