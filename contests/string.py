MX=100+5
MOD=1000007

def func(i, j, k):
      if(i>len(a)):return 0;
      if(j>len(b)):return 0;
      if(k==len(c)):return 1;
      ret=dp[i][j][k];
      if(ret!=-1): return ret;
      ret=func(i+1,j,k);
      ret+=func(i,j+1,k);
      ret%=MOD;
      ''' '''
      ''' '''
      ''' '''
      if(i<len(a) and a[i]==c[k]):
         ret+=func(i+1,j,k+1);
         ret%=MOD;
         ret-=func(i+1,j+1,k+1);
         ret%=MOD;
      ''' '''
      ''' '''
      ''' '''
      if(j<len(b) and b[j]==c[k]):
         ret+=func(i,j+1,k+1);
         ret%=MOD;
         ret-=func(i+1,j+1,k+1);
         ret%=MOD;
      
      ''' '''
      ''' '''
      ''' '''
      ret+=MOD;
      ret%=MOD;
      dp[i][j][k]=ret
      return ret;
   


inp=raw_input().split(" ")
dp = [[[-1 for k in range(MX)] for j in range(MX)] for i in range(MX)]
a=inp[0]
b=inp[1]
c=inp[2]
print func(0,0,0)
