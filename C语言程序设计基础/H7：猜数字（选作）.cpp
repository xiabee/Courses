#include <stdio.h>
#include <string.h>
#include <math.h>

int a[7][32] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63},
	 {2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31,34,35,38,39,42,43,46,47,50,51,54,55,58,59,62,63},
	 {4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31,36,37,38,39,44,45,46,47,52,53,54,55,60,61,62,63},
	 {8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31,40,41,42,43,44,45,46,47,56,57,58,59,60,61,62,63},
	 {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63},
	 {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}};
	   
int main()
{ 
	int h[7], i=0, j, jc[70];
	memset(jc, 0, sizeof(jc));
	for (; i < 6; i++)
	{ 
		scanf("%d", &h[i]);
		if (h[i] == 0)
			break;
	}
	int n = i;//结束后i是h中元素个数, 给n
	
	for (j = 1; j <= 6; j++)
	{
		int ok = 1;
		for (i = 0; i < n; i++)
		{
			if (j == h[i]) ok = 0;  
		}
		if (!ok)	 
		{
			for (i = 0; i < 32; i++)
			{
	if (jc[a[j][i]] != 0) jc[a[j][i]] = jc[a[j][i]] + 1;
	else jc[a[j][i]] = a[j][i];
			}
		} 
	}

	for (j = 1; j <= 6; j++)  //消除多余数 
	{
		int ok = 1;
		for (i = 0; i < n; i++)
		{
			if (j == h[i]) ok = 0;  
		}
		if (ok)
		{
			for (i = 0; i < 32; i++)
	jc[a[j][i]] = 0;
		}
	}
	for (i = 1; i < 70; i ++)
	{
		if (jc[i] == i + n - 1)
			printf ("%d\n", i);
	}
	
	
}