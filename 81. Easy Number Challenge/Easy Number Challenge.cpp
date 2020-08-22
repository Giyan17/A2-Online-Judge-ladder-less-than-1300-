#include<iostream>
#include<algorithm>
using namespace std;
long long sol[1000000] = {0};

int check_div(int a){
    if(sol[a]!=0){
        return sol[a];
    }


    int sum=0;
    for(int i=1; i*i<=a; i++){
        if(a%i == 0){
            if(i*i != a)sum++;
            sum++;
        }
        }
    sol[a] = sum;
    return sum;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    long long M = 1073741824;
    int sum=0;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int z=1; z<=c; z++){
                    sum+=check_div(i*j*z);
            }
        }
    }

    cout << sum%M;

    return 0;
}
