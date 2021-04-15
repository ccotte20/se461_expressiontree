// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree()
{
	
}

Eval_Expr_Tree::~Eval_Expr_Tree()
{
	
}

void Eval_Expr_Tree::Visit_Addition_Node ( Addition_Node & node)
{
	result_ = node.getleftChild().accept(*this) + node.getrightChild().accept(*this);
}