//============================================================================
// Name        : double-linked-list.cpp
// Author      : Tom Geary
// Version     :
// Copyright   : Toms work for Algorithmics
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "dllist.h"
#include "Node.h"

using namespace std;

int main()
{
	dllist l ;
	l.insertAtHead(1) ;
	l.insertAtHead(2) ;
	l.insertAtHead(3) ;
	l.insertAtHead(4) ;
	l.insertAtHead(5) ;
	l.insertAtHead(6);
	l.insertAtHead(7) ;
	l.insertAtHead(8) ;
	l.insertAtHead(9) ;
	l.insertAtHead(10);
	l.insertAtHead(11) ;
	l.insertAfter( 3, 298 ) ;
	l.insertBefore( 8, 812) ;

	l.printList() ;

}
