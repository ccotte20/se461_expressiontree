// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _NUM_NODE_
#define _NUM_NODE_

#include "Binary_Expr_Node.h"


class Num_Node : public Binary_Expr_Node
{
	public:
		Num_Node(int n);
		virtual ~Num_Node();

		virtual void accept(Expr_Node_Visitor & v);
		virtual int priority();
		
		int getNum();
	private:
		Num_Node();
		int n_;
};
#endif