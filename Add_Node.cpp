// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Add_Node.h"

Add_Node::Add_Node()
{
    
}

Add_Node::~Add_Node()
{
    
}

void Add_Node::accept(Expr_Node_Visitor &v)
{
	v.visitAddNode(*this);
}

int Add_Node::priority()
{
	return 1;
}