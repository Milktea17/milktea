#include <stdio.h>

long my_pow(long A, long B, long C);

int main(){
	long A,B,C;
	long cul;

	scanf("%d %d %d",&A,&B,&C);		

	cul=my_pow(A,B,C);

	printf("%d\n",cul);

	return 0;
}

long my_pow(long A, long B, long C){
	long tmp;

	if(B==0) //더이상 나눌 횟수가 없다
		return 1;

	tmp = my_pow(A,B/2,C);
	tmp = tmp*tmp % C;
/*
	if(B%2==0) //짝수면 패스
		return tmp;

	else //홀수면 한번 마지막한번 곱해줌
	{
		return tmp*A %C;
	}
*/
	if(B%2==1) //홀수면 한번 더 계산
	{
		return tmp*A %C;
	}

	return tmp;
}