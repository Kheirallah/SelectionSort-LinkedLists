//Function to readin data from the input file
//Since we are given a set number of numbers to readin I used a for loop instead of an end-of-file loop

void readIn(ifstream &inFile, nodeType *&first)
{

	//Variable declarations
	first = NULL;
	nodeType *current = NULL;
	nodeType *newNode;

//Reads in data to the linked list
for (int  i = 0; i < size; i++)
{
		if (first == NULL)
		{
			newNode = new nodeType;
			inFile >> newNode->info;
			newNode->link = NULL;
			first = newNode;
			current = first;
		}
		else
		{
			newNode = new nodeType;
			inFile >> newNode->info;
			newNode->link = NULL;
			current->link = newNode;
			current = newNode;
		}
	}

}

//Prints the linked list
void print(nodeType *first)
{
	nodeType *current = first;
	
	while (current != NULL)
	{
		cout << current->info << " ";
		current = current->link;
	}
	cout << endl;
}


//Finds the minimum value of the list and then swaps this value with the first value in the linked list (Selective sorting)
void sort(nodeType *&first)
{

//Variable declarations
nodeType *h = first;
nodeType *current = h;
nodeType *currentTwo;
nodeType *min;

//Loop that continues to find the min and swap this minimum value with first value in the list
while (current->link != NULL)
    {
		//Finds the minimum value
        min = current;
		currentTwo = current->link;
		while (currentTwo != NULL)
        {
            if(currentTwo->info < min->info)
                min=currentTwo;
			currentTwo = currentTwo->link;
        }

        //Swaps the values of min and current
            int temp;
            temp = min->info;
            min->info = current->info;
            current->info = temp;
        
		current = current -> link;
    }

    first = h;
}
