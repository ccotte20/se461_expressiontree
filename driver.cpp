// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include <cstdlib>
#include <stdlib.h>
#include <iostream>

int main()
{
	std::string infix;
	while(infix != "QUIT")
	{
		std::cout<<"Give the expression or type QUIT"<<std::endl;
		std::cin>>infix;
		
		if(infix != "QUIT")
		{
			Expr_Tree_Builder tree();
			tree.buildExprTree(infix);
			
			Expr_Node * root = tree.getTree();
			
			Eval_Expr_Tree eval();
			
			int result = eval.result();
			
			std::cout<<"Answer: "<<result<<std::endl;
		}
	}
	return 0;
}