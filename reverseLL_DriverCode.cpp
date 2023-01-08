#include <iostream>
#include <climits>
#include "reverseLL_Recursive.cpp"

using namespace std;


int main(){


	Node* head = InsertValues();
	PrintValues(head);

	Node* Reverse = reverseLL(head);
	PrintValues(Reverse);
}
