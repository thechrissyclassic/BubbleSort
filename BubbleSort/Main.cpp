#include "bubbleSort.h"
#include <iostream>
#include <ctime>
#include <algorithm>
#include <chrono>

using namespace std;

int main()
{
	int nums[100000];
	clock_t start, end;

	for (int i = 0; i < 100000; i++) //lines 14-17 is putting the desired number into the array.
		//this amount can be changed at any time.
	{
		nums[i] == rand() % 100000;

	}
	int n = sizeof(nums) / sizeof(nums[0]); // this allows us to calcuate the size of the array

	bubbleSort b; // created a bubble sort and named it "b"
	b.printArray(nums, n); // calling this from the cpp file

	start = clock(); //It will start the timing rigt at this second
	b.Sort(nums, n); //sorting the array
	end = clock(); //this will note the end

	b.printArray(nums, n);

	cout << "bubblesort time (MS)" << (end - start) << endl; //this is the amount of time it took for the program to run.

	return 0;
}