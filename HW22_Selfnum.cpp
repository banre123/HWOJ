#include <iostream>
using namespace std;
int CalcAutomorphicNumbers( int n)
{

	int count=0;
	for(int i=0;i<=n;i++)
	{
		int  sum=i*i;
		if (!(i/10))   //一位数
		{
			if(sum%10==i)
				count++;
		}
		else if (!(i/100))   //两位数
		{
			if(sum%100==i)	
				count++;
		}
		else if (!(i/1000))   //三位数
		{
			if(sum%1000==i)	
				count++;
		}
		else if (!(i/10000))   //四位数
		{
			if(sum%10000==i)
				count++;
		}
	}

	return count;
}

int main()
{
	int num;
	cin>>num;
	cout<<CalcAutomorphicNumbers(num);
}
