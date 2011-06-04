/*
 * dllist.cpp
 *
 *  Created on: 12 Feb 2011
 *      Author: tom
 */
#include <cstdlib>
#include "dllist.h"
#include "Node.h"
#include <iostream>

using namespace std ;

dllist::dllist()
{
	head = NULL ;
}

dllist::~dllist()
{
	Node* p = head ;
	for ( ; p != NULL ; p = p->previous )
	{
		delete p ;
	}
}


void dllist::insertAtHead( const int value )
{
	Node* p = new Node ;
	p->data = value ;
	p->next = NULL ;

	if ( head != NULL )
	{
		head->next = p ;
	}

	p->previous = head ;
	head = p ;
}


void dllist::insertBefore( const int valueInList, const int value )
{
	Node* p = new Node ;
	Node* before = head ;
	Node* after = NULL ;

	for ( ; before != NULL ; before = before->previous )
	{
		if ( ! isEmpty() )
		{
			if ( before->data == valueInList )
			{
				after = before->previous ;
				before->previous = p ;
				p->next = before ;
				after->next = p ;
				p->previous = after ;
				p->data = value ;
				break ;
			}
		} else
		{
			exit( 1 ) ;
		}
	}

}


void dllist::insertAfter( const int valueInList, const int value )
{
	Node* p = new Node ;
	Node* before = head ;
	Node* after = NULL ;

	if ( ! isEmpty() )
	{
		for ( ; before != NULL ; before = before->previous )
		{
			if ( before->data == valueInList )
			{
				after = before->next ;
				before->next = p ;
				p->previous = before ;
				p->next = after ;
				p->data = value ;
				after->previous = p ;
				break ;
			}
		}
	}
}


void dllist::printList()
{
	if ( ! isEmpty() )
	{
		Node* p = NULL ;

		for ( p = head ; p != NULL ; p = p->previous )
		{
			cout << p->data << endl ;
		}
	}
	else
	{
		cout << "list empty" << endl ;
	}
}


bool dllist::isEmpty()
{
	return head == NULL ;
}


void dllist::remove( const int value )
{
	Node* pCurrent = NULL ;
	Node* pPrevious = NULL ;
	Node* tmp = NULL ;

	pCurrent = head ;

	for ( ; pCurrent != NULL ; pPrevious = pCurrent, pCurrent = pCurrent->previous )
	{
		if ( pCurrent->data == value )
		{
			if ( pCurrent->previous == NULL )
			{
				pPrevious->previous = NULL ;
				delete pCurrent ;
				exit(0) ;
			}
			else
			{
				tmp = pCurrent->previous ;
				tmp->next = pPrevious ;
				pPrevious->previous = tmp ;
			}
		}
	}
}




//	void insertAtRear( const int value ) ;
//	bool isIn( const int value ) ;
//	int getHead() ;


