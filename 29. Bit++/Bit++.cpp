#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
int x=0;
string s;
cin>>n;
while(n--){
    cin >> s;
    if(s=="++X") x++;
    else if (s=="X++") x++;
    else if (s=="X--") x--;
    else x--;
}

cout << x << endl;

return 0;
}
