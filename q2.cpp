//Name:Hamza Siddique
//Roll no:BSEF20A008
//Section:SE Afternoon
#include <iostream>
using namespace std;

int main()
{
	int i, j, height, width;
	cout << "PLEASE ENTER THE HIEGHT: ";
	cin >> height;
	cout << "PLEASE ENTER THE WIDTH: ";
	cin >> width;

	
	for (i = 1; i <= width; i++)
	{
		for (j = 1; j <= height; j++)
		{
			if ((j == 1 || j == height) && (i != 1 || i != height))
				cout << "*";
			else if (i == 1 || i == width)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}