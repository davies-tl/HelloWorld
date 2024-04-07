#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Type a number and hit enter to see what happens!" << endl;

	int numFace;
	cin >> numFace;

	cout << endl;
	cout << "Hello World!" << endl;
	cout << endl;
	cout << " " << numFace << numFace << setw(6) << " " << numFace << numFace << endl;
	cout << " " << numFace << numFace << setw(6) << " " << numFace << numFace << endl;
	cout << setw(5) << " " << numFace << numFace << endl;
	cout << numFace << setw(10) << " " << numFace << endl;
	cout << " " << numFace << numFace << setw(6) << " " << numFace << numFace << endl;
	cout << setw(3) << " " << numFace << numFace << numFace << numFace << numFace << numFace << endl;
	cout << endl;
	cout << "Thank you for testing!" << endl;
	cout << "Press enter to exit." << endl;
	getchar();
	getchar();

	return 0;
}