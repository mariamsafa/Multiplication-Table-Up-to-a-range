#include<stdio.h>
int main()
{
	int i, n, range;
	printf("Enter an integer : ");
	scanf_s("%d", &n);
	do
	{
		printf("Enter a range (positive integer) : ");
		scanf_s("%d", &range);
	} while (range <= 0);
	for (i = 1; i <= range; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}