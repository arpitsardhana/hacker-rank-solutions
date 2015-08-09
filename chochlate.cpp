#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        int count = n/c;
        answer = count;
        int wr = count;
        int j  =0;
        while(wr >=  m){
	    int temp = wr%m;
            wr = wr/m;
            answer = answer + wr;
            wr = wr + temp;
        }
        
        cout<<answer<<endl;
    }
    return 0;
}
