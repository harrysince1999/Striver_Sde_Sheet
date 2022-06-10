#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) 
{
    if(n==0)    return 1;
    
    int temp= modularExponentiation(x,n/2,m);
    if(n%2==1)    return (1LL*(1LL*temp*temp)%m*x%m)%m;
    else
          return (1LL*temp*temp)%m;
}
