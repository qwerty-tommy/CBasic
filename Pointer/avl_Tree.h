#pragma once
#ifndef _AVLTree
#define _AVLTree
#include <stdio.h>
#include <stdlib.h>

typedef struct  {
	char name[5];
	int age;
	char gen;
}element;

typedef struct Node{
	element data;
	int height;
	struct Node* leftChild;
	struct Node* rightChild;
} Node;

int getMax(int, int);
int getHeight(Node*);
void setHeight(Node*);
int getDifference(Node*);
Node* rotateLL(Node*);
Node* rotateRR(Node*);
Node* rotateLR(Node*);
Node* rotateRL(Node*);
Node* balance(Node*);
Node* insertNode(Node*, element);
//void display(Node*, int);
#endif