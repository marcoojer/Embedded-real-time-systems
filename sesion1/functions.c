#include <stdio.h>

struct map{
bool mape[xmax+2][ymax+2];
}

struct mapint{
int mape[xmax+2][ymax+2];
}


//Function that checks how many alive cells there is around	
int checkSurrondings(map mapLife, int i, int j) 
{
	int alive=0;
	for (a=j-1;a<=j+1;a++) 
	{
		for (b=i-1;b<=i+1;b++)
		{
			if (a!=j && b!=i && mapLife.mape[b][a]==true) 
			{
				alive++;
			}
		}	
	}

	return alive;
}

int checkMapState(map mapLife,map mapState, map mapSurroundings)
	for (j=1;j<=ymax;j++)
	{
		for (i=1;i<=xmax;i++)
		{
		 if mapLife
		}
	
	
	
	}

