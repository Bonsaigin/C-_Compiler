/*** BNFC-Generated Visitor Traversal Skeleton. ***/
/* This traverses the abstract syntax tree.
   To use, copy Skeleton.h and Skeleton.c to
   new files. */

#include <stdlib.h>
#include <stdio.h>

#include "Skeleton.h"

void visitProgram(Program _p_)
{
  switch(_p_->kind)
  {
  case is_Prog:
    /* Code for Prog Goes Here */
    visitListFunction(_p_->u.prog_.listfunction_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void visitFunction(Function _p_)
{
  switch(_p_->kind)
  {
  case is_Global:
    /* Code for Global Goes Here */
    visitType(_p_->u.global_.type_);
    visitIdent(_p_->u.global_.ident_);
    break;  case is_Fun:
    /* Code for Fun Goes Here */
    visitType(_p_->u.fun_.type_);
    visitIdent(_p_->u.fun_.ident_);
    visitListDecl(_p_->u.fun_.listdecl_);
    visitListStm(_p_->u.fun_.liststm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Function!\n");
    exit(1);
  }
}

void visitDecl(Decl _p_)
{
  switch(_p_->kind)
  {
  case is_Dec:
    /* Code for Dec Goes Here */
    visitType(_p_->u.dec_.type_);
    visitListIdent(_p_->u.dec_.listident_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Decl!\n");
    exit(1);
  }
}

void visitListFunction(ListFunction listfunction)
{
  while(listfunction != 0)
  {
    /* Code For ListFunction Goes Here */
    visitFunction(listfunction->function_);
    listfunction = listfunction->listfunction_;
  }
}

void visitListStm(ListStm liststm)
{
  while(liststm != 0)
  {
    /* Code For ListStm Goes Here */
    visitStm(liststm->stm_);
    liststm = liststm->liststm_;
  }
}

void visitListDecl(ListDecl listdecl)
{
  while(listdecl != 0)
  {
    /* Code For ListDecl Goes Here */
    visitDecl(listdecl->decl_);
    listdecl = listdecl->listdecl_;
  }
}

void visitListIdent(ListIdent listident)
{
  while(listident != 0)
  {
    /* Code For ListIdent Goes Here */
    visitIdent(listident->ident_);
    listident = listident->listident_;
  }
}

void visitStm(Stm _p_)
{
  switch(_p_->kind)
  {
  case is_SDecl:
    /* Code for SDecl Goes Here */
    visitDecl(_p_->u.sdecl_.decl_);
    break;  case is_SExp:
    /* Code for SExp Goes Here */
    visitExp(_p_->u.sexp_.exp_);
    break;  case is_SBlock:
    /* Code for SBlock Goes Here */
    visitListStm(_p_->u.sblock_.liststm_);
    break;  case is_SIf:
    /* Code for SIf Goes Here */
    visitExp(_p_->u.sif_.exp_);
    visitStm(_p_->u.sif_.stm_);
    break;  case is_SIfElse:
    /* Code for SIfElse Goes Here */
    visitExp(_p_->u.sifelse_.exp_);
    visitStm(_p_->u.sifelse_.stm_1);
    visitStm(_p_->u.sifelse_.stm_2);
    break;  case is_SFor:
    /* Code for SFor Goes Here */
    visitExp(_p_->u.sfor_.exp_1);
    visitExp(_p_->u.sfor_.exp_2);
    visitExp(_p_->u.sfor_.exp_3);
    visitStm(_p_->u.sfor_.stm_);
    break;  case is_SWhile:
    /* Code for SWhile Goes Here */
    visitExp(_p_->u.swhile_.exp_);
    visitStm(_p_->u.swhile_.stm_);
    break;  case is_SReturn:
    /* Code for SReturn Goes Here */
    visitExp(_p_->u.sreturn_.exp_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Stm!\n");
    exit(1);
  }
}

void visitExp(Exp _p_)
{
  switch(_p_->kind)
  {
  case is_EAss:
    /* Code for EAss Goes Here */
    visitIdent(_p_->u.eass_.ident_);
    visitExp(_p_->u.eass_.exp_);
    break;  case is_ELt:
    /* Code for ELt Goes Here */
    visitExp(_p_->u.elt_.exp_1);
    visitExp(_p_->u.elt_.exp_2);
    break;  case is_EAdd:
    /* Code for EAdd Goes Here */
    visitExp(_p_->u.eadd_.exp_1);
    visitExp(_p_->u.eadd_.exp_2);
    break;  case is_ESub:
    /* Code for ESub Goes Here */
    visitExp(_p_->u.esub_.exp_1);
    visitExp(_p_->u.esub_.exp_2);
    break;  case is_EMul:
    /* Code for EMul Goes Here */
    visitExp(_p_->u.emul_.exp_1);
    visitExp(_p_->u.emul_.exp_2);
    break;  case is_Call:
    /* Code for Call Goes Here */
    visitIdent(_p_->u.call_.ident_);
    visitListExp(_p_->u.call_.listexp_);
    break;  case is_EVar:
    /* Code for EVar Goes Here */
    visitIdent(_p_->u.evar_.ident_);
    break;  case is_EStr:
    /* Code for EStr Goes Here */
    visitString(_p_->u.estr_.string_);
    break;  case is_EInt:
    /* Code for EInt Goes Here */
    visitInteger(_p_->u.eint_.integer_);
    break;  case is_EDouble:
    /* Code for EDouble Goes Here */
    visitDouble(_p_->u.edouble_.double_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void visitListExp(ListExp listexp)
{
  while(listexp != 0)
  {
    /* Code For ListExp Goes Here */
    visitExp(listexp->exp_);
    listexp = listexp->listexp_;
  }
}

void visitType(Type _p_)
{
  switch(_p_->kind)
  {
  case is_TInt:
    /* Code for TInt Goes Here */
    break;  case is_TDouble:
    /* Code for TDouble Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void visitInteger(Integer i)
{
  /* Code for Integer Goes Here */
}
void visitDouble(Double d)
{
  /* Code for Double Goes Here */
}
void visitChar(Char c)
{
  /* Code for Char Goes Here */
}
void visitString(String s)
{
  /* Code for String Goes Here */
}
