#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
int t, sx, sy, ex, ey;
cin >> t >> sx >> sy >> ex >> ey;

string s;
cin >> s;
int time=0;

for(int i=0; i<s.size(); i++){

    if(s[i] == 'N'){
        if(sy < ey){
            sy++;
            time++;
        }
        else time++;
    }
    else if(s[i] == 'S'){
        if(sy > ey){
            sy--;
            time++;
        }
        else time++;
    }
    else if(s[i] == 'E'){
        if(sx < ex){
            sx++;
            time++;
        }
        else time++;
    }
    else if(s[i] == 'W'){
        if(sx > ex){
            sx--;
            time++;
        }
        else time++;
    }

    if(sx == ex && sy == ey) break;

    if(time == t){
        if(sx != ex || sy != ey) time=-1;
    }

}

cout << time << endl;

return 0;
}
