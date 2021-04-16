// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _SUB_NODE_
#define _SUB_NODE_

#include "Binary_Expr_Node.h"


class Sub_Node : public Binary_Expr_Node{
	public:
		Sub_Node(void);
		virtual ~Sub_Node(void);

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif