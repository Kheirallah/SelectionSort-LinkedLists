//Kheirallah Ashkar Programming Assignment #5

//Header files
#include <iostream>
#include <fstream>

//Amount of numbers being read in
const int size = 20;

using namespace std;

//Linked list datatype
struct nodeType
{
	int info;
	nodeType *link;
};


nodeType *head;

//User-Made header file
#include "Program 5.h"

//Function prototypes
void readIn(ifstream &inFile, nodeType *&first);
void print(nodeType *first);
void sort(nodeType *&first);

//Main Function
int main()
{
	//Input file statements
	ifstream inFile;
	inFile.open("input.txt");

	//Function Calls
	readIn(inFile, head);

	cout << "The list before sorting: " << endl;
	print(head);
	
	sort(head);

	cout << "The list after selection sort: " << endl;
	print(head);

	//Closing Statements
	inFile.close();
	system("pause");
	return 0;
}