#include <stdio.h>

int main() 
{
	int T,N,i;
	scanf("%d",&T);
	for(;T!=0;T--)
	{
	    int X[8],vir=0;
	    int best=8,worst=0;
	    scanf("%d",&N);
	    for(i=0;i<N;i++)
	     scanf("%d",&X[i]);
	    for(i=1;i<N;i++)
	    {
	        if((X[i]-X[i-1])<=2)
	         vir++;
	        else
	        {
	            if(vir>worst)
	             worst=vir;
	            if(vir<best)
	             best=vir;
	           vir=0;
	        }
	    }
	    if(vir>worst)
	     worst=vir;
	    if(vir<best)
	     best=vir;
	     printf("%d %d\n",best+1,worst+1);
	}
	return 0;
}
