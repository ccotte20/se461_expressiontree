// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Mod_Node.h"

Mod_Node::Mod_Node()
{
    
}

Mod_Node::~Mod_Node()
{
    
}

void Mod_Node::accept(Expr_Node_Visitor &v)
{
	v.visitModNode(*this);
}

int Mod_Node::priority()
{
	return 2;
}