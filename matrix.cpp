/* STUDENT NAME : NİSANUR BAŞTOR
* STUDENT NUMBER: B201202044
* COURSE NAME : PROBLEM SOLVING IN SOFTWARE ENGINEERING 2021-2022
*/

#include<iostream>
#include <iomanip>

using namespace std;

int main() {
	int const n = 5;
	int const m = 10;

	cout << "---------INPUT MATRIX---------" << endl;
	int input[m][m] =
	{
		{3,2,5,1,4,5,7,8,1,0},
		{6,2,1,0,7,4,1,0,3,1},
		{3,0,0,2,0,1,5,2,0,0},
		{1,1,3,2,2,4,3,3,3,1},
		{0,3,1,0,0,4,6,1,1,2},
		{7,1,2,2,1,0,3,3,4,7},
		{4,3,6,0,3,9,9,8,8,1},
		{5,3,1,2,7,6,1,5,3,1},
		{0,3,1,0,0,4,6,1,1,2},
		{3,0,1,2,0,1,4,2,1,5},
	};
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < m; j++) {
			cout << setw(5) << input[i][j] << '\t';

		}
		cout << endl;
	}
	cout << endl;

	unsigned int length;
	unsigned int core[n][n];

	cout << "Enter core length: ";
	cin >> length;

	if (length >= 2 && length <= 5) {
		for (int i = 0; i < length; i++) {

			for (int j = 0; j < length; j++) {
				cout << "core" << "[" << i << "]" << "[" << j << "] =";
				cin >> core[i][j];
			}

		}
		cout << endl;

		cout << "---------CORE MATRIX---------" << endl;

		for (int i = 0; i < length; i++) {

			for (int j = 0; j < length; j++) {
				cout << setw(5) << core[i][j] << '\t';

			}
			cout << endl;
		}

		cout << endl;

		int sum = 0;
		int outputSize = (m - length) + 1;
		int output[100][100];


		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				for (int x = 0; x < length; x++) {
					for (int y = 0; y < length; y++) {
						sum += input[x + i][y + j] * core[x][y];
					}
				}
				output[i][j] = sum;
				sum = 0;
			}
		}

		cout << endl;
		cout << "---------OUTPUT MATRIX---------" << endl;

		for (int i = 0; i < outputSize; i++) {
			for (int j = 0; j < outputSize; j++) {
				cout << setw(5) << output[i][j] << '\t';
			}
			cout << endl;
		}
	}
	else
		cout << "Please enter the length between 2 and 5." << endl;


	return 0;

}


