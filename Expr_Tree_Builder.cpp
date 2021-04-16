// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder()
{

}

Expr_Tree_Builder::~Expr_Tree_Builder()
{

}

void Expr_Tree_Builder::checkPriority(Expr_Node * node)
{
	if(this->isOpsEmtpy || this->getTopOp()->priority() == 0 || (this->getTopOp()->priority() < node->priority()))
	{
		this->pushOp(node);
	}
	else
	{
		do
		{
			this->popConnectPush();
		}
		while(!this->isOpsEmtpy || this->getTopOp()->priority() != 0 || (node->priority() < this->getTopOp()->priority()))
		
		this->pushOp(node);
	}
}

void Expr_Tree_Builder::buildExprTree(std::string expression)
{
	std::istringstream input(expression);
	std::string t;
	int number(0);
	
	while(!input.eof())
	{
		input >> t;
		if(t == "(")
		{
			this->buildOPar();
		}
		else if(!(atoi(token.c_str())==0 & token[0]!='0'))
        {
            std::istringstream token_num(token);
            token_num >> number;
            this->buildNum(number);
        }
		else if(t == "+")
		{
			this->buildAdd();
		}
		else if(t == "-")
		{
			this->buildSub();
		}
		else if(t == "*")
		{
			this->buildMult();
		}
		else if(t == "/")
		{
			this->buildDiv();
		}
		else if(t == "%")
		{
			this->buildMod();
		}
		else if(t == ")")
		{
			while(this->getTopOp()->priority()!=0)
			{
				this->popConnectPush();
			}
		}
		else
		{
			std::cout<<"Invalid Expression"<<std::endl;
			throw std::exception();
			return;
		}
		
		while(!this->isOpsEmtpy())
		{
			this->popConnectPush();
		}
		
		this->setTree(this->getTopNum());
	}
}

void Expr_Tree_Builder::buildNum (int n)
{
	Expr_Node * node = new Num_Node(n);
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildAdd()
{
	Expr_Node * node = new Add_Node();
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildSub()
{
	Expr_Node * node = new Sub_Node();
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildMult()
{
	Expr_Node * node = new Mult_Node();
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildDiv()
{
	Expr_Node * node = new Div_Node();
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildMod()
{
	Expr_Node * node = new Mod_Node();
	
	this->checkPriority(node);
}

void Expr_Tree_Builder::buildOPar()
{
	Expr_Node * node = new Par_Node();
	
	this->pushOp(node);
}