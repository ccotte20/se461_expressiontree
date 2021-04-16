#include "Expr_Builder.h"


Expr_Builder::Expr_Builder() : tree_(), numbers_(), operators_()
{
    
}

Expr_Builder::~Expr_Builder()
{
    
}

void Expr_Builder::pushNum(Expr_Node * n)
{
	this->numbers_.push(n);
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
    return operators_.empty();
}

bool Expr_Builder::isNumsEmpty()
{
	
    return numbers_.empty();
}