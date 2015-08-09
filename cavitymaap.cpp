
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int N;
char cavity[100][100];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>N;
    string temp;
    //cout<<N<<endl;
    for(int i =0;i<N;i++){
	cin>>temp;
	//getline(cin,temp);
	//cout<<i<<endl;
	for(int j=0;j<N;j++){
		cavity[i][j] = temp[j];
		//cavity[i][j] = i*j;
	}
    }


    for(int i=1;i<N-1;i++){
	for(int j=1;j<N-1;j++) {
	int flag = 0;
                if (cavity[i][j] <= cavity[i-1][j])
                        flag = 1;

                if (cavity[i][j] <= cavity[i+1][j])
                        flag = 1;

                if (cavity[i][j] <= cavity[i][j-1])
                        flag = 1;

                if (cavity[i][j] <= cavity[i][j+1])
                        flag = 1;

	if (flag == 0){
		cavity[i][j] = 'X';
	}
	}
    }

    for(int i =0;i<N;i++){
        for(int j=0;j<N;j++){
                cout<<cavity[i][j];
        }
	cout<<'\n';
    }

    return 0;
}

