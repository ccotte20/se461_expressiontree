// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _EXPR_BUILDER_
#define _EXPR_BUILDER_

#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Number_Node.h"


class Expr_Builder{
public:
    
    Expr_Builder();
    virtual ~Expr_Builder();
    
	virtual void checkPriority(Expr_Node * node)=0;
    virtual void buildExpr()=0;
	
    virtual void buildNum (int n)=0;
    virtual void buildAdd()=0;
    virtual void buildSub()=0;
    virtual void buildMult()=0;
    virtual void buildDiv()=0;
    virtual void buildMod()=0;
    virtual void buildOPar()=0;
    virtual void buildCPar()=0;
	
    Expr_Node * getTree();
	void * setTree();
    void pushNum(Expr_Node * n);
	void pushOp(Expr_Node * n);
    Expr_Node * getTopNum();
    Expr_Node * getTopOp();
    void popOp();
    void popNum();
    bool isOpsEmpty();
    bool isNumsEmpty();
    void popConnectPush();
	
protected:
    Expr_Node * tree_;
    std::stack<Expr_Node *> numbers_;
	std::stack<Expr_Node *> operators_;
};
#endif