#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int N;
int T;
int *arr;
int calc_min(int i,int j){
   // if(i>j || i==0 || j== 0 || i>N || j>N || N>1000) return 0;
    int min=3;
    for(int id =i;id<=j;id++){
        if(arr[id] < min){
	    cout<<" arr["<<id<<"] is"<<arr[id];
            min = arr[id];
	    //cout<<" "<<min<<" ";
        }
    }
    return min;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int index_i,index_j;
    cin>>N>>T;
    arr = (int *)malloc(N*sizeof(int));
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int j=0;j<T;j++){
        cin>>index_i>>index_j;
        cout<<calc_min(index_i,index_j)<<endl;
    }
    return 0;
}
