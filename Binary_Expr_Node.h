// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _BINARY_EXPR_NODE_
#define _BINARY_EXPR_NODE_

#include "Expr_Node.h"

class Binary_Expr_Node : public Expr_Node
{

	public:
		Binary_Expr_Node();
		virtual ~Binary_Expr_Node();
		virtual void accept(Expr_Node_Visitor & v)=0;
		virtual Expr_Node & getRightChild(void);
		virtual Expr_Node & getLeftChild(void);
		virtual void setLeftChild(Expr_Node * node);
		virtual void setRightChild(Expr_Node * node);
		virtual int priority()=0;
		
	protected:
		Expr_Node * right_;
		Expr_Node * left_;
};
#endif