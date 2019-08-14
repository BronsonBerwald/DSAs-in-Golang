#include <iostream>

using namespace std;

int thirdSmallest (int array_int[], const int size)
{
	int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if(array_int[i] < min1)
		{
			min3 = min2;
			min2 = min1;
			min1 = array_int[i];
		}	

		else if(array_int[i] < min2)
		{
			min3 = min2;
			min2 = array_int[i];
		}	
		else if(array_int[i] < min3)
		{
			min3 = array_int[i];
		}	
	}
	return min3;
}

int main()
{
	
	int result = 0;
	const int ARRAY_SIZE = 15;
	int array_int[ARRAY_SIZE];

	cout<<"Below are the array contents: "<<endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		array_int[i] =  rand()%100;
		cout << array_int[i] << endl;
	}
	
	if(ARRAY_SIZE < 3)
	{
		cout<<"Minimum size of the array should be 3 to find the third smallest!!!"<<endl;
		return 0;
	}

	
	result = thirdSmallest(array_int, ARRAY_SIZE);
	cout<<"The 3rd smallest element in the array is: "<<result<<endl;
	system("PAUSE");
	return 0;
}