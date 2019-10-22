
// Generated from .\Python3.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Python3Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Python3Parser.
 */
class  Python3Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile_input(Python3Parser::File_inputContext *ctx) = 0;
  virtual void exitFile_input(Python3Parser::File_inputContext *ctx) = 0;

  virtual void enterFuncdef(Python3Parser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(Python3Parser::FuncdefContext *ctx) = 0;

  virtual void enterParameters(Python3Parser::ParametersContext *ctx) = 0;
  virtual void exitParameters(Python3Parser::ParametersContext *ctx) = 0;

  virtual void enterTypedargslist(Python3Parser::TypedargslistContext *ctx) = 0;
  virtual void exitTypedargslist(Python3Parser::TypedargslistContext *ctx) = 0;

  virtual void enterTfpdef(Python3Parser::TfpdefContext *ctx) = 0;
  virtual void exitTfpdef(Python3Parser::TfpdefContext *ctx) = 0;

  virtual void enterStmt(Python3Parser::StmtContext *ctx) = 0;
  virtual void exitStmt(Python3Parser::StmtContext *ctx) = 0;

  virtual void enterSimple_stmt(Python3Parser::Simple_stmtContext *ctx) = 0;
  virtual void exitSimple_stmt(Python3Parser::Simple_stmtContext *ctx) = 0;

  virtual void enterSmall_stmt(Python3Parser::Small_stmtContext *ctx) = 0;
  virtual void exitSmall_stmt(Python3Parser::Small_stmtContext *ctx) = 0;

  virtual void enterExpr_stmt(Python3Parser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(Python3Parser::Expr_stmtContext *ctx) = 0;

  virtual void enterAugassign(Python3Parser::AugassignContext *ctx) = 0;
  virtual void exitAugassign(Python3Parser::AugassignContext *ctx) = 0;

  virtual void enterFlow_stmt(Python3Parser::Flow_stmtContext *ctx) = 0;
  virtual void exitFlow_stmt(Python3Parser::Flow_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(Python3Parser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(Python3Parser::Break_stmtContext *ctx) = 0;

  virtual void enterContinue_stmt(Python3Parser::Continue_stmtContext *ctx) = 0;
  virtual void exitContinue_stmt(Python3Parser::Continue_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(Python3Parser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(Python3Parser::Return_stmtContext *ctx) = 0;

  virtual void enterCompound_stmt(Python3Parser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(Python3Parser::Compound_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(Python3Parser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(Python3Parser::If_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(Python3Parser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(Python3Parser::While_stmtContext *ctx) = 0;

  virtual void enterSuite(Python3Parser::SuiteContext *ctx) = 0;
  virtual void exitSuite(Python3Parser::SuiteContext *ctx) = 0;

  virtual void enterTest(Python3Parser::TestContext *ctx) = 0;
  virtual void exitTest(Python3Parser::TestContext *ctx) = 0;

  virtual void enterOr_test(Python3Parser::Or_testContext *ctx) = 0;
  virtual void exitOr_test(Python3Parser::Or_testContext *ctx) = 0;

  virtual void enterAnd_test(Python3Parser::And_testContext *ctx) = 0;
  virtual void exitAnd_test(Python3Parser::And_testContext *ctx) = 0;

  virtual void enterNot_test(Python3Parser::Not_testContext *ctx) = 0;
  virtual void exitNot_test(Python3Parser::Not_testContext *ctx) = 0;

  virtual void enterComparison(Python3Parser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(Python3Parser::ComparisonContext *ctx) = 0;

  virtual void enterComp_op(Python3Parser::Comp_opContext *ctx) = 0;
  virtual void exitComp_op(Python3Parser::Comp_opContext *ctx) = 0;

  virtual void enterArith_expr(Python3Parser::Arith_exprContext *ctx) = 0;
  virtual void exitArith_expr(Python3Parser::Arith_exprContext *ctx) = 0;

  virtual void enterTerm(Python3Parser::TermContext *ctx) = 0;
  virtual void exitTerm(Python3Parser::TermContext *ctx) = 0;

  virtual void enterFactor(Python3Parser::FactorContext *ctx) = 0;
  virtual void exitFactor(Python3Parser::FactorContext *ctx) = 0;

  virtual void enterAtom_expr(Python3Parser::Atom_exprContext *ctx) = 0;
  virtual void exitAtom_expr(Python3Parser::Atom_exprContext *ctx) = 0;

  virtual void enterTrailer(Python3Parser::TrailerContext *ctx) = 0;
  virtual void exitTrailer(Python3Parser::TrailerContext *ctx) = 0;

  virtual void enterAtom(Python3Parser::AtomContext *ctx) = 0;
  virtual void exitAtom(Python3Parser::AtomContext *ctx) = 0;

  virtual void enterTestlist(Python3Parser::TestlistContext *ctx) = 0;
  virtual void exitTestlist(Python3Parser::TestlistContext *ctx) = 0;

  virtual void enterArglist(Python3Parser::ArglistContext *ctx) = 0;
  virtual void exitArglist(Python3Parser::ArglistContext *ctx) = 0;

  virtual void enterArgument(Python3Parser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(Python3Parser::ArgumentContext *ctx) = 0;


};

