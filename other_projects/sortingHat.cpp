#include <iostream>
#include <string>
using namespace std;

void fchoice (int answer, int* gryffindor, int* hufflepuff, int* ravenclaw, int* slytherin) {
	switch(answer) {
	case 1:
	  *hufflepuff += 1;
	  break;
	case 2:
	  *slytherin += 1;
	  break;
	case 3:
	  *ravenclaw += 1;
	  break;
	case 4:
	  *gryffindor += 1;
	  break;
	default:
	  cout << "Invalid Input...";
	}
}

string fin (int g, int h, int r, int s) {
	string house;

	// Find the max:
	int max = 0;

	if (g > max) {
		max = g;
		house = "Gryffindor";
	}

	if (h > max) {
		max = h;
		house = "Hufflepuff";
	}

	if (r > max) {
		max = r;
		house = "Ravenclaw";
	}

	if (s > max) {
		max = s;
		house = "Slytherin";
	}

	return house;
}


int main () {

	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;

	int answer1, answer2, answer3, answer4;

	cout << "Sorting Hat Quiz!" << endl << endl;

	cout << "Q1: When I'm dead, I want people to remember me as: ";
	cout << endl << "1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n";
	cout << "Answer: ";
	cin >> answer1;
	fchoice(answer1, &gryffindor, &hufflepuff, &ravenclaw, &slytherin);


	cout << endl << "Q2) Dawn or Dusk?" << endl;
	cout << "1) Dawn\n2) Dusk\n";
	cout << "Answer: ";
	cin >> answer2;

	if (answer2 == 1) {
		gryffindor += 1;
		ravenclaw += 1;
	} else if (answer2 == 2) {
		hufflepuff += 1;
		slytherin += 1;
	} else {
		cout << "Invalid Input...";
	}


	cout << endl << "Q3) Which kind of instrument most pleases your ear?" << endl;
	cout << "1) The trumpet\n2) The violin\n3) The piano\n4) The drum\n";
	cout << "Answer: ";
	cin >> answer3;
	fchoice(answer3, &gryffindor, &hufflepuff, &ravenclaw, &slytherin);


	cout << "\nQ4) Which road tempts you most?" << endl;
	cout << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) "
			"The cobbled street lined (ancient buildings)\n4) The twisting, leaf-strewn path through woods" << endl;
	cout << "Answer: ";
	cin >> answer4;
	fchoice(answer4, &gryffindor, &hufflepuff, &ravenclaw, &slytherin);


	// Calculation:
	cout << "\nHufflepuff: " << hufflepuff << endl;
	cout << "Slytherin: " << slytherin << endl;
	cout << "Ravenclaw: " << ravenclaw << endl;
	cout << "Gryffindor: " << gryffindor << endl;

	string house;
	house = fin(gryffindor, hufflepuff, ravenclaw, slytherin);

	cout << endl << "Your house is " << house << "!!!" << endl;


	return 0;
}
