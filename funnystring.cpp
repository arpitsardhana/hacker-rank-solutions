#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin>>T;
    string str,rev;
    for (int i=0;i<T;i++){
          cin>>str;
          rev = str;
          reverse(rev.begin(),rev.end());
          int size = rev.size();
          int diff1,diff2;
          int flag = 0;
          cout<<str<<"   "<<rev<<endl;
          for(int i=1;i<size;i++){
              diff1 = abs(rev[i] - rev[i-1]);
              diff2 = abs(str[i] - str[i-1]);
	     cout<<diff1<<"   "<<diff2<<endl;
              if (diff1 != diff2){
                  flag = 1;
                  break;
               }
          }
          if (flag == 1)
               cout<<"Not Funny"<<endl;
          else
                cout<<"Funny"<<endl;
    }
        
    return 0;
}

