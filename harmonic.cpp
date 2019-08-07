/************************************************
*  Week 4 lesson:                               *
*  Implementing a harmonic function				*
*************************************************/

#include <iostream>

using namespace std;

/*
* Returns the factorial of n
*/
double harmonic(int n)
{
	if (n == 1)
		return 1.0;
	else
	{
		return 1/(n * 1.0) + harmonic(n - 1);
	}
}

int main()
{
	int n;

	cout << "\n\tEnter a number: ";
	cin >> n;
	cout<<endl;

	if (n > 0)
		cout << "\tH" << n<<" = " << harmonic(n) << endl;
	else
		cout << "\tInput Error!" << endl;

	cout<<"\n\t";
	system("PAUSE");
	return 0;
}