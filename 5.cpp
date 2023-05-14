#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int start = 0, end = 0, maxLength = 1;
	int currStart = 0, currLength = 1;
	for (int i = 1; i < n; i++) {
		if (nums[i] == nums[i - 1]) {
			currLength++;
		}
		else {
			if (currLength > maxLength) {
				maxLength = currLength;
				start = currStart;
				end = i - 1;
			}
			currStart = i;
			currLength = 1;
		}
	}
	if (currLength > maxLength) {
		maxLength = currLength;
		start = currStart;
		end = n - 1;
	}

	cout << "Самый длинный непрерывный подмассив длины " << maxLength << " является: ";
	for (int i = start; i <= end; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}