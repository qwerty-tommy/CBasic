#include "avl_Tree.h"

int getMax(int a, int b)
{
	if (a > b) return a;
	return b;
}

int getHeight(Node* node)
{
	if (node == NULL) return 0;
	return node->height;
}

void setHeight(Node* node)
{
	node->height = getMax(getHeight(node->leftChild), getHeight(node->rightChild) + 1);
}

int getDifference(Node* node)
{
	if (node == NULL) return 0;
	Node* leftChild = node->leftChild;
	Node* rightChild= node->rightChild;
	return getHeight(leftChild) - getHeight(rightChild);
}

Node* rotateLL(Node* node)
{
	//puts("LL");
	Node* leftChild = node->leftChild;
	node->leftChild = leftChild->rightChild;
	leftChild->rightChild = node;
	setHeight(node);
	return leftChild;
}

Node* rotateRR(Node* node)
{
	//puts("RR");
	Node* rightChild = node->rightChild;
	node->rightChild = rightChild->leftChild;
	rightChild->leftChild= node;
	setHeight(node);
	return rightChild;
}

Node* rotateLR(Node* node)
{
	//puts("LR");
	Node* leftChild = node->leftChild;
	node->leftChild = rotateRR(leftChild);
	return rotateLL(node);
}

Node* rotateRL(Node* node)
{
	//puts("RL");
	Node* rightChild = node->rightChild;
	node->rightChild = rotateLL(rightChild);
	return rotateRR(node);
}

Node* balance(Node* node)
{
	int difference = getDifference(node);
	if (difference >= 2) {
		if (getDifference(node->leftChild) >= 1) {
			node = rotateLL(node);
		}
		else {
			node = rotateLR(node);
		}
	}
	else if (difference <= -2) {
		if (getDifference(node->rightChild) <= -1) {
			node = rotateRR(node);
		}
		else{
			node = rotateRL(node);
		}
	}
	setHeight(node);
	return node;
}

//Change this!
int compare(element a, element b) {
	return a.age - b.age;
}

Node* insertNode(Node* node, element data)
{
	if (!node) {
		node = (Node*)malloc(sizeof(Node));
		node->data = data;
		node->height = 1;
		node->leftChild = node->rightChild = NULL;
	}

	else if (compare(data, node->data) < 0) {
		node->leftChild = insertNode(node->leftChild, data);
		node = balance(node);
	}

	else if (compare(data, node->data) > 0) {
		node->rightChild = insertNode(node->rightChild, data);
		node = balance(node);
	}

	else {
		printf("������ �ߺ� �߻�");
	}
	return node;
}

