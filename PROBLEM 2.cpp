#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int num, size, value, integer, result;
	int numbers[1000];
	
	cout << "Please enter the Array Size:";
	cin >> size;	
	cout << "Enter the Integers you want:";
	
	for (integer = 0; integer < size; integer++)
	{
		cin >> numbers[integer];
	}
	
	cout << "Your Data is:\n";
	for (integer = 0; integer < size; integer++)
	{
		cout << numbers[integer] << endl;
	}
	
	
	for (integer = 0; integer < size; integer++)
	{
		for(num = integer + 1; num < size; num++)
		{
			if(numbers[integer] > numbers[num])
			{
				value = numbers[integer];
				numbers[integer] = numbers[num];
				numbers[num] = value;
			}
		}
	}
	

	
	cout << "After Using the Selection Sorting ... \n";
	cout << "Your Sorted Data is:";
	
	for(integer = 0; integer < size; integer++)
	{
		cout << numbers[integer] << ' ';
	}
	
	cout << "Thank you! <3" << endl;
	
	
	_getch();
	return 0;
}
