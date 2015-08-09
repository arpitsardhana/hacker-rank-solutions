#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int N;
    int T;
    cin>>T;
    int count=0;
    long long int rem;
    long long int temp;
    for(int i=0;i<T;i++){
        cin>>N;
        count=0;
	temp = N;

        while(temp > 0){
            rem=temp%10;
            if (rem == 0){
                temp=temp/10;
                continue;
            }
            
            if (N%rem == 0){
                   count++;
		   cout<<rem;
	    }
            
            temp = temp/10;
        }
        cout<<endl<<count<<endl;
        
    }
    return 0;
}
