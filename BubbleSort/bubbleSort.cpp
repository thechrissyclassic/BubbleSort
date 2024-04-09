#include "bubbleSort.h"
#include <iostream>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort::Sort(int arr[], int n)
{
	int i, j; //created the two loops
	for (i = 0; i < n - 1; i++) //this is the first loop. It will go through the first element, to the second to last
	{
		for (j = 0; j < n - i - 1; j++) //this is the second loop. Its role is to compare all of the elements to find the least. 
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]); //this line is calling the swap method from line 4
			}
		}
	}
}

void bubbleSort::printArray(int arr[], int size) //The main file will be calling this once it is all set
{
	int i;
	for (i = 0; i < size; i++)
	{
		std::cout << "arr = " << arr[i] << "and i + " << i << std::endl; //used std because we didn't inlcude using namespace. Can do it both ways
	}
}