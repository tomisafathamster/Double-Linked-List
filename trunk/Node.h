/*
 * Node.h
 *
 *  Created on: 12 Feb 2011
 *      Author: tom
 */
#pragma once

class Node {
public:
	Node();
	~Node();

private:
	int data ;
	Node* next ;
	Node* previous ;

	friend class dllist ;
};


