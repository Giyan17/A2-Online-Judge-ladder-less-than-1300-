#include<iostream>
 using namespace std;

 int main(){
 int y;
 cin >> y;
 int x;
 int on , te, hu , th;
 y++;
 while(y!= 0){
    x = y;
    on = x%10;
    x =x/10;
    te = x%10;
    x =x/10;
    hu = x%10;
    x = x/10;
    th = x%10;
    if( on!=te && on!=hu && on!=th && te!=hu && te!=th && hu!=th){
            cout << y << endl ;
            break;
    }
    y++;
 }

 return 0;
 }
