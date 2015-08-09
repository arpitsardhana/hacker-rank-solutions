#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	
	int N;
	int row;
	int col;
	int index;

	string str;
	getline(cin,str);
	//cout<<str;

        vector<char> newstr;

        for(int i=0;i<str.size();i++){
		if(str[i] == ' '){
		     continue;
		}
		
                newstr.push_back(str[i]);
	}
	/*for ( int l=0;l<newstr.size();l++){
		cout<<newstr[l]; 
	} 
	cout<<endl;*/
	N = newstr.size();
	row = floor(sqrt(N));
	col = ceil(sqrt(N));
	if(row*col < N){
		row = col;
	}

	char *out = (char *)malloc(N+row);
        for(int j=0;j<col;j++){
		for(int k=0;k<row;k++){
			index = j+k*col;
			if (index >= N)
				break;
			cout<<newstr[index];

		}	
		cout<<" ";

	}
   
	return 0;
}
