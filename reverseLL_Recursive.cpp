#include <iostream>
#include <climits>
#include "linkedLists.cpp"

using namespace std;



// Method 1: Time Complexity: O(n^2)
/* Node* reverseLL(Node* head){


	if(head == NULL || head -> next == NULL){


		return head;
	}

	Node* smallAns = reverseLL(head -> next);
	
	Node* tail = smallAns;

	while(tail -> next != NULL){


		tail = tail -> next;
	}

	tail -> next = head;
	head -> next = NULL;
	tail = tail -> next;

	return smallAns;
}*/



// Method 2: Time Complexity: O(n)
/*
class Pair{


	public:

	Node* head;
	Node* tail;

	Pair(){

		head = NULL;
		tail = NULL;
	}
};

Pair reverseLL_LessTime(Node* head){


	if(!(head) || !(head -> next)){
	

		Pair to_return;
		
		to_return.head = head;
		to_return.tail = head;

		return to_return;
	}

	Pair smallAns = reverseLL_LessTime(head -> next);

	smallAns.tail -> next = head;
	head -> next = NULL;
	smallAns.tail = smallAns.tail -> next;

	return smallAns;
}


Node* reverseLL(Node* head){


	Pair to_return = reverseLL_LessTime(head);

	return to_return.head;
}
*/


// Method 3: Time Complexity: O(n)

/*
Node* reverseLL(Node* head){


	if(!(head) || !(head -> next)){


		return head;
	}

	Node* smallAns = reverseLL(head -> next);

	Node* tail = head -> next;

	tail -> next = head;
	head -> next = NULL;
	tail = tail -> next;

	return smallAns;
}
*/
