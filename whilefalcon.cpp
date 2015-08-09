#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long int> main_arr;

long long int calc_prod(int arr1_stpt,int arr2_stpt,int setsize) {

	long long int prod = 0;
	int a2 = arr2_stpt+setsize -1;
	for(int i = 0;i < setsize;i++){
		prod = prod+((main_arr[arr1_stpt + i]) * (main_arr[a2 - i]));
	}
	cout<<prod<<endl;
	return prod;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    int temp1;
    int setsize = 1;
    int arr1_stpt = 1;
    int arr2_stpt = 1;

    long long int prod = 0;
    long long int temp = 0;

    cin>>N;

    for(int i = 0;i < N ;i++) {
	cin>>temp1;
	main_arr.push_back(temp1);
    }

    for(setsize = 1;setsize <= (N/2);setsize++) {
	for(arr1_stpt = 0;arr1_stpt < N;arr1_stpt += 1) {
		if (arr1_stpt+setsize > N) break;
		for(arr2_stpt = arr1_stpt+setsize;arr2_stpt < N;arr2_stpt += 1){
			if (arr2_stpt+setsize > N) break;
			cout<<"first_arr"<<arr1_stpt<<"second_arr"<<arr2_stpt<<"size"<<setsize<<endl;
			temp  = calc_prod(arr1_stpt,arr2_stpt,setsize);
			prod = max(prod,temp);
		}
	}
    }

    cout<<prod<<endl; 
    return 0;
}

