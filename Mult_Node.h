// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _MULT_NODE_
#define _MULT_NODE_

#include "Binary_Expr_Node.h"


class Mult_Node : public Binary_Expr_Node
{
	public:
		Mult_Node(void);
		virtual ~Mult_Node(void);

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif