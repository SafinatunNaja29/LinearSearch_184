#include <iostream>
using namespace std;


int arr[20];	// Array to be searched
int n;			// Number of element in array
int i;			// Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//Accept array elements
	cout << "\n-------------------\n";
	cout << " Enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparison;		// Number of comparison

	do
	{
		// Accept the number to be search
		cout << "\nEnter the element you want to search : ";	// langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)
		{														// langkah 2,3 dan 4
			comparison++;
			if (arr[i] == item)									// langkah 5a found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break; 
			}
		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
			cout << "\nNumber of comparison : " << comparison << endl;

			cout << "\nContiue search (y/n): ";
			cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));

}

int main()
{

}