#include <iostream>
#include <conio.h>
#include "func.h"
#include "MyList.h"

using namespace std;

int main()
{
	unsigned int n;
	cout << "Enter n: ";
	cin >> n;
	auto facts = factorials(n);

	cout << "Factorilas from 1 to " << n << endl;
	copy(facts.begin(), facts.end(), ostream_iterator<unsigned long long>(cout, " "));
	cout << endl;

	vector<int> arr;
	int size;
	int elem;

	cout << "Enter array size: ";
	while (!(std::cin >> size) || size < 1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid number, try again: ";
	}
	
	cout << "Enter values on array: ";
	for (int i = 0; i < size; i++)
	{
		while (!(std::cin >> elem))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid number, try again: ";
		}
		arr.push_back(elem);
	}

	vector<int> res = unique_preserve(arr);
	cout << "Array with duplicates" << endl;
	copy(res.begin(), res.end(), ostream_iterator<unsigned long long>(cout, " "));
	cout << endl;
	
	cout << "Enter the number of elements in list: ";
	while (!(std::cin >> size) || size < 1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid number, try again: ";
	}

	MyList list;

	cout << "Enter " << size << " integers:\n";
	for (int i = 0; i < size; ++i)
	{
		while (!(std::cin >> elem))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid number, try again: ";
		}
		list.push_tail(elem);
	}

	list.show_list();

	list.reverse();

	cout << "List after reverse:\n";

	list.show_list();

	_getche();
	return 0;
}

