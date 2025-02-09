#include<stdio.h>
int main()
{
	int ch;
	printf("enter the charachter : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
	   ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch== 'U')
	   {
	   	printf("The value is vowel",ch);
	   }
	   else
	   {
	   	printf("The value is constant \n");
	   }
	   return 0;
}
