// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EVAL_EXPR_TREE_
#def _EVAL_EXPR_TREE_

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
		
		virtual void visitAddNode(const Add_Node & node);
		virtual void visitNumNode(const Num_Node & node);
		virtual void visitSubNode(const Sub_Node & node);
		virtual void visitMultNode(const Mult_Node & node);
		virtual void visitDivNode(const Div_Node & node);
		virtual void visitModNode(const Mod_Node & node);
		
		int result();
	
	private:
		int result_;
};

#endif