// Dr. Ryan: Don't forget to include the honor pledge and digital signature in each file.
// Fixed:
// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Expr_Builder.h"


Expr_Builder::Expr_Builder() : root_(), numbers_(), operators_()
{
    
}

Expr_Builder::~Expr_Builder()
{
    
}

// Dr. Ryan: You really only need to get the root of the tree.
Expr_Node * Expr_Builder::getRoot()
{
	return this->root_;
}

void Expr_Builder::setRoot(Expr_Node * n)
{
	this->root_=n;
}

void Expr_Builder::pushNum(Expr_Node * n)
{
	this->numbers_.push(n);
}

void Expr_Builder::pushOp(Expr_Node * n)
{
	this->operators_.push(n);
}

Expr_Node* Expr_Builder::getTopOp()
{
	return this->operators_.top();
}

Expr_Node* Expr_Builder::getTopNum()
{
	return this->numbers_.top();
}

void Expr_Builder::popOp()
{
	this->operators_.pop();
}

void Expr_Builder::popNum()
{
	this->numbers_.pop();
}

bool Expr_Builder::isOpsEmpty()
{
    return this->operators_.empty();
}

bool Expr_Builder::isNumsEmpty()
{
	
    return this->numbers_.empty();
}

// Dr. Ryan: This method will not properly construct the tree as we need 
//			 it - we will have to do some connecting to get it right.
void Expr_Builder::popConnectPush()
{
	Expr_Node * N = this->operators_.top();
	this->operators_.pop();
	
	N->setRightChild(this->numbers_.top());
	this->numbers_.pop();
	
	N->setLeftChild(this->numbers_.top());
	this->numbers_.pop();
	
	this->numbers_.push(N);
}