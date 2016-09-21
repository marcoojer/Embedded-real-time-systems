#include <stdio.h>

int main()
{

	map mapLife;  //we define a matrix with bools with the size of the map plus the corners(+2)
	map mapState; //it give us the information if a cell lives, dies or does not happen anything in the update
	mapint mapSurrondings; //it define how many alive cells there is in the surroundings of the cell.

	//Let's define if each point of the map is alive (true) or not(false) in the map at the begginign (can go to another function)
	for (j=1;j<=ymax;j++)
	{
		for (i=1;i<=xmax;i++)
		{
	 		if ((i==3 && j==2)||(i==4 && j==2)||(i==2 && j==3)||(i==3 && j==3)||(i==3 && j==4))
			{
				mapLife.mape[i][j]=true; //this values have initially life
			}
			else
			{
				mapLife.mape[i][j]=false;//this values are originally death
			}
	   	}
		

	}
}
