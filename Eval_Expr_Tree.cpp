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

void Eval_Expr_Tree::visitAddNode (Addition_Node & node)
{
	node.getLeftChild().accept(*this);
	node.getRightChild().accept(*this);
	
	int num1 = this->result_.top();
	this->result_.pop();
	
	int num2 = this->result_.top();
	this->result_.pop();
	
	int result = num1 + num2;
	
	this->result_.push(result);
}

void Eval_Expr_Tree::visitNumNode(Num_Node & node)
{
	node.accept(*this);
	
	this->result_.push(node.getNum());
}

void Eval_Expr_Tree::visitSubNode(Sub_Node & node)
{
	node.getLeftChild().accept(*this);
	node.getRightChild().accept(*this);
	
	int num1 = this->result_.top()
	this->result_.pop();
	
	int num2 = this->result_.top();
	this->result_.pop();
	
	int result = num1 - num2;
	
	this->result_.push(result);
}

void Eval_Expr_Tree::visitMultNode(Mult_Node & node)
{
	node.getLeftChild().accept(*this);
	node.getRightChild().accept(*this);
	
	int num1 = this->result_.top()
	this->result_.pop();
	
	int num2 = this->result_.top();
	this->result_.pop();
	
	int result = num1 * num2;
	
	this->result_.push(result);
}

void Eval_Expr_Tree::visitDivNode(Div_Node & node)
{
	node.getLeftChild().accept(*this);
	node.getRightChild().accept(*this);
	
	int num1 = this->result_.top()
	this->result_.pop();
	
	int num2 = this->result_.top();
	this->result_.pop();
	
	if(num2 == 0)
	{
		std::cout<<"Divide by 0"<<std::endl;
		throw std::logic_error("Divide by 0")
	}
	else
	{
		int result = (int) (num1 / num2);
		this->result_.push(result);
	}
}

void Eval_Expr_Tree::visitModNode(Mod_Node & node)
{
	node.getLeftChild().accept(*this);
	node.getRightChild().accept(*this);
	
	int num1 = this->result_.top()
	this->result_.pop();
	
	int num2 = this->result_.top();
	this->result_.pop();
	
	if(num2 == 0)
	{
		std::cout<<"Divide by 0"<<std::endl;
		throw std::logic_error("Divide by 0")
	}
	else
	{
		int result = (int) (num1 % num2);
		this->result_.push(result);
	}
}

int Eval_Expr_Tree::result()
{
	return result_.top();
}