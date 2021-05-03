// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _DIV_NODE_
#define _DIV_NODE_

#include "Binary_Expr_Node.h"


class Div_Node : public Binary_Expr_Node
{
	public:
		Div_Node(void);
		virtual ~Div_Node(void);

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif