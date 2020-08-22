#include<iostream>
#include<cmath>

using namespace std;

int main(){
long long A, B, C;
cin >> A >> B >> C;

cout << 4*(sqrt((A*C)/B) + sqrt((A*B)/C) + sqrt((B*C)/A));


return 0;
}
