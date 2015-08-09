#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string input;
    cin>>input;
    int size = input.size();

   cout<<input[size - 2] <<endl;
    if(input[size - 2] == 'P'){
        int hr;
        string hr_str;
        hr=((input[0]- '0')*10 + (input[1] - '0')) + 12;
        cout<<hr<<endl;
        hr_str  = to_string(hr);
        input[0] = hr_str[0];
        input[1] = hr_str[1];
        
    }
    input[size - 2] = '\0';
    input[size -1 ] = '\0';
    char *str = (char *)malloc(size-2);
    for(int i=0;i<size-2;i++){
	str[i] = input[i];
    }
    cout<<str<<endl;
  
    return 0;
}
