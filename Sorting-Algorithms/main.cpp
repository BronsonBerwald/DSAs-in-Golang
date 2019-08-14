#include <iostream>

#include "ArrayList.h"
#include <time.h>
#include <chrono>


using namespace std;

/*
* Program to test the ArrayList class.
*/

void initialize__array(ArrayList& array_list1, ArrayList& array_list2, int size)
{
	for (int i = 0; i<size; i++)
	{
		int number = rand()%100;
		array_list1.add(number);
		array_list2.add(number);
	}	
}

void GetTimeElapsed(ArrayList& array_list1, ArrayList& array_list2, int size)
{
	cout<<"**********************   LIST LENGTH : "<<size<<"   **************************\n"<<endl;
	/*cout << "Original list of numbers:" << endl;
    array_list1.display();
	array_list2.display();*/

	{
		auto start = chrono::steady_clock::now();
		array_list2.quicksort();
		auto end = chrono::steady_clock::now();
		chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
		cout << "Quick Sort duration for List Length "<< size <<" is: " << timeElapsed.count() << " seconds" << endl;
	}

	{
		auto start = chrono::steady_clock::now();
		array_list1.bubbleSort();
		auto end = chrono::steady_clock::now();
		chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
		cout << "Bubble Sort duration for List Length " << size << " is: " << timeElapsed.count() << " seconds" << endl;
	}

	cout << endl << endl;
}

int main()
{
	srand((unsigned)time(0));

	//creating a list of integers
	ArrayList arrayListBubble100(100), arrayListBubble500(500), arrayListBubble800(800), arrayListBubble1000(1000), arrayListBubble1200(1200), 
	arrayListBubble1500(1500), arrayListBubble1700(1700), arrayListBubble2000(2000), arrayListBubble2500(2500), arrayListBubble3000(3000), arrayListBubble5000(5000) , arrayListBubble20000(20000);


	ArrayList arrayListQuick100(100), arrayListQuick500(500), arrayListQuick800(800), arrayListQuick1000(1000), arrayListQuick1200(1200),
	arrayListQuick1500(1500), arrayListQuick1700(1700), arrayListQuick2000(2000), arrayListQuick2500(2500), arrayListQuick3000(3000), arrayListQuick5000(5000), arrayListQuick20000(20000);

    //filling the list with random integers
    initialize__array(arrayListBubble100, arrayListQuick100, 100);
	initialize__array(arrayListBubble500, arrayListQuick500, 500);
	initialize__array(arrayListBubble800, arrayListQuick800, 800);
    initialize__array(arrayListBubble1000, arrayListQuick1000, 1000);
	initialize__array(arrayListBubble1200, arrayListQuick1200, 1200);
	initialize__array(arrayListBubble1500, arrayListQuick1500, 1500);
    initialize__array(arrayListBubble1700, arrayListQuick1700, 1700);
	initialize__array(arrayListBubble2000, arrayListQuick2000, 2000);
	initialize__array(arrayListBubble2500, arrayListQuick2500, 2500);
	initialize__array(arrayListBubble3000, arrayListQuick3000, 3000);
	initialize__array(arrayListBubble5000, arrayListQuick5000, 5000);
	initialize__array(arrayListBubble20000, arrayListQuick20000, 20000);

	GetTimeElapsed(arrayListBubble100, arrayListQuick100, 100);
	GetTimeElapsed(arrayListBubble500, arrayListQuick500, 500);
	GetTimeElapsed(arrayListBubble800, arrayListQuick800, 800);
    GetTimeElapsed(arrayListBubble1000, arrayListQuick1000, 1000);
	GetTimeElapsed(arrayListBubble1200, arrayListQuick1200, 1200);
	GetTimeElapsed(arrayListBubble1500, arrayListQuick1500, 1500);
    GetTimeElapsed(arrayListBubble1700, arrayListQuick1700, 1700);
	GetTimeElapsed(arrayListBubble2000, arrayListQuick2000, 2000);
	GetTimeElapsed(arrayListBubble2500, arrayListQuick2500, 2500);
	GetTimeElapsed(arrayListBubble3000, arrayListQuick3000, 3000);
	GetTimeElapsed(arrayListBubble5000, arrayListQuick5000, 5000);
	GetTimeElapsed(arrayListBubble20000, arrayListQuick20000, 20000);

	system("PAUSE");
	return 0;
}

