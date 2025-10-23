#include <iostream>
#include "func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int n;
	cin >> n;
	auto facts = factorials(n);

	cout << "‘акториалы от 1 до " << n << endl;
	copy(facts.begin(), facts.end(), ostream_iterator<unsigned long long>(cout, " "));

	vector<int> arr;
	int size;
	int elem;

	cout << "¬ведите размер массива: ";
	cin >> size;
	int i = 0;
	while (i < n)
	{
		cout << "¬ведите" <<  i+1 << "-ый: ";
		cin >> elem;
		arr.push_back(elem);
	}
	vector<int> res = unique_preserve(arr);
	cout << "—писок без дубликатов" << endl;
	copy(res.begin(), res.end(), ostream_iterator<unsigned long long>(cout, " "));
}

