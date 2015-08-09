#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    long long int X,Y,Z,B,W,X1,Y1;
     long long int cost = 0;
     for(int i=0;i<T;i++){
        cin>>B>>W;
        cin>>X>>Y>>Z;
        if (X < Y){
            X1=X;
            if (Y <= (X+Z)){
                Y1 = Y;
            }else{
                Y1 = X+Z;
            }
        } else {
            Y1 = Y;
            if (X <= (Y+Z)){
                X1 = X;
            }else{
                X1 = Y+Z;
            }
        }
        cost = B*X1 + W*Y1;
         cout<<cost<<endl;
    }
    
    return 0;
}

