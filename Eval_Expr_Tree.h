// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EVAL_EXPR_TREE_
#define _EVAL_EXPR_TREE_

#include <stack>
#include "Expr_Node_Visitor.h"
#include "Add_Node.h"
#include "Num_Node.h"
#include "Sub_Node.h"
#include "Mult_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"

class Eval_Expr_Tree : public Expr_Node_Visitor
{
	public:
		Eval_Expr_Tree();
		virtual ~Eval_Expr_Tree();
		
		virtual void visitAddNode(Add_Node & node);
		virtual void visitNumNode(Num_Node & node);
		virtual void visitSubNode(Sub_Node & node);
		virtual void visitMultNode(Mult_Node & node);
		virtual void visitDivNode(Div_Node & node);
		virtual void visitModNode(Mod_Node & node);
		
		int result();
	
	private:
		std::stack<int> result_;
};

#endif