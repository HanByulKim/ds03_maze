#pragma once
#include <iostream>

class Node{
public:
	Node(){}
	Node(Node* h, int n) :header(h), num(n), next(NULL){}
	Node(Node* h, int n, Node* ne):header(h), num(n), next(ne){}

	Node* header;
	int num;
	Node* next;
};