// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include "Expr_Tree_Builder.h"
#include "Expr_Node.h"
#include "Eval_Expr_Tree.h"

int main()
{
	std::string infix;
	while(infix != "QUIT")
	{
		std::cout<<"Give the expression or type QUIT"<<std::endl;
		std::cin>>infix;
		
		if(infix != "QUIT")
		{
			Expr_Tree_Builder tree;
			tree.buildExpr(infix);
			
			Expr_Node * root = tree.getRoot();
			
			Eval_Expr_Tree eval;
			
			root->accept(eval);
			
			int result = eval.result();
			
			std::cout<<"Answer: "<<result<<std::endl;
		}
	}
	return 0;
}