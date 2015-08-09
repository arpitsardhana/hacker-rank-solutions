#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    string input;
    
    for(int i=0;i<T;i++){
        
        cin>>input; 
        int size = input.size();
        int size1 = size/2;
        int ops = 0;
        for(int k=0;k<size1;k++){
            ops += abs(input[k] - input[size - k - 1]);
	   cout<<ops<<endl;
        }
        cout<<ops<<endl;
    }
        
    return 0;
}

