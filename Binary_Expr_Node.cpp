// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Binary_Expr_Node.h"


Binary_Expr_Node::Binary_Expr_Node()
:right_(nullptr),left_(nullptr)
{
    
}

Binary_Expr_Node::~Binary_Expr_Node()
{	
	delete this->left_;
	delete this->right_;
}


Expr_Node & Binary_Expr_Node::getLeftChild()
{
	return * this->left_;
}

Expr_Node & Binary_Expr_Node::getRightChild()
{
	return * this->right_;
}

Expr_Node & Binary_Expr_Node::setLeftChild(Expr_Node * node)
{
	this->left_ = node;
}

Expr_Node & Binary_Expr_Node::setRightChild(Expr_Node * node)
{
	this->right_ = node;
}