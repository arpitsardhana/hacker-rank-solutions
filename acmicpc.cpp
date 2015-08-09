#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    bitset<500> bitarray1[500];
    bitset<500> temp_sub;
    int max_team=0;
    int max_sub = 0;
    int count = 0;
    int N,K;

    cin>>N>>K;

    for(int i=0;i<N;i++){
	cin>>bitarray1[i];
    }

   for (int i=0;i<N;i++){
	for(int j=i+1;j<N;j++){
		temp_sub = bitarray1[i] | bitarray1[j];
		count = temp_sub.count();
                if (count > max_sub){
			max_sub = count;
			max_team = 1;
		} else if (count == max_sub) {

			max_team++;
		}
	}
   }
   cout<<max_sub<<endl<<max_team<<endl;

    return 0;
}

