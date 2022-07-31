#include<stdio.h>
struct futsal
{
	char name[50];
	char team[50];
	int goals;
};
int main()
{
	int i;
	struct futsal f[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the name: ");
		scanf("%c",f[i].name);

		printf("Enter the team: ");
		scanf("%c",f[i].team);

		printf("Enter the number of goals: ");
		scanf("%c",f[i].goals);
	}
	for(i=0;i<10;i++)
	{
		printf("Name: %c",f[i].name);
		printf("Team: %c",f[i].team);
		printf("Goals: %d",f[i].goals);
	} 
}
/*#include<stdio.h>
void vow()
{
	printf("Vowel");
}
void cons()
{
	printf("Consonant");
}
int main()
{
	char alp;
	int c=0;
	printf("Enter an alphabet: ");
	scanf("%c",&alp);
	char vowel[]={'a','e','i','o','u'};

	for(int i=0;i<5;i++)
	{
		if(alp==vowel[i])
		{
			c++;
		}
	}
	if(c==1)
	vow();
	if(c==0)
	cons();
}*/
/*#include<stdio.h>
struct sphere
{
	float r;
	float area;
	float volume;

};
int main()
{
	struct sphere sp;

	printf("Enter the radius: ");
	scanf("%f",&sp.r);

	sp.area=(4*3.14*sp.r*sp.r);
	sp.volume=(1.33*3.14*sp.r*sp.r*sp.r);
	printf("Area:%f",sp.area);
	printf("\nVolume:%f\n",sp.volume);
}*/
