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
    long int sum = 0;

    unordered_map<char, int> map;

     for(i=0;i<count;i++) {

	if (map.count(str[i])) {
		map[str[i]] += 1;

	} else {
		map[str[i]] = 1;

	} 

     } 

   for(i=0;i<map.size();i++) {
	sum = sum+ (map[i] * (map[i] +1)/2);
  } 

        cout<<sum<<endl;

     return 0;
}

