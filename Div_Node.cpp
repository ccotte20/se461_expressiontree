// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Div_Node.h"

Div_Node::Div_Node()
{
    
}

Div_Node::~Div_Node()
{
    
}

void Div_Node::accept(Expr_Node_Visitor &v)
{
	v.visitDivNode(*this);
}

int Div_Node::priority()
{
	return 2;
}