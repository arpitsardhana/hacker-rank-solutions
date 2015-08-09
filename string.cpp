#include <iostream>
#include <string>

using namespace std;
class AB {
    public:
    string createString(int N,int K){
    string s;
    int i = 0;
    int pair = 0;
    string add_pair= "AB";
    string add_single = "A";
    while(i < N ){
        if (pair < K && i+2 < N){
            s.append(add_pair);
            i = i+2;
	    pair = pair+1;
            continue;
        }
        s.append(add_single);
            i++;
    }
    return s;
  }
};

int main(){
class AB new1;

string name;
name = new1.createString(3,2);

cout<<name<<endl;
}
