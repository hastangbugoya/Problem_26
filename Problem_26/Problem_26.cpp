// Problem_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int d;
	//int d = 3;
	int i, ctr, j;
	int k, l, m;
	int digits[2001];
	printf("\n");
	int nonterminating = 0;
	for (d = 1; d <= 20; d++)
	{
		for (i = 1, ctr = 0; i > 0 && ctr < 2001; ctr++)
		{
			while ((int)i / (int)d == 0 && ctr < 2001)
			{
				digits[ctr] = 0;
				ctr++;
				i *= 10;
			}
			if (ctr < 2001)
				digits[ctr] = (int)i / (int)d;
			i = i % d * 10;
		}
		if (ctr == 2001)
			nonterminating++;
	}
	printf("\n%d", nonterminating);
}

/*
	if (ctr >= 1001)
	{
		ctr = 1001;
		for (k = 500; k > 0; k--)
		{
			for (l = 1; l < 1001 - k * 2 && digits[l] == digits[k + l]; l++);
			if (l >= k)
				printf("\n%d", k);
		}
	}
*/

/*
int main()
{
	int d = 485;
	//int d = 3;
	int i, ctr, j;
	int k, l, m;
	int digits[1001];
	int longestcount = 0;
	int longestvalue = 3;
	int startsat = -1;
	printf("\n");
	for (i = 1, ctr = 0; i > 0 && ctr < 1001; ctr++)
	{
		while ((int)i / (int)d == 0 && ctr < 1001)
		{
			printf("0");
			digits[ctr] = 0;
			ctr++;
			i *= 10;
		}
		if (ctr < 1001)
		printf("%d", digits[ctr] = (int) i / (int) d);
		i = i % d * 10;
	}
	printf("\n");
	for (int i = 0; i < ctr; i++)
	{
		printf("%d", digits[i]);
	}
	if (ctr >= 1001)
	{
		ctr = 1001;
		for (k = 1; k < 1001; k++)
		{
			l = k + 1;
			while (l < 1001 && digits[l] != digits[k])
				l++;
			m = 0;
			while( k+m < l && digits[k+m] == digits[l+m]) m++;
			if (m == k && m > longestcount)
			{
				longestcount = m;
				longestvalue = d;
				startsat = k;
			}
		}
	}
	printf("\n%d %d %d", longestcount, longestvalue, startsat);
}

*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
