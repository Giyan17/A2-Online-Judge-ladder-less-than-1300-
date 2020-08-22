#include<iostream>

using namespace std;

int main(){
int A[3][3];

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> A[i][j] ;
    }
}

int B[3][3] = {1, 1, 1,1, 1, 1,1, 1, 1,};

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(A[i][j]%2 != 0)/*for odd number toggle*/{
            if(B[i][j]==1)/*if light is on*/{
                B[i][j] = 0;
                if(i+1<3)/*next bulb to right*/{
                    if(B[i+1][j]==1) B[i+1][j] = 0;
                    else B[i+1][j] = 1;
                }
                if(j+1<3)/*bulb to down*/{
                    if(B[i][j+1]==1) B[i][j+1] = 0;
                    else B[i][j+1] = 1;
                }
                if(i-1>=0)/*bulb to left*/{
                    if(B[i-1][j]==1) B[i-1][j] = 0;
                    else B[i-1][j] = 1;
                }
                if(j-1>=0)/*bulb to up*/{
                    if(B[i][j-1]==1) B[i][j-1] = 0;
                    else B[i][j-1] = 1;
                }
            }
            else if(B[i][j]==0)/*if light is of*/{
                B[i][j] = 1;
                if(i+1<3)/*next bulb to right*/{
                    if(B[i+1][j]==1) B[i+1][j] = 0;
                    else B[i+1][j] = 1;
                }
                if(j+1<3)/*bulb to down*/{
                    if(B[i][j+1]==1) B[i][j+1] = 0;
                    else B[i][j+1] = 1;
                }
                if(i-1>=0)/*bulb to left*/{
                    if(B[i-1][j]==1) B[i-1][j] = 0;
                    else B[i-1][j] = 1;
                }
                if(j-1>=0)/*bulb to up*/{
                    if(B[i][j-1]==1) B[i][j-1] = 0;
                    else B[i][j-1] = 1;
                }
            }
        }
    }
}

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout << B[i][j] ;
    }
    cout << endl;
}


return 0;
}
