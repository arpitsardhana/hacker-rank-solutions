#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    
    vector<int> arr;
    int temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int count = N;
    cout<<count<<endl;
    count--;
    for(int index=0;index<N;index++){
        if (count == 0)
               break;
        if(arr[index] < arr[index+1]){
            cout<<count<<endl;
            count--;
        }else{
            count--;
        }
        
    }
    return 0;
}

