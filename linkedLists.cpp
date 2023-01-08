#include <iostream>
#include <cstring>

using namespace std;

class Node{

	public: 
	
	Node* next;
	int data;

	Node(int data){


		this -> data = data;
		next = NULL;
	}
};

Node* InsertValues(){

	Node* head = NULL;
	Node* tail = NULL;
	int data;
	cin >> data;

	while(data != -1){


		Node* newNode = new Node(data);
		
		if(!head){


			head = newNode;
			tail = newNode;
		}
		else{


			tail -> next = newNode;
			tail = tail -> next;
		}

		cin >> data;
	}

	return head;
}

Node* InsertNode(Node* head, int data, int index){


		Node* temp = head;
		Node* newNode = new Node(data);

		int counter = 0;

		if(counter == index){

			newNode -> next = head;
			head = newNode;
			
			return head;
		}

		while(temp && counter < index - 1){


			temp = temp -> next;
			counter++;
		}

		if(temp){

			newNode -> next = temp -> next;
			temp -> next = newNode;

			temp = temp -> next;
		}

		return head;
}

Node* DeleteNode(Node* head, int to_delete){


	Node* temp = head;
	int counter = 0;

	if(counter == to_delete){

		
		Node* temp = head;
		head = head -> next;

		delete temp;
		return head;
	}

	while(temp && counter < to_delete - 1){


		temp = temp -> next;
		counter++;
	}

	if(temp){


		Node* to_delete = temp -> next;
		Node* to_retain = temp -> next -> next;

		temp -> next = to_retain;
		temp = temp -> next;
		delete to_delete;
	}

	return head;
}

void PrintValues(Node* head){


	Node* temp = head;

	while(temp){


		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;
	
}