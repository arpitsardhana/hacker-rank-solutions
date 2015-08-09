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
    for(int i=0;i<T;i++){
        int arr1[26] = {0};
        int arr2[26] = {0};
        string str;
        cin>>str;
        int size =  str.size();
        if (size%2 == 1){
            cout<<"-1"<<endl;
            continue;
        }
        int ind1=0;
        int ind2=0;
        size = size/2;
        for(int j=0;j<size;j++){
            ind1 = str[j] - 'a';
            ind2 = str[size+j] - 'a';
            arr1[ind1]++;
            arr2[ind2]++;
	    cout<<ind1<<"  "<<str[j]<<"  "<<ind2<<" "<<str[j+1];
        }
	
        int num_del =0;
        for(int k=0;k<size;k++){
            num_del += abs(arr1[k] - arr2[k]);
        }
        int num_mod = ceil(num_del/2);
        cout<<num_mod<<endl;
    }
    return 0;
}
