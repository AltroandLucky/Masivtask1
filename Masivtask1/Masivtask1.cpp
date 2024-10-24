#include <iostream>
#include <random>

using namespace std;

int main()
{
	
	int min = 10;
	int max = 99;

	srand(time(0)); 

	
	int arr[20];

	
	for (int i = 0; i < 20; i++) 
	{
		arr[i] = min + rand() % (max - min + 1); 

	}

	for (int i = 0; i < 20; i++)
	{
		if (arr[i] % 2 == 0) 
		{
			cout << arr[i] << ", ";
		}
	}

}