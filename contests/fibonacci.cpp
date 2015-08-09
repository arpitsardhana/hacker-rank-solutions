#include<iostream>
using namespace std;

#define max_n 5000000
int mod=100000;
int memo[max_n+5]={0};
long long int count=0;
int fib(int n)
{	count++;
	cout<<count<<endl;
      if(n <= 1)return 0;
      if(n==2) return 1;
      if(memo[n]>0)return memo[n];
      memo[n]=(fib(n-1) + fib(n-2))%mod;
      return memo[n];
}
int main()
{
      int n,i;
      fib(174000);
      /*for(i=max_n;i>=1;i--)
      {
         fib(i);
      } */
      
      cin>>n;
      cout<<memo[n]<<endl;
      return 0;
   
}

