
// Generated from .\Python3.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Python3Parser : public antlr4::Parser {
public:
  enum {
    STRING = 1, NUMBER = 2, INTEGER = 3, DEF = 4, RETURN = 5, IF = 6, ELIF = 7, 
    ELSE = 8, WHILE = 9, FOR = 10, IN = 11, OR = 12, AND = 13, NOT = 14, 
    NONE = 15, TRUE = 16, FALSE = 17, CONTINUE = 18, BREAK = 19, NEWLINE = 20, 
    NAME = 21, STRING_LITERAL = 22, BYTES_LITERAL = 23, DECIMAL_INTEGER = 24, 
    OCT_INTEGER = 25, HEX_INTEGER = 26, BIN_INTEGER = 27, FLOAT_NUMBER = 28, 
    IMAG_NUMBER = 29, DOT = 30, ELLIPSIS = 31, STAR = 32, OPEN_PAREN = 33, 
    CLOSE_PAREN = 34, COMMA = 35, COLON = 36, SEMI_COLON = 37, POWER = 38, 
    ASSIGN = 39, OPEN_BRACK = 40, CLOSE_BRACK = 41, OR_OP = 42, XOR = 43, 
    AND_OP = 44, LEFT_SHIFT = 45, RIGHT_SHIFT = 46, ADD = 47, MINUS = 48, 
    DIV = 49, MOD = 50, IDIV = 51, NOT_OP = 52, OPEN_BRACE = 53, CLOSE_BRACE = 54, 
    LESS_THAN = 55, GREATER_THAN = 56, EQUALS = 57, GT_EQ = 58, LT_EQ = 59, 
    NOT_EQ_1 = 60, NOT_EQ_2 = 61, AT = 62, ARROW = 63, ADD_ASSIGN = 64, 
    SUB_ASSIGN = 65, MULT_ASSIGN = 66, AT_ASSIGN = 67, DIV_ASSIGN = 68, 
    MOD_ASSIGN = 69, AND_ASSIGN = 70, OR_ASSIGN = 71, XOR_ASSIGN = 72, LEFT_SHIFT_ASSIGN = 73, 
    RIGHT_SHIFT_ASSIGN = 74, POWER_ASSIGN = 75, IDIV_ASSIGN = 76, SKIP_ = 77, 
    UNKNOWN_CHAR = 78, INDENT = 79, DEDENT = 80
  };

  enum {
    RuleFile_input = 0, RuleFuncdef = 1, RuleParameters = 2, RuleTypedargslist = 3, 
    RuleTfpdef = 4, RuleStmt = 5, RuleSimple_stmt = 6, RuleSmall_stmt = 7, 
    RuleExpr_stmt = 8, RuleAugassign = 9, RuleFlow_stmt = 10, RuleBreak_stmt = 11, 
    RuleContinue_stmt = 12, RuleReturn_stmt = 13, RuleCompound_stmt = 14, 
    RuleIf_stmt = 15, RuleWhile_stmt = 16, RuleSuite = 17, RuleTest = 18, 
    RuleOr_test = 19, RuleAnd_test = 20, RuleNot_test = 21, RuleComparison = 22, 
    RuleComp_op = 23, RuleArith_expr = 24, RuleTerm = 25, RuleFactor = 26, 
    RuleAtom_expr = 27, RuleTrailer = 28, RuleAtom = 29, RuleTestlist = 30, 
    RuleArglist = 31, RuleArgument = 32
  };

  Python3Parser(antlr4::TokenStream *input);
  ~Python3Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class File_inputContext;
  class FuncdefContext;
  class ParametersContext;
  class TypedargslistContext;
  class TfpdefContext;
  class StmtContext;
  class Simple_stmtContext;
  class Small_stmtContext;
  class Expr_stmtContext;
  class AugassignContext;
  class Flow_stmtContext;
  class Break_stmtContext;
  class Continue_stmtContext;
  class Return_stmtContext;
  class Compound_stmtContext;
  class If_stmtContext;
  class While_stmtContext;
  class SuiteContext;
  class TestContext;
  class Or_testContext;
  class And_testContext;
  class Not_testContext;
  class ComparisonContext;
  class Comp_opContext;
  class Arith_exprContext;
  class TermContext;
  class FactorContext;
  class Atom_exprContext;
  class TrailerContext;
  class AtomContext;
  class TestlistContext;
  class ArglistContext;
  class ArgumentContext; 

  class  File_inputContext : public antlr4::ParserRuleContext {
  public:
    File_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_inputContext* file_input();

  class  FuncdefContext : public antlr4::ParserRuleContext {
  public:
    FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *NAME();
    ParametersContext *parameters();
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncdefContext* funcdef();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    TypedargslistContext *typedargslist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  TypedargslistContext : public antlr4::ParserRuleContext {
  public:
    TypedargslistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TfpdefContext *> tfpdef();
    TfpdefContext* tfpdef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedargslistContext* typedargslist();

  class  TfpdefContext : public antlr4::ParserRuleContext {
  public:
    TfpdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TfpdefContext* tfpdef();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    Compound_stmtContext *compound_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Simple_stmtContext : public antlr4::ParserRuleContext {
  public:
    Simple_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Small_stmtContext *small_stmt();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_stmtContext* simple_stmt();

  class  Small_stmtContext : public antlr4::ParserRuleContext {
  public:
    Small_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_stmtContext *expr_stmt();
    Flow_stmtContext *flow_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Small_stmtContext* small_stmt();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestlistContext *> testlist();
    TestlistContext* testlist(size_t i);
    AugassignContext *augassign();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmtContext* expr_stmt();

  class  AugassignContext : public antlr4::ParserRuleContext {
  public:
    AugassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *IDIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AugassignContext* augassign();

  class  Flow_stmtContext : public antlr4::ParserRuleContext {
  public:
    Flow_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Break_stmtContext *break_stmt();
    Continue_stmtContext *continue_stmt();
    Return_stmtContext *return_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flow_stmtContext* flow_stmt();

  class  Break_stmtContext : public antlr4::ParserRuleContext {
  public:
    Break_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_stmtContext* break_stmt();

  class  Continue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Continue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_stmtContext* continue_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    TestlistContext *testlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_stmtContext *if_stmt();
    While_stmtContext *while_stmt();
    FuncdefContext *funcdef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_stmtContext* compound_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    TestContext *test();
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  SuiteContext : public antlr4::ParserRuleContext {
  public:
    SuiteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuiteContext* suite();

  class  TestContext : public antlr4::ParserRuleContext {
  public:
    TestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_testContext *or_test();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestContext* test();

  class  Or_testContext : public antlr4::ParserRuleContext {
  public:
    Or_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_testContext *> and_test();
    And_testContext* and_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_testContext* or_test();

  class  And_testContext : public antlr4::ParserRuleContext {
  public:
    And_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Not_testContext *> not_test();
    Not_testContext* not_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_testContext* and_test();

  class  Not_testContext : public antlr4::ParserRuleContext {
  public:
    Not_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    Not_testContext *not_test();
    ComparisonContext *comparison();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_testContext* not_test();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arith_exprContext *> arith_expr();
    Arith_exprContext* arith_expr(size_t i);
    std::vector<Comp_opContext *> comp_op();
    Comp_opContext* comp_op(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonContext* comparison();

  class  Comp_opContext : public antlr4::ParserRuleContext {
  public:
    Comp_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *GT_EQ();
    antlr4::tree::TerminalNode *LT_EQ();
    antlr4::tree::TerminalNode *NOT_EQ_2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_opContext* comp_op();

  class  Arith_exprContext : public antlr4::ParserRuleContext {
  public:
    Arith_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_exprContext* arith_expr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDIV();
    antlr4::tree::TerminalNode* IDIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MINUS();
    Atom_exprContext *atom_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  Atom_exprContext : public antlr4::ParserRuleContext {
  public:
    Atom_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    TrailerContext *trailer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_exprContext* atom_expr();

  class  TrailerContext : public antlr4::ParserRuleContext {
  public:
    TrailerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ArglistContext *arglist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailerContext* trailer();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    TestContext *test();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  TestlistContext : public antlr4::ParserRuleContext {
  public:
    TestlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestlistContext* testlist();

  class  ArglistContext : public antlr4::ParserRuleContext {
  public:
    ArglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArglistContext* arglist();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestContext *test();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

