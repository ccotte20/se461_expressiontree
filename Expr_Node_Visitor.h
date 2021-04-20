// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EXPR_NODE_VISITOR_
// Dr. Ryan: This will cause a compilation error here, you likely mean #define
#def _EXPR_NODE_VISITOR_

#include <iostream>
class Add_Node;
class Sub_Node;
class Num_Node;
class Mult_Node;
class Div_Node;
class Mod_Node;

class Expr_Node_Visitor
{
	public:
		Expr_Node_Visitor() { }
		virtual ~Expr_Node_Visitor() { }
		
		virtual void visitAddNode(Add_Node & node)=0;
		virtual void visitNumNode(Num_Node & node)=0;
		virtual void visitSubNode(Sub_Node & node)=0;
		virtual void visitMultNode(Mult_Node & node)=0;
		virtual void visitDivNode(Div_Node & node)=0;
		virtual void visitModNode(Mod_Node & node)=0;
};

#endif