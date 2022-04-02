#include <iostream>
using namespace std;
int linFind (int data[], int size, int key) {
	for (int i = 0; i < size; ++i)
		if (data[i] == key)
			return i;
	return -1;
}
int binFind (int data[], int size, int key) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (data[mid] < key)
			left = mid + 1;
		else
		if (key < data[mid])
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main (void) {
	int data[] = {12, 43, 56, 69, 77};
	int size = sizeof (data) / sizeof (data[0]);
	int i = linFind (data, size, /*9*/7);
	if (i == -1)
		cout << "没找到！" << endl;
	else
		cout << "data[" << i << "] = " << data[i]
			<< endl;
	i = binFind (data, size, /*69*/7);
	if (i == -1)
		cout << "没找到！" << endl;
	else
		cout << "data[" << i << "] = " << data[i]
			<< endl;
	return 0;
}
