#include <stdio.h>
#include <stdlib.h>


int num[10];
int j,i;
int change;

int main(void)
	{
		
	printf("�п�J10�Ӽ�: ");

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (j = 0; j <= 8; j++)
	{
		for (i = 0; i <= 8-j; i++)
		{
			
			if (num[i] > num[i + 1])
			{
				change = num[i + 1];
				num[i + 1] = num[i];
				num[i] = change;
			}
			

		}
	}

	printf("�Ѥp��j�̧Ǭ�: ");

	for (i = 0; i < 10; i++)
	{
		printf("%d   ", num[i]);
	}
	printf("\n");

	system("pause");
	return 0;

	}