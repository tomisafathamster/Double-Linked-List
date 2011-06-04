/*
 * dllist.h
 *
 *  Created on: 12 Feb 2011
 *      Author: tom
 */

#pragma once
#include "Node.h"

class dllist {
public:
	dllist();
	~dllist();

	void insertAtHead( const int value ) ;
	void insertBefore( const int valueInList, const int value ) ;
	void insertAfter( const int valueInList, const int value ) ;
	void insertAtRear( const int value ) ;
	void remove( const int value ) ;
	bool isIn( const int value ) ;
	int getHead() ;
	void printList() ;
	bool isEmpty() ;

private:

	Node* head ;
};


