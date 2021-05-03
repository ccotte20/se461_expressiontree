// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _ADD_NODE_
#define _ADD_NODE_

#include "Binary_Expr_Node.h"

class Add_Node : public Binary_Expr_Node
{
	public:
		Add_Node();
		virtual ~Add_Node();
		// Dr. Ryan: Your Base class(es) have the return type of integer here...I think 
		//			 this is likely what you want though.
		// Fixed: Changed base class declaration to void instead of int
		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif