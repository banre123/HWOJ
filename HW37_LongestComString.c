#include<stdio.h>
#include<string.h>

int LCS(char *s1,char *s2)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	int start1,start2;
	int i,j,count=0,max=0,pos=0;
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			start1=i;start2=j;
			while((s1[start1]==s2[start2])&& (start1<len1) && (start2<len2))
			{
				++count;
				++start1;
				++start2;
			}
			if(count>max)
			{
			max=count;
			pos=i;
			}
			count=0;
		}
		
	}
	if(max==0)return;
	else
	{
		for(j=pos;j<pos+max;++j)
		printf("%c",s1[j]);
		printf("\n");
}
}
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	LCS(a,b);
	//printf("%d",LCS(a,b));
	//getchar();
}
