#include<stdio.h>
void main()
{
	char ch;
	printf("enter eny character");
	scanf("%ch",&ch);
	if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
	{
		printf("this is alphabet :");
	}
	else if(ch>='0'&&ch<='9')
    {
    	 printf("this is digit :");
	}
	else
	{
		printf("this is special ch :..");
	}
		
}
