// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Par_Node.h"

Par_Node::Par_Node(int n)
{
    
}

Par_Node::~Par_Node()
{
    
}

void Par_Node::accept(Expr_Node_Visitor &v)
{
	v.visitParNode(*this);
}

int Par_Node::priority()
{
	return 0;
}