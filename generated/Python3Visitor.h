
// Generated from .\Python3.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Python3Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Python3Parser.
 */
class  Python3Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Python3Parser.
   */
    virtual antlrcpp::Any visitFile_input(Python3Parser::File_inputContext *context) = 0;

    virtual antlrcpp::Any visitFuncdef(Python3Parser::FuncdefContext *context) = 0;

    virtual antlrcpp::Any visitParameters(Python3Parser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypedargslist(Python3Parser::TypedargslistContext *context) = 0;

    virtual antlrcpp::Any visitTfpdef(Python3Parser::TfpdefContext *context) = 0;

    virtual antlrcpp::Any visitStmt(Python3Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitSimple_stmt(Python3Parser::Simple_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSmall_stmt(Python3Parser::Small_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr_stmt(Python3Parser::Expr_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAugassign(Python3Parser::AugassignContext *context) = 0;

    virtual antlrcpp::Any visitFlow_stmt(Python3Parser::Flow_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBreak_stmt(Python3Parser::Break_stmtContext *context) = 0;

    virtual antlrcpp::Any visitContinue_stmt(Python3Parser::Continue_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(Python3Parser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmt(Python3Parser::Compound_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(Python3Parser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(Python3Parser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSuite(Python3Parser::SuiteContext *context) = 0;

    virtual antlrcpp::Any visitTest(Python3Parser::TestContext *context) = 0;

    virtual antlrcpp::Any visitOr_test(Python3Parser::Or_testContext *context) = 0;

    virtual antlrcpp::Any visitAnd_test(Python3Parser::And_testContext *context) = 0;

    virtual antlrcpp::Any visitNot_test(Python3Parser::Not_testContext *context) = 0;

    virtual antlrcpp::Any visitComparison(Python3Parser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitComp_op(Python3Parser::Comp_opContext *context) = 0;

    virtual antlrcpp::Any visitArith_expr(Python3Parser::Arith_exprContext *context) = 0;

    virtual antlrcpp::Any visitTerm(Python3Parser::TermContext *context) = 0;

    virtual antlrcpp::Any visitFactor(Python3Parser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitAtom_expr(Python3Parser::Atom_exprContext *context) = 0;

    virtual antlrcpp::Any visitTrailer(Python3Parser::TrailerContext *context) = 0;

    virtual antlrcpp::Any visitAtom(Python3Parser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitTestlist(Python3Parser::TestlistContext *context) = 0;

    virtual antlrcpp::Any visitArglist(Python3Parser::ArglistContext *context) = 0;

    virtual antlrcpp::Any visitArgument(Python3Parser::ArgumentContext *context) = 0;


};

