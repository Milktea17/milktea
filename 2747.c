#include <stdio.h>

int main(){

	int n,i,result,tmp1,tmp2;

	scanf("%d",&n);
	if( n < 1 || n > 45)
	{
		printf("[n:%d] input n 1~45",n);
		return -1;
	}

	result = 0; //n==0
	if(n==1)
	{
		result=1;
	}
	else //n>=2
	{	
		tmp1=1;
		for(i=1;i<=n;i++)
		{
			tmp2=tmp1;
			tmp1=result;
			result=tmp1+tmp2;
		}
	}
	printf("%d\n",result);
	return 0;
}
