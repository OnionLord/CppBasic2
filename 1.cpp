#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int **AnArray;
	int **TheArray;
		
	int i, j;

	long seed;

	seed = time(NULL);
	srand(seed);

	AnArray = new int *[4];

	TheArray = new int *[4];

	for ( i = 0 ; i < 4 ; i ++ )
	{
		AnArray[i] = new int[4];
		memset(AnArray[i], 0 , sizeof(int)*4);
		TheArray[i] = new int[4];
		memset(TheArray[i], 0 , sizeof(int)*4);

	}


	for ( i = 0 ; i < 4 ; i ++ )
	{
		for ( j =  0 ; j < 4 ; j ++ )
		{
			AnArray[i][j] = rand()%9 + 1;
			TheArray[i][j] = rand()%9 + 1;
		}
	}
	

	cout << "1번 행렬 \n";
	for ( i = 0 ; i < 4 ; i ++ )
	{
		for ( j = 0 ; j < 4 ; j ++ )
		{
			cout << AnArray[i][j] << " " ;
		}
		cout << endl;
	}
	
	cout << "2번 행렬 \n";

	for ( i = 0 ; i < 4 ; i ++ )
	{
		for ( j = 0 ; j < 4 ; j ++ )
		{
			cout << TheArray[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "두 행렬의 합\n";

	for ( i = 0 ; i < 4 ; i ++ )
	{
		for ( j = 0 ; j < 4 ; j ++ )
		{
			cout << AnArray[i][j] + TheArray[i][j] << " ";
		}
		cout << endl;
	}

	cout << "두 행렬의 차\n";

	for ( i = 0 ; i < 4 ; i ++ )
	{
		for ( j = 0 ; j < 4 ; j ++ )
		{
			cout << AnArray[i][j] - TheArray[i][j] << " ";
		}
		cout << endl;
	}

	
	delete []TheArray;
	delete []AnArray;

	return 0;

}
