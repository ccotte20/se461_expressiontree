// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _PAR_NODE_
#define _PAR_NODE_

#include "Binary_Expr_Node.h"

// Dr. Ryan: Is a parenthesis really a type of Binary Expression Node?
// Fixed: needed for pop connect push
class Par_Node : public Binary_Expr_Node
{
	public:
		Par_Node();
		virtual ~Par_Node();

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif