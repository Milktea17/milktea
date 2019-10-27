#include <stdio.h>
#include <math.h>
int my_pow(int A, int B, int C);

int main(){
	int A,B,C;
	int cul;
	int i;

	scanf("%d %d %d",&A,&B,&C);		
	cul=my_pow(A%C,B,C);

	printf("%d\n",cul);

	return 0;
}

int my_pow(int A, int B, int C)
{
	int tmp;

	if(B == 1)
		return A;

	else
	{
		tmp=my_pow(A,B/2,C);
		if(B%2)
			return ((tmp*tmp) % C * A) % C;
		else
			return (tmp*tmp) % C;
	}

	return 0;
}