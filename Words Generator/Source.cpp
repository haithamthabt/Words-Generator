// Purpose: To generate all the possible words that has either three letters or two letters
// Author's Name: Haitham Thab
// Creation Date: 11/24/2015
// Modification Date: 11/24/2015

#include <iostream>
#include <fstream>




using namespace std;
const int alphNum = 26;
char myArray[alphNum] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
ofstream myOutput;

// functions prototypes
void threeLetters();
void twoLetters();

int main() {

	myOutput.open("text.txt");
	char input;


	cout << "-------- Words Generator -----------" << endl << endl;
	cout << "Enter 3 for Three-letters words" << endl;
	cout << "Enter 2 for Two-letters words" << endl;
	cout << "Please enter your choice: ";
	cin >> input;

	if (input == '3') {

		threeLetters();
		cout << endl << "Your Three-letters words have been created successfully and stored in a file named text" << endl;

	} else if (input == '2') {

		twoLetters();
		cout << endl << "Your Two-letters words have been created successfully and stored in a file named text" << endl;

	} else {

		cout << "invalid choice" << endl;

	}


	myOutput.close();


	system("pause");
	return 0;
}




// Purpose of the function: To Generate words with three letters
// Author's Name: Haitham Thabt
// Creation Date: 11/24/2015
// Modification Date: 11/24/2015
void threeLetters() {

	// three letters program
	for (int i = 0; i < alphNum; i++) {

		for (int j = 0; j < alphNum; j++) {
			for (int k = 0; k < alphNum; k++) {
				myOutput << myArray[i];
				myOutput << myArray[j];
				myOutput << myArray[k] << endl;
			}
		}
	}


}




// Purpose of the function: To Generate words with two letters
// Author's Name: Haitham Thabt
// Creation Date: 11/24/2015
// Modification Date: 11/24/2015
void twoLetters() {

	// two letters program
	for (int i = 0; i < alphNum; i++) {

		for (int j = 0; j < alphNum; j++) {
			myOutput << myArray[i];
			myOutput << myArray[j] << endl;
		}
	}

}

