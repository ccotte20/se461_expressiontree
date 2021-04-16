// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Num_Node.h"

Num_Node::Num_Node(int n) : n_(n)
{
    
}

Num_Node::~Num_Node()
{
    
}

void Num_Node::accept(Expr_Node_Visitor &v)
{
	v.visitNumNode(*this);
}

int Num_Node::priority()
{
	return -1;
}

int Num_Node::getNum()
{
	return n_;
}

Num_Node::Num_Node() : n_(0)
{

}