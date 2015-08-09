#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    string str;
    int k;
    
    cin>>N>>str>>k;
    k=k%26;
    char *output=(char *)malloc(str.size());
    
    for(int i=0;i<N;i++){
        
        if(str[i] >= 'a' && str[i] <= 'z') {
            if ((str[i] + k) > 'z' ){
		if (str[i] == 'z'){
                output[i] = 'a' + (str[i] + k - 'z'-1);
                }else{
                output[i] = 'a' + (str[i] + k - 'z'-1);
		}
            } else{
                output[i] = str[i] + k;
            }
            continue;
        } 
           
         if (str[i] >= 'A' && str[i] <= 'Z'){
             if ((str[i] + k) > 'Z' ){
		if (str[i] == 'Z'){
              	output[i] = 'A' + (str[i] + k - 'Z' - 1); 
             	}else{
                output[i] = 'A' + (str[i] + k - 'Z' - 1);
		}
            } else{
                output[i] = str[i] + k;
            }
            continue;
            
        }
           
           output[i] = str[i];
    }
    cout<<str<<"   output  ";
    cout<<output<<endl;
      
    return 0;
}
