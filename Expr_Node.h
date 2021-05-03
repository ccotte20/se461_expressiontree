// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EXPR_NODE_
#define _EXPR_NODE_

#include "Expr_Node_Visitor.h"

class Expr_Node
{
	public:
		Expr_Node(void) {}
		virtual ~Expr_Node(void) {}
		virtual void accept(Expr_Node_Visitor & v) = 0;
		virtual Expr_Node & getRightChild(void)=0;
		virtual Expr_Node & getLeftChild(void)=0;
		virtual void setLeftChild(Expr_Node * node)=0;
		virtual void setRightChild(Expr_Node * node)=0;
		virtual int priority()=0;
};

#endif