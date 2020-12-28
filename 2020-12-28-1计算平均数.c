//计算平均数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	float average = 0;
	int v[3] = {0};
	int a[3][3] = { {88,75,92},{61,65,71},{76,75,77} };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += a[i][j];	
			v[i] += a[j][i];
		}
		printf("%d ",v[i]);
	}
	printf("\n");
	average = (float)sum / 9;
	printf("%0.2f\n",average);
	return 0;
}