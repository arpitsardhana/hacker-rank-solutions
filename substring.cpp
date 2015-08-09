#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
    int count;
    string str;
    string sub;
    cin >> count;
    cin >> str;
    int i;
    int j;
    int numb = 0;
  
    unordered_map<string,int> map;:q


     for(i=0;i<count;i++) {
	for(j=i+1;j<count;j++){
		if (str[i] == str[j])
			numb++;
	}

   }

	cout<<(numb+count)<<endl;

     return 0;
}
