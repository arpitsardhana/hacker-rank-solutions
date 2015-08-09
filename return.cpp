#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ac_d,ac_m,ac_y,ex_d,ex_m,ex_y;
    cin>>ac_d;
    cin>>ac_m;
    cin>>ac_y;
    cin>>ex_d;
    cin>>ex_m;
    cin>>ex_y;
    
   if (ex_y > 3000 || ex_d > 31 || ex_m > 12 || ac_y > 3000 || ac_m > 12 || ac_d > 31){
        cout<<0;
        return 0;
    }
    if (ac_y <= ex_y && ac_m <= ex_m && ac_d <= ex_d){
        cout<<0;
        return 0;
    }
    long int fine = 0;
    
    if(ac_y > ex_y){
        fine = 10000;
        cout<<fine;
        return 0;
    } else if (ac_y < ex_y){
	cout<<0;
	return 0;
   }
   cout<<"reached month";
   if (ac_m > ex_m){
        fine = 500*(ac_m - ex_m);
        cout<<fine;
        return 0;
    }else if (ac_m < ex_m){
	cout<<0;
	return 0;
   }
   cout<< "reached day";
   if (ac_d > ex_d){
        fine = 15*(ac_d - ex_d);
        cout<<fine;
        return 0;
    }
    cout<<fine;
    return 0;
}

