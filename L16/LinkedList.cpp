#include<iostream>
using namespace std;
#include "Node.h"

Node* createList(){
	Node* n1 = new Node(10);
	Node* n2 = new Node(20);
	Node* n3 = new Node(30);
	Node* n4 = new Node(40);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	return n1;
/*	Node n1(10);
	Node n2(20);
	Node n3(30);

	n1.next = &n2;
	n2.next = &n3;
	
	cout <<"&n1 " << &n1 << " " <<  n1.data << " " << n1.next << endl;
	cout <<"&n2 " << &n2 << " " << n2.data << " " << n2.next << endl;
	cout <<"&n3 " << &n3 << " " <<  n3.data << " " << n3.next << endl;

	Node* head = &n1;
	return head;
	*/
}

void print(Node* head){

	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	/*while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
	*/
	//cout << head->data << endl;
	//cout << head->next->data << endl;
	//cout << head->next->next->data << endl;
}

void demo(Node* head){


	Node* temp; // this will only create pointer and that too with garbage address
	temp = new Node(1);
	temp->data = 10;
	head = new Node(10);
	//head->data = 60;
	//Runtime error -  head->next->next;
	//head = head->next;
	//head->next = head;
}

Node* insertNode(Node *head, int pos, int data) {

	// This is the node to be inserted
	Node* newNode = new Node(data);

	if(pos == 0){
		newNode->next = head;
		// Bakwas
		//head = newNode;
		return newNode;
	}else{		
		int i = 0;
		Node* prev = head;
		while(prev!= NULL && i < pos - 1){
			prev = prev->next;
			i++;
		}
		// prev will point to Node at pos - 1
		if(prev != NULL){
			newNode->next = prev->next;
			prev->next = newNode;
		}
		return head;
	}
}

Node* deleteNode(Node* head, int i){

	if(i == 0){
		Node* newHead = head->next;	
		delete head;
		return newHead;
	}else{
			int pos = 0;
		Node* prev = head;
		while(prev!= NULL && pos < i - 1){
			prev = prev->next;
			pos++;
		}
		// prev will point to Node at pos - 1
		if(prev != NULL && prev->next != NULL){
			Node* nodeToBeDeleted = prev->next;
			prev->next = prev->next->next; // nodeToBeDeleted->next
			delete nodeToBeDeleted;
		}	
		return head;
	}

}

Node* insertRec(Node* head, int i, int data){

	if(i == 0){
		Node* nodeToBeInserted = new Node(data);
		nodeToBeInserted->next = head;
		return nodeToBeInserted;
	}
	// List length is smaller than i
	if(head == NULL){
		return NULL;
	}
	Node* smallerListHead = insertRec(head->next, i - 1, data);
	head->next = smallerListHead;
	return head;
}


void increment(Node* head){
	//head = new Node(1);
	while(head != NULL){
		head->data++;
		head = head->next;
	}
}

Node* takeInput(){

	Node* head = NULL, * tail = NULL;
	int data;
	cin >> data;
	while(data != -1){
		Node* newNode = new Node(data);
		if(head == NULL){
			// If its first node 
			head = newNode;
			tail = newNode;
		}else{
			/*	Node* lastNode = head;
				while(lastNode->next != NULL){
					lastNode = lastNode->next;
				}
				lastNode->next = newNode;
			*/
			tail->next = newNode;
			tail = newNode; // tail = tail->next;
		}
		cin >> data;
	}
	return head;
}


Node* mergeTwoLLs(Node* head1, Node* head2){

	// Head will point to first Node of sorted List
	// Tail will point to last Node of sorted list
	Node* head = NULL, *tail = NULL;
	Node* t1 = head1, *t2 = head2;

	if(t1->data <= t2->data){
		head = t1;
		tail = t1;
		t1 = t1->next;
	}else{
		head = t2;
		tail = t2;
		t2 = t2->next;
	}
	while(t1 != NULL && t2!= NULL){
		if(t1->data <= t2->data){
			tail->next = t1;
			tail = t1; // tail = tail->next
			t1 = t1->next;
		}else{
			tail->next = t2;
			tail = t2;
			t2 = t2->next;
		}
	}

if(t1 != NULL){
	tail->next = t1;
}else{
	tail->next = t2;
}
	return head;
}

Node* midpoint(Node* head){

	if(head == NULL){
		return NULL;
	}
	Node* slow = head, *fast = head;
	while(fast->next != NULL &&  fast->next->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node* mergeSort(Node* head){

	if(head == NULL || head->next == NULL){
		return head;
	}

	Node* part1Head = head;

	// Split List in 2 parts
	// Sort each part recursively
	part1Head = mergeSort(part1Head);


	// Merge

}


int main(){
	Node* head = 	takeInput(); //createList();
	head = mergeSort(head);
	print(head);
	//increment(head);
	//head = insertNode(head,0, 80); 
	//print(head);
	//demo(head);
	//print(head);
	//print(head->next);


/*
	Node n1(10);
	cout << n1.data << " " << n1.next << endl;
	Node* n2 = new Node(20);
	cout << n2->data << " " << n2->next << endl;
*/

}

