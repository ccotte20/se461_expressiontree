// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _MOD_NODE_
#define _MOD_NODE_

#include "Binary_Expr_Node.h"


class Mod_Node : public Binary_Expr_Node{
	public:
		Mod_Node(void);
		virtual ~Mod_Node(void);

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
};
#endif