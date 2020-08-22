#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int z=0, max=0;
    for(int x=0; x<=n/a; x++){
        for(int y=0; y<=n/b; y++){
            if((n-a*x-b*y)%c==0 && n-a*x-b*y>=0){
                    z = (n-a*x-b*y)/c;
                    if(x+y+z>max){
                        max=x+y+z;
                            }
                    }
        }
    }
    cout <<max;

}
