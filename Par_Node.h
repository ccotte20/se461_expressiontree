// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _PAR_NODE_
#define _PAR_NODE_

#include "Expr_Node.h"


class Par_Node : public Expr_Node{
	public:
		Par_Node(int n);
		virtual ~Par_Node();

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif