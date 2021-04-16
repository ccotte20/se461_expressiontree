// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Sub_Node.h"

Sub_Node::Sub_Node()
{
    
}

Sub_Node::~Sub_Node()
{
    
}

void Sub_Node::accept(Expr_Node_Visitor &v)
{
	v.visitSubNode(*this);
}

int Sub_Node::priority()
{
	return 1;
}