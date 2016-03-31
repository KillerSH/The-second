#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int sub_max(int *v, int l, int r)
{
	if (l == r)
		return v[l];

	int suma = 0, max = 0;
	for (int i = l; i <= r; i++)
		suma += v[i];

	int max1 = sub_max(v, l, r - 1);
	int max2 = sub_max(v, l + 1, r);
	if (max1 > max2)
		max = max1;
	else
		max = max2;

	if (suma > max)
		return suma;

	return max;
}

int main()
{
	int v[] = { 5,-6,3,4,-2,3,-3 };
	int rez = sub_max(v, 0, 6);

	printf("Iata rezultatul %d\n", rez);

	system("pause");
}