#include "Expr_Builder.h"


Expr_Builder::Expr_Builder() : tree_(), numbers_(), operators_()
{
    
}

Expr_Builder::~Expr_Builder()
{
    
}

Expr_Node * Expr_Builder::getTree()
{
	return this->tree_;
}

void Expr_Builder::setTree(Expr_Node * n)
{
	this->tree_=n;
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

void Expr_Builder::popConnectPush();
{
	Expr_Node * N = this->operators_.top();
	this->operators_.pop()
	
	N->setRightChild(this->numbers_.top());
	this->numbers_.pop();
	
	N->setLeftChild(this->numbers_.top());
	this->numbers_.pop();
	
	this->numbers_.push(N);
}