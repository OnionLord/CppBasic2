#include <iostream>
#include <cmath>

using namespace std;

class square
{
private:
	char colour[20];
	double coordinates[4][2];
	double girth;
	double area;

public:

	void input()
	{
		int i, j;

		cout << "Colour Of The Square : " << endl;
		cin >> colour;

		cout << "Coordinates Of Each Square : " << endl;
		for ( i = 0 ; i < 4 ; i ++ )
		{
			for ( j = 0 ; j < 2 ; j ++ )
			{
				cin >> coordinates[i][j];
			}
		}
	}

	void calculate()
	{
		girth = 0;
		area = 1;
		
		girth += sqrt( ((coordinates[0][0]-coordinates[1][0])*(coordinates[0][0]-coordinates[1][0])) + ((coordinates[0][1]-coordinates[1][1]) * (coordinates[0][1]-coordinates[1][1])));
		girth += sqrt( ((coordinates[0][0]-coordinates[2][0])*(coordinates[0][0]-coordinates[2][0])) + ((coordinates[0][1]-coordinates[2][1]) * (coordinates[0][1]-coordinates[2][1])));
		girth += sqrt( ((coordinates[2][0]-coordinates[3][0])*(coordinates[2][0]-coordinates[3][0])) + ((coordinates[2][1]-coordinates[3][1]) * (coordinates[2][1]-coordinates[3][1])));
		girth += sqrt( ((coordinates[3][0]-coordinates[1][0])*(coordinates[3][0]-coordinates[1][0])) + ((coordinates[3][1]-coordinates[1][1]) * (coordinates[3][1]-coordinates[1][1])));
		

		area *= sqrt( ((coordinates[0][0]-coordinates[1][0])*(coordinates[0][0]-coordinates[1][0])) + ((coordinates[0][1]-coordinates[1][1]) * (coordinates[0][1]-coordinates[1][1])));
		area *= sqrt( ((coordinates[3][0]-coordinates[1][0])*(coordinates[3][0]-coordinates[1][0])) + ((coordinates[3][1]-coordinates[1][1]) * (coordinates[3][1]-coordinates[1][1])));
	}

	void print()
	{
		cout << "The Girth Of The Square : " << girth << endl;
		cout << "The Area Of The Square : " << area << endl;
	}
};

int main()
{
	square MySquare;
	MySquare.input();
	MySquare.calculate();
	MySquare.print();
	return 0;
}
