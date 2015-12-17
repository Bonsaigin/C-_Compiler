/* C Abstract Syntax Implementation generated by the BNF Converter. */

#include <stdio.h>
#include <stdlib.h>
#include "Absyn.h"


/********************   Prog    ********************/
Program make_Prog(ListFunction p1)
{
    Program tmp = (Program) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Prog!\n");
        exit(1);
    }
    tmp->kind = is_Prog;
    tmp->u.prog_.listfunction_ = p1;
    return tmp;
}/********************   Global    ********************/
Function make_Global(Type p1, Ident p2)
{
    Function tmp = (Function) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Global!\n");
        exit(1);
    }
    tmp->kind = is_Global;
    tmp->u.global_.type_ = p1;
    tmp->u.global_.ident_ = p2;
    return tmp;
}
/********************   Fun    ********************/
Function make_Fun(Type p1, Ident p2, ListDecl p3, ListStm p4)
{
    Function tmp = (Function) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Fun!\n");
        exit(1);
    }
    tmp->kind = is_Fun;
    tmp->u.fun_.type_ = p1;
    tmp->u.fun_.ident_ = p2;
    tmp->u.fun_.listdecl_ = p3;
    tmp->u.fun_.liststm_ = p4;
    return tmp;
}/********************   Dec    ********************/
Decl make_Dec(Type p1, ListIdent p2)
{
    Decl tmp = (Decl) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Dec!\n");
        exit(1);
    }
    tmp->kind = is_Dec;
    tmp->u.dec_.type_ = p1;
    tmp->u.dec_.listident_ = p2;
    return tmp;
}/********************   ListFunction    ********************/
ListFunction make_ListFunction(Function p1, ListFunction p2)
{
    ListFunction tmp = (ListFunction) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListFunction!\n");
        exit(1);
    }
    tmp->function_ = p1;
    tmp->listfunction_ = p2;
    return tmp;
}/********************   ListStm    ********************/
ListStm make_ListStm(Stm p1, ListStm p2)
{
    ListStm tmp = (ListStm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListStm!\n");
        exit(1);
    }
    tmp->stm_ = p1;
    tmp->liststm_ = p2;
    return tmp;
}/********************   ListDecl    ********************/
ListDecl make_ListDecl(Decl p1, ListDecl p2)
{
    ListDecl tmp = (ListDecl) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListDecl!\n");
        exit(1);
    }
    tmp->decl_ = p1;
    tmp->listdecl_ = p2;
    return tmp;
}/********************   ListIdent    ********************/
ListIdent make_ListIdent(Ident p1, ListIdent p2)
{
    ListIdent tmp = (ListIdent) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListIdent!\n");
        exit(1);
    }
    tmp->ident_ = p1;
    tmp->listident_ = p2;
    return tmp;
}/********************   SDecl    ********************/
Stm make_SDecl(Decl p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SDecl!\n");
        exit(1);
    }
    tmp->kind = is_SDecl;
    tmp->u.sdecl_.decl_ = p1;
    return tmp;
}
/********************   SExp    ********************/
Stm make_SExp(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SExp!\n");
        exit(1);
    }
    tmp->kind = is_SExp;
    tmp->u.sexp_.exp_ = p1;
    return tmp;
}
/********************   SBlock    ********************/
Stm make_SBlock(ListStm p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SBlock!\n");
        exit(1);
    }
    tmp->kind = is_SBlock;
    tmp->u.sblock_.liststm_ = p1;
    return tmp;
}
/********************   SIf    ********************/
Stm make_SIf(Exp p1, Stm p2)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SIf!\n");
        exit(1);
    }
    tmp->kind = is_SIf;
    tmp->u.sif_.exp_ = p1;
    tmp->u.sif_.stm_ = p2;
    return tmp;
}
/********************   SIfElse    ********************/
Stm make_SIfElse(Exp p1, Stm p2, Stm p3)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SIfElse!\n");
        exit(1);
    }
    tmp->kind = is_SIfElse;
    tmp->u.sifelse_.exp_ = p1;
    tmp->u.sifelse_.stm_1 = p2;
    tmp->u.sifelse_.stm_2 = p3;
    return tmp;
}
/********************   SFor    ********************/
Stm make_SFor(Exp p1, Exp p2, Exp p3, Stm p4)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SFor!\n");
        exit(1);
    }
    tmp->kind = is_SFor;
    tmp->u.sfor_.exp_1 = p1;
    tmp->u.sfor_.exp_2 = p2;
    tmp->u.sfor_.exp_3 = p3;
    tmp->u.sfor_.stm_ = p4;
    return tmp;
}
/********************   SWhile    ********************/
Stm make_SWhile(Exp p1, Stm p2)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SWhile!\n");
        exit(1);
    }
    tmp->kind = is_SWhile;
    tmp->u.swhile_.exp_ = p1;
    tmp->u.swhile_.stm_ = p2;
    return tmp;
}
/********************   SReturn    ********************/
Stm make_SReturn(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SReturn!\n");
        exit(1);
    }
    tmp->kind = is_SReturn;
    tmp->u.sreturn_.exp_ = p1;
    return tmp;
}/********************   EAss    ********************/
Exp make_EAss(Ident p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EAss!\n");
        exit(1);
    }
    tmp->kind = is_EAss;
    tmp->u.eass_.ident_ = p1;
    tmp->u.eass_.exp_ = p2;
    return tmp;
}
/********************   ELt    ********************/
Exp make_ELt(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ELt!\n");
        exit(1);
    }
    tmp->kind = is_ELt;
    tmp->u.elt_.exp_1 = p1;
    tmp->u.elt_.exp_2 = p2;
    return tmp;
}
/********************   EAdd    ********************/
Exp make_EAdd(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EAdd!\n");
        exit(1);
    }
    tmp->kind = is_EAdd;
    tmp->u.eadd_.exp_1 = p1;
    tmp->u.eadd_.exp_2 = p2;
    return tmp;
}
/********************   ESub    ********************/
Exp make_ESub(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ESub!\n");
        exit(1);
    }
    tmp->kind = is_ESub;
    tmp->u.esub_.exp_1 = p1;
    tmp->u.esub_.exp_2 = p2;
    return tmp;
}
/********************   EMul    ********************/
Exp make_EMul(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EMul!\n");
        exit(1);
    }
    tmp->kind = is_EMul;
    tmp->u.emul_.exp_1 = p1;
    tmp->u.emul_.exp_2 = p2;
    return tmp;
}
/********************   Call    ********************/
Exp make_Call(Ident p1, ListExp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Call!\n");
        exit(1);
    }
    tmp->kind = is_Call;
    tmp->u.call_.ident_ = p1;
    tmp->u.call_.listexp_ = p2;
    return tmp;
}
/********************   EVar    ********************/
Exp make_EVar(Ident p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EVar!\n");
        exit(1);
    }
    tmp->kind = is_EVar;
    tmp->u.evar_.ident_ = p1;
    return tmp;
}
/********************   EStr    ********************/
Exp make_EStr(String p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EStr!\n");
        exit(1);
    }
    tmp->kind = is_EStr;
    tmp->u.estr_.string_ = p1;
    return tmp;
}
/********************   EInt    ********************/
Exp make_EInt(Integer p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EInt!\n");
        exit(1);
    }
    tmp->kind = is_EInt;
    tmp->u.eint_.integer_ = p1;
    return tmp;
}
/********************   EDouble    ********************/
Exp make_EDouble(Double p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EDouble!\n");
        exit(1);
    }
    tmp->kind = is_EDouble;
    tmp->u.edouble_.double_ = p1;
    return tmp;
}/********************   ListExp    ********************/
ListExp make_ListExp(Exp p1, ListExp p2)
{
    ListExp tmp = (ListExp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListExp!\n");
        exit(1);
    }
    tmp->exp_ = p1;
    tmp->listexp_ = p2;
    return tmp;
}/********************   TInt    ********************/
Type make_TInt()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating TInt!\n");
        exit(1);
    }
    tmp->kind = is_TInt;
    return tmp;
}
/********************   TDouble    ********************/
Type make_TDouble()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating TDouble!\n");
        exit(1);
    }
    tmp->kind = is_TDouble;
    return tmp;
}
