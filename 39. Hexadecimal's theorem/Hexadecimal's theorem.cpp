#include<iostream>
using namespace std;

int main(){
long long n;
cin >> n;
long long f_0 = 0 , f_1 = 1, f_2 = 1, f_3 = 2, num_3, num_2;
for(int i=0 ; i<=n; i++){
        if(n == 0){
            cout << "0 0 0" << endl;
            break;
        }
        if(n == 1){
            cout << "0 0 1" << endl;
            break;
        }
        if(n == 2){
            cout << "0 1 1" << endl;
            break;
        }
        if(n == 3){
            cout << "1 1 1" << endl;
            break;
        }
        if(f_3 + f_2 == n){

                cout << f_0 << " " << f_1 << " " << f_3 << endl;
                break;
        }

        else if(f_3 + f_2 > n){
            cout << "I'm too stupid to solve this problem" << endl;
            break;
        }
        num_3 = f_3;
        num_2 = f_2;
        f_3 += f_2;
        f_2 = num_3;
        f_0 = f_1;
        f_1 = num_2;


}


return 0;
}
