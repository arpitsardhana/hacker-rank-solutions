#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num;
    long int diff;
    vector<long int> ht_g;
    vector<long int> ht_b; 
    long int temp;
   
    cin>>num>>diff;

    for(int i=0;i<num;i++) {
      cin>>temp;
      ht_b.push_back(temp);
   }

    for(int i=0;i<num;i++) {
      cin>>temp;
      ht_g.push_back(temp);
   }

  sort(ht_b.begin(),ht_b.end());
  sort(ht_g.begin(),ht_g.end());
  int b_index=0;
  int g_index=0;
  int pairs = 0;
  for(int i=0;i<num;i++) {

	if (abs(ht_b[b_index] - ht_g[g_index]) <= diff) {
		cout<<ht_b[b_index] << "next"<< ht_g[g_index] << endl;
		pairs++;
		b_index++;
		g_index++;
		
	} else {
		if (ht_b[b_index] <  ht_g[g_index]) {
			b_index++;
		} else {
			g_index++;
		}
	}

  } 
  cout<<pairs<<endl;
 /*for(int i=0;i<num;i++) {
      cout<<ht_g.pop_back();

   } */

    return 0;
}
