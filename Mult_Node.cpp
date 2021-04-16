// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Mult_Node.h"

Mult_Node::Mult_Node()
{
    
}

Mult_Node::~Mult_Node()
{
    
}

void Mult_Node::accept(Expr_Node_Visitor &v)
{
	v.visitMultNode(*this);
}

int Mult_Node::priority()
{
	return 2;
}