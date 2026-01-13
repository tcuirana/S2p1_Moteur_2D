#include "Node.h"

int main(){
	Node<int> n;
	Node<int> n2;
	Node<int> n3;

	n.next = &n2;
	n2.next = &n3;
}