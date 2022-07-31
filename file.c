#include<stdio.h>
int main(){
	int i;
	int n,q;

	int g=0;
	int h=0;
	
	scanf("%d%d%d",&i,&n,&q);	
	int coin[n];
	
	for(int j=0;j<n;j++)
	{
		coin[j]=i;
	}
	for (int j=0;j<n;j++)
	{
		int a = j;
		while(a--)
		{
			if(coin[j]==1)
				coin[j]=2;
			else if (coin[j]==2)
				coin[j]=1;
		}
	}
	
	for(int j=0;j<n;j++)
	{
		if(q==1)
		{
			if(coin[j]==1)
				g=g+1;
		}
		else if (q==2)
		{
			if(coin[j]==2)
				h=h+1;
		}
	}
	
	if(q==1)
		printf("%d",g);
	if(q==2)
		printf("%d",h);
}
/*#include<stdio.h>
int main(void)
{
	int numbers[] = {4,6,8,2,7,5,0};
	
	for (int i=0;i<7;i++){
		if(numbers[i]==9){
			printf("Found");
			return 0;
		}
	}
	printf("Not Found\n");
	return 1;
}
*/
	

		

