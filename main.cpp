/* https://github.com/sohitfirs/5.5.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int mas[100][100];
	int n, m;
	
	printf("n=");
	scanf("%i", &n);
	
	printf("m=");
	scanf("%i", &m);
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			scanf("%3i", &mas[i][j]);
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			printf("%3i", mas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			printf("%3i", mas[j][i]);
		}
		printf("\n");
	}
	system("pause");
}

