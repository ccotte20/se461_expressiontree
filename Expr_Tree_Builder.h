// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EXPR_TREE_BUILDER_
#define _EXPR_TREE_BUILDER_

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include "Expr_Builder.h"
#include "Num_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mult_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Par_Node.h"


class Expr_Tree_Builder : public Expr_Builder
{
	public:
    
		Expr_Tree_Builder();
		virtual ~Expr_Tree_Builder();
	
		virtual void checkPriority(Expr_Node * node);
		virtual void buildExpr(std::string expression);
		
		virtual void buildNum (int n);
		virtual void buildAdd();
		virtual void buildSub();
		virtual void buildMult();
		virtual void buildDiv();
		virtual void buildMod();
		virtual void buildOPar();
};
#endif