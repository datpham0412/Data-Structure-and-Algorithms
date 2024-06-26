// Time Complexity: O(n)
// Space complexity: O(1)

#include <iostream> 

using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node() : data(data), next(nullptr) {};
	Node (int data) {
		this -> data = data;
		this -> next = nullptr;
	}
	~Node(){
		Node *current = this;
		while (current != nullptr){
			Node* temp = current;
			current = current -> next;
			delete temp;
		}
	}
};

int countLengthIterative(Node *head){
	int count = 0;
	while (head != nullptr){
		count++;
		head = head -> next;
	}
	return count;
}

int countLengthRecursive(Node *head){
    if (head == nullptr){
        return 0;
    }else{
        return 1 + countLengthRecursive(head->next);
    }
}

void printList(Node *head){
	while(head != nullptr){
		cout << head -> data << " -> ";
		head = head -> next;
	}	
}

int main(){
	Node *head = nullptr;
	head = new Node(1);
	head -> next = new Node(2);
	head -> next -> next = new Node(3);
	head -> next -> next -> next = new Node(4);

	printList(head);
	cout << endl << "The length of the linked list is: "<< countLengthRecursive(head);
	return 0;
}