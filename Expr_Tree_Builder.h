// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EXPR_TREE_BUILDER_
#define _EXPR_TREE_BUILDER_

#include "Expr_Builder.h"


class Expr_Tree_Builder : public Expr_Builder
{
	public:
    
		Expr_Tree_Builder();
		virtual ~Expr_Tree_Builder();
	
		virtual void checkPriority(Expr_Node * node);
		virtual void buildExprTree(std::string expression);
		
		virtual void buildNum (int n);
		virtual void buildAdd();
		virtual void buildSub();
		virtual void buildMult();
		virtual void buildDiv();
		virtual void buildMod();
		virtual void buildOPar();
		virtual void buildCPar();
};
#endif