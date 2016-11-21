#pragma once
#include "node.h"

class Set{
public:
	Set(){
		head = new Node();
	};

	void union_set(Set& unirand);

private:
	Node* head;
	Node* tail;
};