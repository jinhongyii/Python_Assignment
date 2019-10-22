
// Generated from .\Python3.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Python3Listener.h"


/**
 * This class provides an empty implementation of Python3Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Python3BaseListener : public Python3Listener {
public:

  virtual void enterFile_input(Python3Parser::File_inputContext * /*ctx*/) override { }
  virtual void exitFile_input(Python3Parser::File_inputContext * /*ctx*/) override { }

  virtual void enterFuncdef(Python3Parser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(Python3Parser::FuncdefContext * /*ctx*/) override { }

  virtual void enterParameters(Python3Parser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(Python3Parser::ParametersContext * /*ctx*/) override { }

  virtual void enterTypedargslist(Python3Parser::TypedargslistContext * /*ctx*/) override { }
  virtual void exitTypedargslist(Python3Parser::TypedargslistContext * /*ctx*/) override { }

  virtual void enterTfpdef(Python3Parser::TfpdefContext * /*ctx*/) override { }
  virtual void exitTfpdef(Python3Parser::TfpdefContext * /*ctx*/) override { }

  virtual void enterStmt(Python3Parser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(Python3Parser::StmtContext * /*ctx*/) override { }

  virtual void enterSimple_stmt(Python3Parser::Simple_stmtContext * /*ctx*/) override { }
  virtual void exitSimple_stmt(Python3Parser::Simple_stmtContext * /*ctx*/) override { }

  virtual void enterSmall_stmt(Python3Parser::Small_stmtContext * /*ctx*/) override { }
  virtual void exitSmall_stmt(Python3Parser::Small_stmtContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(Python3Parser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(Python3Parser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterAugassign(Python3Parser::AugassignContext * /*ctx*/) override { }
  virtual void exitAugassign(Python3Parser::AugassignContext * /*ctx*/) override { }

  virtual void enterFlow_stmt(Python3Parser::Flow_stmtContext * /*ctx*/) override { }
  virtual void exitFlow_stmt(Python3Parser::Flow_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(Python3Parser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(Python3Parser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterContinue_stmt(Python3Parser::Continue_stmtContext * /*ctx*/) override { }
  virtual void exitContinue_stmt(Python3Parser::Continue_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(Python3Parser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(Python3Parser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(Python3Parser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(Python3Parser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(Python3Parser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(Python3Parser::If_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(Python3Parser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(Python3Parser::While_stmtContext * /*ctx*/) override { }

  virtual void enterSuite(Python3Parser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(Python3Parser::SuiteContext * /*ctx*/) override { }

  virtual void enterTest(Python3Parser::TestContext * /*ctx*/) override { }
  virtual void exitTest(Python3Parser::TestContext * /*ctx*/) override { }

  virtual void enterOr_test(Python3Parser::Or_testContext * /*ctx*/) override { }
  virtual void exitOr_test(Python3Parser::Or_testContext * /*ctx*/) override { }

  virtual void enterAnd_test(Python3Parser::And_testContext * /*ctx*/) override { }
  virtual void exitAnd_test(Python3Parser::And_testContext * /*ctx*/) override { }

  virtual void enterNot_test(Python3Parser::Not_testContext * /*ctx*/) override { }
  virtual void exitNot_test(Python3Parser::Not_testContext * /*ctx*/) override { }

  virtual void enterComparison(Python3Parser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(Python3Parser::ComparisonContext * /*ctx*/) override { }

  virtual void enterComp_op(Python3Parser::Comp_opContext * /*ctx*/) override { }
  virtual void exitComp_op(Python3Parser::Comp_opContext * /*ctx*/) override { }

  virtual void enterArith_expr(Python3Parser::Arith_exprContext * /*ctx*/) override { }
  virtual void exitArith_expr(Python3Parser::Arith_exprContext * /*ctx*/) override { }

  virtual void enterTerm(Python3Parser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(Python3Parser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(Python3Parser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(Python3Parser::FactorContext * /*ctx*/) override { }

  virtual void enterAtom_expr(Python3Parser::Atom_exprContext * /*ctx*/) override { }
  virtual void exitAtom_expr(Python3Parser::Atom_exprContext * /*ctx*/) override { }

  virtual void enterTrailer(Python3Parser::TrailerContext * /*ctx*/) override { }
  virtual void exitTrailer(Python3Parser::TrailerContext * /*ctx*/) override { }

  virtual void enterAtom(Python3Parser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(Python3Parser::AtomContext * /*ctx*/) override { }

  virtual void enterTestlist(Python3Parser::TestlistContext * /*ctx*/) override { }
  virtual void exitTestlist(Python3Parser::TestlistContext * /*ctx*/) override { }

  virtual void enterArglist(Python3Parser::ArglistContext * /*ctx*/) override { }
  virtual void exitArglist(Python3Parser::ArglistContext * /*ctx*/) override { }

  virtual void enterArgument(Python3Parser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(Python3Parser::ArgumentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

