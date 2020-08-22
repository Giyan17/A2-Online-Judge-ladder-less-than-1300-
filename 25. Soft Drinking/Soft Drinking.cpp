#include<iostream>
using namespace std;

int main(){
int  n, k, l, c, d, p, nl, np;
cin >> n >> k >> l >> c >> d >> p >> nl >> np;

int drink = (k*l)/(n*nl), slice = (c*d)/n, salt = p/(n*np);
if(drink < slice && drink < salt) cout << drink;
else if(slice < drink && slice < salt) cout << slice;
else cout << salt;

return 0;
}
