#include<iostream>
#include<queue>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int>* createTree(){
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(20);
	BinaryTreeNode<int>* node3 = new BinaryTreeNode<int>(30);
	BinaryTreeNode<int>* node4 = new BinaryTreeNode<int>(40);
	BinaryTreeNode<int>* node5 = new BinaryTreeNode<int>(50);

	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node3->right = node5;
	return node1; // root
}

BinaryTreeNode<int>* takeInput(){

	BinaryTreeNode<int>* root = NULL;
	int rootData;
	//cout << "Enter root " << endl;
	cin >> rootData;
	if(rootData == -1){
		return root;
	}
	root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftTreeRoot = takeInput();
	root->left = leftTreeRoot;
	BinaryTreeNode<int>* rightTreeRoot = takeInput();
	root->right = rightTreeRoot;
	// root->right = takeInput();
	return root;
}

void print(BinaryTreeNode<int>* root){

	if(root == NULL){
		return;
	}
	cout << root->data << ": ";
	if(root->left != NULL){
		cout << "l: " << root->left->data <<", "; 
	}else{
		cout << "l: -1, "; 
	}
	if(root->right != NULL){
		cout << "R: " << root->right->data <<endl; 
	}else{
		cout << "R: -1" << endl; 
	}
	print(root->left);
	print(root->right);
}

// Count all nodes in the tree
int count(BinaryTreeNode<int>* root){

	if(root == NULL){
		return 0;
	}
	int leftCount = count(root->left);
	int rightCount = count(root->right);
	return leftCount + rightCount + 1  ;
}
/*
	int count(BinaryTreeNode<int>* root){
		return root == NULL ? 0 : count(root->left) + count(root>right) + 1;
	}

*/

BinaryTreeNode<int>* maxDataNode(BinaryTreeNode<int>* root) {
	if(root == NULL){
		return NULL;
	}

	BinaryTreeNode<int>* max = root;

	BinaryTreeNode<int>* leftMax =  maxDataNode(root->left);
	BinaryTreeNode<int>* rightMax =  maxDataNode(root->right);
	
	if(leftMax != NULL && leftMax->data > max->data){	
			max = leftMax;
	}
	if(rightMax != NULL && rightMax->data > max->data){
		max = rightMax;
	}
	return max;
}

BinaryTreeNode<int>* takeInputLevelWise(){

	BinaryTreeNode<int>* root;
	int rootData;
	cout << "Enter root " << endl;
	cin >> rootData;
	if(rootData == -1){
		return NULL;
	}
	root = new BinaryTreeNode<int>(rootData);
	// All node whose children are to be taken input, will be in this queue
	queue<BinaryTreeNode<int>* > pendingNodes;
	pendingNodes.push(root);
	while(! pendingNodes.empty()){
		BinaryTreeNode<int>* currentNode = pendingNodes.front();
		pendingNodes.pop();
		int leftChildData;
		cout << "Enter left child of " << currentNode->data << " " << endl;
		cin >> leftChildData;
		if(leftChildData != -1){
			BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
			currentNode->left = leftChild;
			pendingNodes.push(leftChild);
		}

		int rightChildData;
		cout << "Enter right child of " << currentNode->data << " " << endl;
		cin >> rightChildData;
		if(rightChildData != -1){
			BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChildData);
			currentNode->right = rightChild;
			pendingNodes.push(rightChild);
		}	
	}
	return root;	
}


// 10 20 40 -1 60 -1 -1 -1 30 -1 50 70 -1 -1 -1
int main(){
	BinaryTreeNode<int>* root = takeInputLevelWise();
	//cout << count(root) << endl;
	print(root);
/*	BinaryTreeNode<int>* root = createTree();
	cout << root->data << " L:  " << root->left->data <<  " " << " R: " << root->right->data << endl ;	
*/
	/*	BinaryTreeNode<int> node(10);
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(20);

	cout << node.data << endl;
	cout << node1->data << endl; 
*/

}

