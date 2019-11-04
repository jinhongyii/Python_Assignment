
// Generated from .\Python3.g4 by ANTLR 4.7.2


#include "Python3Listener.h"
#include "Python3Visitor.h"

#include "Python3Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Python3Parser::Python3Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Python3Parser::~Python3Parser() {
  delete _interpreter;
}

std::string Python3Parser::getGrammarFileName() const {
  return "Python3.g4";
}

const std::vector<std::string>& Python3Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Python3Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- File_inputContext ------------------------------------------------------------------

Python3Parser::File_inputContext::File_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::File_inputContext::EOF() {
  return getToken(Python3Parser::EOF, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::File_inputContext::NEWLINE() {
  return getTokens(Python3Parser::NEWLINE);
}

tree::TerminalNode* Python3Parser::File_inputContext::NEWLINE(size_t i) {
  return getToken(Python3Parser::NEWLINE, i);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::File_inputContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::File_inputContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::File_inputContext::getRuleIndex() const {
  return Python3Parser::RuleFile_input;
}

void Python3Parser::File_inputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_input(this);
}

void Python3Parser::File_inputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_input(this);
}


antlrcpp::Any Python3Parser::File_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFile_input(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::File_inputContext* Python3Parser::file_input() {
  File_inputContext *_localctx = _tracker.createInstance<File_inputContext>(_ctx, getState());
  enterRule(_localctx, 0, Python3Parser::RuleFile_input);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::DEF)
      | (1ULL << Python3Parser::RETURN)
      | (1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::WHILE)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::CONTINUE)
      | (1ULL << Python3Parser::BREAK)
      | (1ULL << Python3Parser::NEWLINE)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::ADD)
      | (1ULL << Python3Parser::MINUS))) != 0)) {
      setState(68);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::NEWLINE: {
          setState(66);
          match(Python3Parser::NEWLINE);
          break;
        }

        case Python3Parser::STRING:
        case Python3Parser::NUMBER:
        case Python3Parser::DEF:
        case Python3Parser::RETURN:
        case Python3Parser::IF:
        case Python3Parser::WHILE:
        case Python3Parser::NOT:
        case Python3Parser::NONE:
        case Python3Parser::TRUE:
        case Python3Parser::FALSE:
        case Python3Parser::CONTINUE:
        case Python3Parser::BREAK:
        case Python3Parser::NAME:
        case Python3Parser::OPEN_PAREN:
        case Python3Parser::ADD:
        case Python3Parser::MINUS: {
          setState(67);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(Python3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

Python3Parser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::FuncdefContext::DEF() {
  return getToken(Python3Parser::DEF, 0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

Python3Parser::ParametersContext* Python3Parser::FuncdefContext::parameters() {
  return getRuleContext<Python3Parser::ParametersContext>(0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::FuncdefContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}


size_t Python3Parser::FuncdefContext::getRuleIndex() const {
  return Python3Parser::RuleFuncdef;
}

void Python3Parser::FuncdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdef(this);
}

void Python3Parser::FuncdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdef(this);
}


antlrcpp::Any Python3Parser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FuncdefContext* Python3Parser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 2, Python3Parser::RuleFuncdef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(Python3Parser::DEF);
    setState(76);
    match(Python3Parser::NAME);
    setState(77);
    parameters();
    setState(78);
    match(Python3Parser::COLON);
    setState(79);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

Python3Parser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::ParametersContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::ParametersContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::TypedargslistContext* Python3Parser::ParametersContext::typedargslist() {
  return getRuleContext<Python3Parser::TypedargslistContext>(0);
}


size_t Python3Parser::ParametersContext::getRuleIndex() const {
  return Python3Parser::RuleParameters;
}

void Python3Parser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void Python3Parser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


antlrcpp::Any Python3Parser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ParametersContext* Python3Parser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, Python3Parser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(Python3Parser::OPEN_PAREN);
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::NAME) {
      setState(82);
      typedargslist();
    }
    setState(85);
    match(Python3Parser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedargslistContext ------------------------------------------------------------------

Python3Parser::TypedargslistContext::TypedargslistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TfpdefContext *> Python3Parser::TypedargslistContext::tfpdef() {
  return getRuleContexts<Python3Parser::TfpdefContext>();
}

Python3Parser::TfpdefContext* Python3Parser::TypedargslistContext::tfpdef(size_t i) {
  return getRuleContext<Python3Parser::TfpdefContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}

std::vector<Python3Parser::TestContext *> Python3Parser::TypedargslistContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::TypedargslistContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::TypedargslistContext::getRuleIndex() const {
  return Python3Parser::RuleTypedargslist;
}

void Python3Parser::TypedargslistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedargslist(this);
}

void Python3Parser::TypedargslistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedargslist(this);
}


antlrcpp::Any Python3Parser::TypedargslistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTypedargslist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TypedargslistContext* Python3Parser::typedargslist() {
  TypedargslistContext *_localctx = _tracker.createInstance<TypedargslistContext>(_ctx, getState());
  enterRule(_localctx, 6, Python3Parser::RuleTypedargslist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    tfpdef();
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASSIGN) {
      setState(88);
      match(Python3Parser::ASSIGN);
      setState(89);
      test();
    }
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(92);
      match(Python3Parser::COMMA);
      setState(93);
      tfpdef();
      setState(96);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::ASSIGN) {
        setState(94);
        match(Python3Parser::ASSIGN);
        setState(95);
        test();
      }
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TfpdefContext ------------------------------------------------------------------

Python3Parser::TfpdefContext::TfpdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::TfpdefContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}


size_t Python3Parser::TfpdefContext::getRuleIndex() const {
  return Python3Parser::RuleTfpdef;
}

void Python3Parser::TfpdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTfpdef(this);
}

void Python3Parser::TfpdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTfpdef(this);
}


antlrcpp::Any Python3Parser::TfpdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTfpdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TfpdefContext* Python3Parser::tfpdef() {
  TfpdefContext *_localctx = _tracker.createInstance<TfpdefContext>(_ctx, getState());
  enterRule(_localctx, 8, Python3Parser::RuleTfpdef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(Python3Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

Python3Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::StmtContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

Python3Parser::Compound_stmtContext* Python3Parser::StmtContext::compound_stmt() {
  return getRuleContext<Python3Parser::Compound_stmtContext>(0);
}


size_t Python3Parser::StmtContext::getRuleIndex() const {
  return Python3Parser::RuleStmt;
}

void Python3Parser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void Python3Parser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any Python3Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::StmtContext* Python3Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, Python3Parser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(105);
        simple_stmt();
        break;
      }

      case Python3Parser::DEF:
      case Python3Parser::IF:
      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(106);
        compound_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_stmtContext ------------------------------------------------------------------

Python3Parser::Simple_stmtContext::Simple_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Small_stmtContext* Python3Parser::Simple_stmtContext::small_stmt() {
  return getRuleContext<Python3Parser::Small_stmtContext>(0);
}

tree::TerminalNode* Python3Parser::Simple_stmtContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}


size_t Python3Parser::Simple_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSimple_stmt;
}

void Python3Parser::Simple_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_stmt(this);
}

void Python3Parser::Simple_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_stmt(this);
}


antlrcpp::Any Python3Parser::Simple_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSimple_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Simple_stmtContext* Python3Parser::simple_stmt() {
  Simple_stmtContext *_localctx = _tracker.createInstance<Simple_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, Python3Parser::RuleSimple_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    small_stmt();
    setState(110);
    match(Python3Parser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Small_stmtContext ------------------------------------------------------------------

Python3Parser::Small_stmtContext::Small_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Expr_stmtContext* Python3Parser::Small_stmtContext::expr_stmt() {
  return getRuleContext<Python3Parser::Expr_stmtContext>(0);
}

Python3Parser::Flow_stmtContext* Python3Parser::Small_stmtContext::flow_stmt() {
  return getRuleContext<Python3Parser::Flow_stmtContext>(0);
}


size_t Python3Parser::Small_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSmall_stmt;
}

void Python3Parser::Small_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmall_stmt(this);
}

void Python3Parser::Small_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmall_stmt(this);
}


antlrcpp::Any Python3Parser::Small_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSmall_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Small_stmtContext* Python3Parser::small_stmt() {
  Small_stmtContext *_localctx = _tracker.createInstance<Small_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, Python3Parser::RuleSmall_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(112);
        expr_stmt();
        break;
      }

      case Python3Parser::RETURN:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        flow_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_stmtContext ------------------------------------------------------------------

Python3Parser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestlistContext *> Python3Parser::Expr_stmtContext::testlist() {
  return getRuleContexts<Python3Parser::TestlistContext>();
}

Python3Parser::TestlistContext* Python3Parser::Expr_stmtContext::testlist(size_t i) {
  return getRuleContext<Python3Parser::TestlistContext>(i);
}

Python3Parser::AugassignContext* Python3Parser::Expr_stmtContext::augassign() {
  return getRuleContext<Python3Parser::AugassignContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::Expr_stmtContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::Expr_stmtContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}


size_t Python3Parser::Expr_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleExpr_stmt;
}

void Python3Parser::Expr_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt(this);
}

void Python3Parser::Expr_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt(this);
}


antlrcpp::Any Python3Parser::Expr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Expr_stmtContext* Python3Parser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, Python3Parser::RuleExpr_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    testlist();
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD_ASSIGN:
      case Python3Parser::SUB_ASSIGN:
      case Python3Parser::MULT_ASSIGN:
      case Python3Parser::DIV_ASSIGN:
      case Python3Parser::MOD_ASSIGN:
      case Python3Parser::IDIV_ASSIGN: {
        setState(117);
        augassign();
        setState(118);
        testlist();
        break;
      }

      case Python3Parser::NEWLINE:
      case Python3Parser::ASSIGN: {
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Python3Parser::ASSIGN) {
          setState(120);
          match(Python3Parser::ASSIGN);
          setState(121);
          testlist();
          setState(126);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AugassignContext ------------------------------------------------------------------

Python3Parser::AugassignContext::AugassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AugassignContext::ADD_ASSIGN() {
  return getToken(Python3Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::SUB_ASSIGN() {
  return getToken(Python3Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MULT_ASSIGN() {
  return getToken(Python3Parser::MULT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::DIV_ASSIGN() {
  return getToken(Python3Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::IDIV_ASSIGN() {
  return getToken(Python3Parser::IDIV_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MOD_ASSIGN() {
  return getToken(Python3Parser::MOD_ASSIGN, 0);
}


size_t Python3Parser::AugassignContext::getRuleIndex() const {
  return Python3Parser::RuleAugassign;
}

void Python3Parser::AugassignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAugassign(this);
}

void Python3Parser::AugassignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAugassign(this);
}


antlrcpp::Any Python3Parser::AugassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAugassign(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AugassignContext* Python3Parser::augassign() {
  AugassignContext *_localctx = _tracker.createInstance<AugassignContext>(_ctx, getState());
  enterRule(_localctx, 18, Python3Parser::RuleAugassign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _la = _input->LA(1);
    if (!(((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (Python3Parser::ADD_ASSIGN - 64))
      | (1ULL << (Python3Parser::SUB_ASSIGN - 64))
      | (1ULL << (Python3Parser::MULT_ASSIGN - 64))
      | (1ULL << (Python3Parser::DIV_ASSIGN - 64))
      | (1ULL << (Python3Parser::MOD_ASSIGN - 64))
      | (1ULL << (Python3Parser::IDIV_ASSIGN - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Flow_stmtContext ------------------------------------------------------------------

Python3Parser::Flow_stmtContext::Flow_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Break_stmtContext* Python3Parser::Flow_stmtContext::break_stmt() {
  return getRuleContext<Python3Parser::Break_stmtContext>(0);
}

Python3Parser::Continue_stmtContext* Python3Parser::Flow_stmtContext::continue_stmt() {
  return getRuleContext<Python3Parser::Continue_stmtContext>(0);
}

Python3Parser::Return_stmtContext* Python3Parser::Flow_stmtContext::return_stmt() {
  return getRuleContext<Python3Parser::Return_stmtContext>(0);
}


size_t Python3Parser::Flow_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleFlow_stmt;
}

void Python3Parser::Flow_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlow_stmt(this);
}

void Python3Parser::Flow_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlow_stmt(this);
}


antlrcpp::Any Python3Parser::Flow_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFlow_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Flow_stmtContext* Python3Parser::flow_stmt() {
  Flow_stmtContext *_localctx = _tracker.createInstance<Flow_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, Python3Parser::RuleFlow_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(131);
        break_stmt();
        break;
      }

      case Python3Parser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(132);
        continue_stmt();
        break;
      }

      case Python3Parser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(133);
        return_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_stmtContext ------------------------------------------------------------------

Python3Parser::Break_stmtContext::Break_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Break_stmtContext::BREAK() {
  return getToken(Python3Parser::BREAK, 0);
}


size_t Python3Parser::Break_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleBreak_stmt;
}

void Python3Parser::Break_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_stmt(this);
}

void Python3Parser::Break_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_stmt(this);
}


antlrcpp::Any Python3Parser::Break_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitBreak_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Break_stmtContext* Python3Parser::break_stmt() {
  Break_stmtContext *_localctx = _tracker.createInstance<Break_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, Python3Parser::RuleBreak_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(Python3Parser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_stmtContext ------------------------------------------------------------------

Python3Parser::Continue_stmtContext::Continue_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Continue_stmtContext::CONTINUE() {
  return getToken(Python3Parser::CONTINUE, 0);
}


size_t Python3Parser::Continue_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleContinue_stmt;
}

void Python3Parser::Continue_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue_stmt(this);
}

void Python3Parser::Continue_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue_stmt(this);
}


antlrcpp::Any Python3Parser::Continue_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitContinue_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Continue_stmtContext* Python3Parser::continue_stmt() {
  Continue_stmtContext *_localctx = _tracker.createInstance<Continue_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, Python3Parser::RuleContinue_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(Python3Parser::CONTINUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

Python3Parser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Return_stmtContext::RETURN() {
  return getToken(Python3Parser::RETURN, 0);
}

Python3Parser::TestlistContext* Python3Parser::Return_stmtContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}


size_t Python3Parser::Return_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleReturn_stmt;
}

void Python3Parser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void Python3Parser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}


antlrcpp::Any Python3Parser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Return_stmtContext* Python3Parser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, Python3Parser::RuleReturn_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(Python3Parser::RETURN);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::ADD)
      | (1ULL << Python3Parser::MINUS))) != 0)) {
      setState(141);
      testlist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

Python3Parser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::If_stmtContext* Python3Parser::Compound_stmtContext::if_stmt() {
  return getRuleContext<Python3Parser::If_stmtContext>(0);
}

Python3Parser::While_stmtContext* Python3Parser::Compound_stmtContext::while_stmt() {
  return getRuleContext<Python3Parser::While_stmtContext>(0);
}

Python3Parser::FuncdefContext* Python3Parser::Compound_stmtContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}


size_t Python3Parser::Compound_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleCompound_stmt;
}

void Python3Parser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void Python3Parser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}


antlrcpp::Any Python3Parser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Compound_stmtContext* Python3Parser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Python3Parser::RuleCompound_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(144);
        if_stmt();
        break;
      }

      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(145);
        while_stmt();
        break;
      }

      case Python3Parser::DEF: {
        enterOuterAlt(_localctx, 3);
        setState(146);
        funcdef();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

Python3Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::If_stmtContext::IF() {
  return getToken(Python3Parser::IF, 0);
}

std::vector<Python3Parser::TestContext *> Python3Parser::If_stmtContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::If_stmtContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::If_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::If_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::If_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::ELIF() {
  return getTokens(Python3Parser::ELIF);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELIF(size_t i) {
  return getToken(Python3Parser::ELIF, i);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::If_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleIf_stmt;
}

void Python3Parser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void Python3Parser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


antlrcpp::Any Python3Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::If_stmtContext* Python3Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, Python3Parser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(Python3Parser::IF);
    setState(150);
    test();
    setState(151);
    match(Python3Parser::COLON);
    setState(152);
    suite();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ELIF) {
      setState(153);
      match(Python3Parser::ELIF);
      setState(154);
      test();
      setState(155);
      match(Python3Parser::COLON);
      setState(156);
      suite();
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(163);
      match(Python3Parser::ELSE);
      setState(164);
      match(Python3Parser::COLON);
      setState(165);
      suite();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

Python3Parser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::While_stmtContext::WHILE() {
  return getToken(Python3Parser::WHILE, 0);
}

Python3Parser::TestContext* Python3Parser::While_stmtContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

tree::TerminalNode* Python3Parser::While_stmtContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::While_stmtContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}


size_t Python3Parser::While_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleWhile_stmt;
}

void Python3Parser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void Python3Parser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}


antlrcpp::Any Python3Parser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::While_stmtContext* Python3Parser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, Python3Parser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(Python3Parser::WHILE);
    setState(169);
    test();
    setState(170);
    match(Python3Parser::COLON);
    setState(171);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuiteContext ------------------------------------------------------------------

Python3Parser::SuiteContext::SuiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::SuiteContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

tree::TerminalNode* Python3Parser::SuiteContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::INDENT() {
  return getToken(Python3Parser::INDENT, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::DEDENT() {
  return getToken(Python3Parser::DEDENT, 0);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::SuiteContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::SuiteContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::SuiteContext::getRuleIndex() const {
  return Python3Parser::RuleSuite;
}

void Python3Parser::SuiteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuite(this);
}

void Python3Parser::SuiteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuite(this);
}


antlrcpp::Any Python3Parser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SuiteContext* Python3Parser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 34, Python3Parser::RuleSuite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        simple_stmt();
        break;
      }

      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(174);
        match(Python3Parser::NEWLINE);
        setState(175);
        match(Python3Parser::INDENT);
        setState(177); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(176);
          stmt();
          setState(179); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
          | (1ULL << Python3Parser::NUMBER)
          | (1ULL << Python3Parser::DEF)
          | (1ULL << Python3Parser::RETURN)
          | (1ULL << Python3Parser::IF)
          | (1ULL << Python3Parser::WHILE)
          | (1ULL << Python3Parser::NOT)
          | (1ULL << Python3Parser::NONE)
          | (1ULL << Python3Parser::TRUE)
          | (1ULL << Python3Parser::FALSE)
          | (1ULL << Python3Parser::CONTINUE)
          | (1ULL << Python3Parser::BREAK)
          | (1ULL << Python3Parser::NAME)
          | (1ULL << Python3Parser::OPEN_PAREN)
          | (1ULL << Python3Parser::ADD)
          | (1ULL << Python3Parser::MINUS))) != 0));
        setState(181);
        match(Python3Parser::DEDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestContext ------------------------------------------------------------------

Python3Parser::TestContext::TestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Or_testContext* Python3Parser::TestContext::or_test() {
  return getRuleContext<Python3Parser::Or_testContext>(0);
}


size_t Python3Parser::TestContext::getRuleIndex() const {
  return Python3Parser::RuleTest;
}

void Python3Parser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}

void Python3Parser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}


antlrcpp::Any Python3Parser::TestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTest(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TestContext* Python3Parser::test() {
  TestContext *_localctx = _tracker.createInstance<TestContext>(_ctx, getState());
  enterRule(_localctx, 36, Python3Parser::RuleTest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    or_test();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_testContext ------------------------------------------------------------------

Python3Parser::Or_testContext::Or_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::And_testContext *> Python3Parser::Or_testContext::and_test() {
  return getRuleContexts<Python3Parser::And_testContext>();
}

Python3Parser::And_testContext* Python3Parser::Or_testContext::and_test(size_t i) {
  return getRuleContext<Python3Parser::And_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Or_testContext::OR() {
  return getTokens(Python3Parser::OR);
}

tree::TerminalNode* Python3Parser::Or_testContext::OR(size_t i) {
  return getToken(Python3Parser::OR, i);
}


size_t Python3Parser::Or_testContext::getRuleIndex() const {
  return Python3Parser::RuleOr_test;
}

void Python3Parser::Or_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_test(this);
}

void Python3Parser::Or_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_test(this);
}


antlrcpp::Any Python3Parser::Or_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitOr_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Or_testContext* Python3Parser::or_test() {
  Or_testContext *_localctx = _tracker.createInstance<Or_testContext>(_ctx, getState());
  enterRule(_localctx, 38, Python3Parser::RuleOr_test);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    and_test();
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR) {
      setState(188);
      match(Python3Parser::OR);
      setState(189);
      and_test();
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_testContext ------------------------------------------------------------------

Python3Parser::And_testContext::And_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Not_testContext *> Python3Parser::And_testContext::not_test() {
  return getRuleContexts<Python3Parser::Not_testContext>();
}

Python3Parser::Not_testContext* Python3Parser::And_testContext::not_test(size_t i) {
  return getRuleContext<Python3Parser::Not_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::And_testContext::AND() {
  return getTokens(Python3Parser::AND);
}

tree::TerminalNode* Python3Parser::And_testContext::AND(size_t i) {
  return getToken(Python3Parser::AND, i);
}


size_t Python3Parser::And_testContext::getRuleIndex() const {
  return Python3Parser::RuleAnd_test;
}

void Python3Parser::And_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_test(this);
}

void Python3Parser::And_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_test(this);
}


antlrcpp::Any Python3Parser::And_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAnd_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::And_testContext* Python3Parser::and_test() {
  And_testContext *_localctx = _tracker.createInstance<And_testContext>(_ctx, getState());
  enterRule(_localctx, 40, Python3Parser::RuleAnd_test);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    not_test();
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND) {
      setState(196);
      match(Python3Parser::AND);
      setState(197);
      not_test();
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Not_testContext ------------------------------------------------------------------

Python3Parser::Not_testContext::Not_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Not_testContext::NOT() {
  return getToken(Python3Parser::NOT, 0);
}

Python3Parser::Not_testContext* Python3Parser::Not_testContext::not_test() {
  return getRuleContext<Python3Parser::Not_testContext>(0);
}

Python3Parser::ComparisonContext* Python3Parser::Not_testContext::comparison() {
  return getRuleContext<Python3Parser::ComparisonContext>(0);
}


size_t Python3Parser::Not_testContext::getRuleIndex() const {
  return Python3Parser::RuleNot_test;
}

void Python3Parser::Not_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot_test(this);
}

void Python3Parser::Not_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot_test(this);
}


antlrcpp::Any Python3Parser::Not_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitNot_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Not_testContext* Python3Parser::not_test() {
  Not_testContext *_localctx = _tracker.createInstance<Not_testContext>(_ctx, getState());
  enterRule(_localctx, 42, Python3Parser::RuleNot_test);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(203);
        match(Python3Parser::NOT);
        setState(204);
        not_test();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(205);
        comparison();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

Python3Parser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Arith_exprContext *> Python3Parser::ComparisonContext::arith_expr() {
  return getRuleContexts<Python3Parser::Arith_exprContext>();
}

Python3Parser::Arith_exprContext* Python3Parser::ComparisonContext::arith_expr(size_t i) {
  return getRuleContext<Python3Parser::Arith_exprContext>(i);
}

std::vector<Python3Parser::Comp_opContext *> Python3Parser::ComparisonContext::comp_op() {
  return getRuleContexts<Python3Parser::Comp_opContext>();
}

Python3Parser::Comp_opContext* Python3Parser::ComparisonContext::comp_op(size_t i) {
  return getRuleContext<Python3Parser::Comp_opContext>(i);
}


size_t Python3Parser::ComparisonContext::getRuleIndex() const {
  return Python3Parser::RuleComparison;
}

void Python3Parser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void Python3Parser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}


antlrcpp::Any Python3Parser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ComparisonContext* Python3Parser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 44, Python3Parser::RuleComparison);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    arith_expr();
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::LESS_THAN)
      | (1ULL << Python3Parser::GREATER_THAN)
      | (1ULL << Python3Parser::EQUALS)
      | (1ULL << Python3Parser::GT_EQ)
      | (1ULL << Python3Parser::LT_EQ)
      | (1ULL << Python3Parser::NOT_EQ_2))) != 0)) {
      setState(209);
      comp_op();
      setState(210);
      arith_expr();
      setState(216);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comp_opContext ------------------------------------------------------------------

Python3Parser::Comp_opContext::Comp_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Comp_opContext::LESS_THAN() {
  return getToken(Python3Parser::LESS_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GREATER_THAN() {
  return getToken(Python3Parser::GREATER_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::EQUALS() {
  return getToken(Python3Parser::EQUALS, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GT_EQ() {
  return getToken(Python3Parser::GT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::LT_EQ() {
  return getToken(Python3Parser::LT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::NOT_EQ_2() {
  return getToken(Python3Parser::NOT_EQ_2, 0);
}


size_t Python3Parser::Comp_opContext::getRuleIndex() const {
  return Python3Parser::RuleComp_op;
}

void Python3Parser::Comp_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_op(this);
}

void Python3Parser::Comp_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_op(this);
}


antlrcpp::Any Python3Parser::Comp_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComp_op(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_opContext* Python3Parser::comp_op() {
  Comp_opContext *_localctx = _tracker.createInstance<Comp_opContext>(_ctx, getState());
  enterRule(_localctx, 46, Python3Parser::RuleComp_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::LESS_THAN)
      | (1ULL << Python3Parser::GREATER_THAN)
      | (1ULL << Python3Parser::EQUALS)
      | (1ULL << Python3Parser::GT_EQ)
      | (1ULL << Python3Parser::LT_EQ)
      | (1ULL << Python3Parser::NOT_EQ_2))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arith_exprContext ------------------------------------------------------------------

Python3Parser::Arith_exprContext::Arith_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TermContext *> Python3Parser::Arith_exprContext::term() {
  return getRuleContexts<Python3Parser::TermContext>();
}

Python3Parser::TermContext* Python3Parser::Arith_exprContext::term(size_t i) {
  return getRuleContext<Python3Parser::TermContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Arith_exprContext::ADD() {
  return getTokens(Python3Parser::ADD);
}

tree::TerminalNode* Python3Parser::Arith_exprContext::ADD(size_t i) {
  return getToken(Python3Parser::ADD, i);
}

std::vector<tree::TerminalNode *> Python3Parser::Arith_exprContext::MINUS() {
  return getTokens(Python3Parser::MINUS);
}

tree::TerminalNode* Python3Parser::Arith_exprContext::MINUS(size_t i) {
  return getToken(Python3Parser::MINUS, i);
}


size_t Python3Parser::Arith_exprContext::getRuleIndex() const {
  return Python3Parser::RuleArith_expr;
}

void Python3Parser::Arith_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_expr(this);
}

void Python3Parser::Arith_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_expr(this);
}


antlrcpp::Any Python3Parser::Arith_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArith_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Arith_exprContext* Python3Parser::arith_expr() {
  Arith_exprContext *_localctx = _tracker.createInstance<Arith_exprContext>(_ctx, getState());
  enterRule(_localctx, 48, Python3Parser::RuleArith_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    term();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS) {
      setState(220);
      _la = _input->LA(1);
      if (!(_la == Python3Parser::ADD

      || _la == Python3Parser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(221);
      term();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

Python3Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::FactorContext *> Python3Parser::TermContext::factor() {
  return getRuleContexts<Python3Parser::FactorContext>();
}

Python3Parser::FactorContext* Python3Parser::TermContext::factor(size_t i) {
  return getRuleContext<Python3Parser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::STAR() {
  return getTokens(Python3Parser::STAR);
}

tree::TerminalNode* Python3Parser::TermContext::STAR(size_t i) {
  return getToken(Python3Parser::STAR, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::DIV() {
  return getTokens(Python3Parser::DIV);
}

tree::TerminalNode* Python3Parser::TermContext::DIV(size_t i) {
  return getToken(Python3Parser::DIV, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::IDIV() {
  return getTokens(Python3Parser::IDIV);
}

tree::TerminalNode* Python3Parser::TermContext::IDIV(size_t i) {
  return getToken(Python3Parser::IDIV, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::MOD() {
  return getTokens(Python3Parser::MOD);
}

tree::TerminalNode* Python3Parser::TermContext::MOD(size_t i) {
  return getToken(Python3Parser::MOD, i);
}


size_t Python3Parser::TermContext::getRuleIndex() const {
  return Python3Parser::RuleTerm;
}

void Python3Parser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void Python3Parser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


antlrcpp::Any Python3Parser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TermContext* Python3Parser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 50, Python3Parser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    factor();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::DIV)
      | (1ULL << Python3Parser::MOD)
      | (1ULL << Python3Parser::IDIV))) != 0)) {
      setState(228);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Python3Parser::STAR)
        | (1ULL << Python3Parser::DIV)
        | (1ULL << Python3Parser::MOD)
        | (1ULL << Python3Parser::IDIV))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(229);
      factor();
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

Python3Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::FactorContext* Python3Parser::FactorContext::factor() {
  return getRuleContext<Python3Parser::FactorContext>(0);
}

tree::TerminalNode* Python3Parser::FactorContext::ADD() {
  return getToken(Python3Parser::ADD, 0);
}

tree::TerminalNode* Python3Parser::FactorContext::MINUS() {
  return getToken(Python3Parser::MINUS, 0);
}

Python3Parser::Atom_exprContext* Python3Parser::FactorContext::atom_expr() {
  return getRuleContext<Python3Parser::Atom_exprContext>(0);
}


size_t Python3Parser::FactorContext::getRuleIndex() const {
  return Python3Parser::RuleFactor;
}

void Python3Parser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void Python3Parser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


antlrcpp::Any Python3Parser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FactorContext* Python3Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 52, Python3Parser::RuleFactor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(235);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::ADD

        || _la == Python3Parser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(236);
        factor();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN: {
        enterOuterAlt(_localctx, 2);
        setState(237);
        atom_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_exprContext ------------------------------------------------------------------

Python3Parser::Atom_exprContext::Atom_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::AtomContext* Python3Parser::Atom_exprContext::atom() {
  return getRuleContext<Python3Parser::AtomContext>(0);
}

Python3Parser::TrailerContext* Python3Parser::Atom_exprContext::trailer() {
  return getRuleContext<Python3Parser::TrailerContext>(0);
}


size_t Python3Parser::Atom_exprContext::getRuleIndex() const {
  return Python3Parser::RuleAtom_expr;
}

void Python3Parser::Atom_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_expr(this);
}

void Python3Parser::Atom_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_expr(this);
}


antlrcpp::Any Python3Parser::Atom_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAtom_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Atom_exprContext* Python3Parser::atom_expr() {
  Atom_exprContext *_localctx = _tracker.createInstance<Atom_exprContext>(_ctx, getState());
  enterRule(_localctx, 54, Python3Parser::RuleAtom_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    atom();
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::OPEN_PAREN) {
      setState(241);
      trailer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailerContext ------------------------------------------------------------------

Python3Parser::TrailerContext::TrailerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::TrailerContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::TrailerContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::TrailerContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}


size_t Python3Parser::TrailerContext::getRuleIndex() const {
  return Python3Parser::RuleTrailer;
}

void Python3Parser::TrailerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailer(this);
}

void Python3Parser::TrailerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailer(this);
}


antlrcpp::Any Python3Parser::TrailerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTrailer(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TrailerContext* Python3Parser::trailer() {
  TrailerContext *_localctx = _tracker.createInstance<TrailerContext>(_ctx, getState());
  enterRule(_localctx, 56, Python3Parser::RuleTrailer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(Python3Parser::OPEN_PAREN);
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::ADD)
      | (1ULL << Python3Parser::MINUS))) != 0)) {
      setState(245);
      arglist();
    }
    setState(248);
    match(Python3Parser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

Python3Parser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AtomContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::NUMBER() {
  return getToken(Python3Parser::NUMBER, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::NONE() {
  return getToken(Python3Parser::NONE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::TRUE() {
  return getToken(Python3Parser::TRUE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::FALSE() {
  return getToken(Python3Parser::FALSE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::TestContext* Python3Parser::AtomContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

tree::TerminalNode* Python3Parser::AtomContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::AtomContext::STRING() {
  return getTokens(Python3Parser::STRING);
}

tree::TerminalNode* Python3Parser::AtomContext::STRING(size_t i) {
  return getToken(Python3Parser::STRING, i);
}


size_t Python3Parser::AtomContext::getRuleIndex() const {
  return Python3Parser::RuleAtom;
}

void Python3Parser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void Python3Parser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any Python3Parser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AtomContext* Python3Parser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 58, Python3Parser::RuleAtom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NAME: {
        setState(250);
        match(Python3Parser::NAME);
        break;
      }

      case Python3Parser::NUMBER: {
        setState(251);
        match(Python3Parser::NUMBER);
        break;
      }

      case Python3Parser::STRING: {
        setState(253); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(252);
          match(Python3Parser::STRING);
          setState(255); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::STRING);
        break;
      }

      case Python3Parser::NONE: {
        setState(257);
        match(Python3Parser::NONE);
        break;
      }

      case Python3Parser::TRUE: {
        setState(258);
        match(Python3Parser::TRUE);
        break;
      }

      case Python3Parser::FALSE: {
        setState(259);
        match(Python3Parser::FALSE);
        break;
      }

      case Python3Parser::OPEN_PAREN: {
        setState(260);
        match(Python3Parser::OPEN_PAREN);
        setState(261);
        test();
        setState(262);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestlistContext ------------------------------------------------------------------

Python3Parser::TestlistContext::TestlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::TestlistContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::TestlistContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TestlistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::TestlistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::TestlistContext::getRuleIndex() const {
  return Python3Parser::RuleTestlist;
}

void Python3Parser::TestlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestlist(this);
}

void Python3Parser::TestlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestlist(this);
}


antlrcpp::Any Python3Parser::TestlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTestlist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TestlistContext* Python3Parser::testlist() {
  TestlistContext *_localctx = _tracker.createInstance<TestlistContext>(_ctx, getState());
  enterRule(_localctx, 60, Python3Parser::RuleTestlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(266);
    test();
    setState(271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(267);
        match(Python3Parser::COMMA);
        setState(268);
        test(); 
      }
      setState(273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(274);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArglistContext ------------------------------------------------------------------

Python3Parser::ArglistContext::ArglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ArgumentContext *> Python3Parser::ArglistContext::argument() {
  return getRuleContexts<Python3Parser::ArgumentContext>();
}

Python3Parser::ArgumentContext* Python3Parser::ArglistContext::argument(size_t i) {
  return getRuleContext<Python3Parser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::ArglistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::ArglistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::ArglistContext::getRuleIndex() const {
  return Python3Parser::RuleArglist;
}

void Python3Parser::ArglistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArglist(this);
}

void Python3Parser::ArglistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArglist(this);
}


antlrcpp::Any Python3Parser::ArglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArglist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArglistContext* Python3Parser::arglist() {
  ArglistContext *_localctx = _tracker.createInstance<ArglistContext>(_ctx, getState());
  enterRule(_localctx, 62, Python3Parser::RuleArglist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(277);
    argument();
    setState(282);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(278);
        match(Python3Parser::COMMA);
        setState(279);
        argument(); 
      }
      setState(284);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(286);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(285);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

Python3Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::TestContext* Python3Parser::ArgumentContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::ASSIGN() {
  return getToken(Python3Parser::ASSIGN, 0);
}


size_t Python3Parser::ArgumentContext::getRuleIndex() const {
  return Python3Parser::RuleArgument;
}

void Python3Parser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void Python3Parser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any Python3Parser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArgumentContext* Python3Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 64, Python3Parser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(288);
      test();
      break;
    }

    case 2: {
      setState(289);
      match(Python3Parser::NAME);
      setState(290);
      match(Python3Parser::ASSIGN);
      setState(291);
      test();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Python3Parser::_decisionToDFA;
atn::PredictionContextCache Python3Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Python3Parser::_atn;
std::vector<uint16_t> Python3Parser::_serializedATN;

std::vector<std::string> Python3Parser::_ruleNames = {
  "file_input", "funcdef", "parameters", "typedargslist", "tfpdef", "stmt", 
  "simple_stmt", "small_stmt", "expr_stmt", "augassign", "flow_stmt", "break_stmt", 
  "continue_stmt", "return_stmt", "compound_stmt", "if_stmt", "while_stmt", 
  "suite", "test", "or_test", "and_test", "not_test", "comparison", "comp_op", 
  "arith_expr", "term", "factor", "atom_expr", "trailer", "atom", "testlist", 
  "arglist", "argument"
};

std::vector<std::string> Python3Parser::_literalNames = {
  "", "", "", "", "'def'", "'return'", "'if'", "'elif'", "'else'", "'while'", 
  "'for'", "'in'", "'or'", "'and'", "'not'", "'None'", "'True'", "'False'", 
  "'continue'", "'break'", "", "", "", "", "", "", "", "", "", "", "'.'", 
  "'...'", "'*'", "'('", "')'", "','", "':'", "';'", "'**'", "'='", "'['", 
  "']'", "'|'", "'^'", "'&'", "'<<'", "'>>'", "'+'", "'-'", "'/'", "'%'", 
  "'//'", "'~'", "'{'", "'}'", "'<'", "'>'", "'=='", "'>='", "'<='", "'<>'", 
  "'!='", "'@'", "'->'", "'+='", "'-='", "'*='", "'@='", "'/='", "'%='", 
  "'&='", "'|='", "'^='", "'<<='", "'>>='", "'**='", "'//='"
};

std::vector<std::string> Python3Parser::_symbolicNames = {
  "", "STRING", "NUMBER", "INTEGER", "DEF", "RETURN", "IF", "ELIF", "ELSE", 
  "WHILE", "FOR", "IN", "OR", "AND", "NOT", "NONE", "TRUE", "FALSE", "CONTINUE", 
  "BREAK", "NEWLINE", "NAME", "STRING_LITERAL", "BYTES_LITERAL", "DECIMAL_INTEGER", 
  "OCT_INTEGER", "HEX_INTEGER", "BIN_INTEGER", "FLOAT_NUMBER", "IMAG_NUMBER", 
  "DOT", "ELLIPSIS", "STAR", "OPEN_PAREN", "CLOSE_PAREN", "COMMA", "COLON", 
  "SEMI_COLON", "POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", "OR_OP", 
  "XOR", "AND_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", "DIV", "MOD", 
  "IDIV", "NOT_OP", "OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", "GREATER_THAN", 
  "EQUALS", "GT_EQ", "LT_EQ", "NOT_EQ_1", "NOT_EQ_2", "AT", "ARROW", "ADD_ASSIGN", 
  "SUB_ASSIGN", "MULT_ASSIGN", "AT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", 
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", 
  "POWER_ASSIGN", "IDIV_ASSIGN", "SKIP_", "UNKNOWN_CHAR", "INDENT", "DEDENT"
};

dfa::Vocabulary Python3Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Python3Parser::_tokenNames;

Python3Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x52, 0x129, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x47, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x4a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x56, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x5d, 
    0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x63, 0xa, 
    0x5, 0x7, 0x5, 0x65, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x68, 0xb, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6e, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x75, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7d, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x80, 0xb, 0xa, 0x5, 0xa, 0x82, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x89, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x91, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x96, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xa1, 0xa, 0x11, 0xc, 
    0x11, 0xe, 0x11, 0xa4, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xa9, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0xb4, 0xa, 
    0x13, 0xd, 0x13, 0xe, 0x13, 0xb5, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xba, 
    0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 
    0x15, 0xc1, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xc4, 0xb, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xc9, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0xcc, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xd1, 0xa, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0xd7, 0xa, 
    0x18, 0xc, 0x18, 0xe, 0x18, 0xda, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0xe1, 0xa, 0x1a, 0xc, 0x1a, 0xe, 
    0x1a, 0xe4, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0xe9, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0xec, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0xf1, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0xf5, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0xf9, 0xa, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x6, 0x1f, 0x100, 
    0xa, 0x1f, 0xd, 0x1f, 0xe, 0x1f, 0x101, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x10b, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x110, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x113, 0xb, 0x20, 0x3, 0x20, 0x5, 0x20, 0x116, 0xa, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x11b, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x11e, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 0x121, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x127, 0xa, 0x22, 
    0x3, 0x22, 0x2, 0x2, 0x23, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x2, 0x6, 0x5, 0x2, 0x42, 0x44, 0x46, 0x47, 0x4e, 0x4e, 0x4, 0x2, 
    0x39, 0x3d, 0x3f, 0x3f, 0x3, 0x2, 0x31, 0x32, 0x4, 0x2, 0x22, 0x22, 
    0x33, 0x35, 0x2, 0x12f, 0x2, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x8, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x69, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x74, 0x3, 0x2, 0x2, 0x2, 0x12, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x83, 0x3, 0x2, 0x2, 0x2, 0x16, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x97, 0x3, 0x2, 0x2, 0x2, 0x22, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x30, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x38, 0xf2, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x117, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x7, 0x16, 0x2, 0x2, 0x45, 0x47, 
    0x5, 0xc, 0x7, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x2, 0x2, 0x3, 
    0x4c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x6, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0x17, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x6, 0x4, 0x2, 0x50, 0x51, 
    0x7, 0x26, 0x2, 0x2, 0x51, 0x52, 0x5, 0x24, 0x13, 0x2, 0x52, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x55, 0x7, 0x23, 0x2, 0x2, 0x54, 0x56, 0x5, 0x8, 
    0x5, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x24, 0x2, 0x2, 
    0x58, 0x7, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5a, 
    0x5b, 0x7, 0x29, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x26, 0x14, 0x2, 0x5c, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x25, 0x2, 0x2, 0x5f, 0x62, 0x5, 0xa, 
    0x6, 0x2, 0x60, 0x61, 0x7, 0x29, 0x2, 0x2, 0x61, 0x63, 0x5, 0x26, 0x14, 
    0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x9, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x17, 0x2, 0x2, 0x6a, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6e, 0x5, 0xe, 0x8, 0x2, 0x6c, 0x6e, 0x5, 0x1e, 0x10, 
    0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x10, 0x9, 0x2, 0x70, 
    0x71, 0x7, 0x16, 0x2, 0x2, 0x71, 0xf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 
    0x5, 0x12, 0xa, 0x2, 0x73, 0x75, 0x5, 0x16, 0xc, 0x2, 0x74, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x81, 0x5, 0x3e, 0x20, 0x2, 0x77, 0x78, 0x5, 0x14, 0xb, 
    0x2, 0x78, 0x79, 0x5, 0x3e, 0x20, 0x2, 0x79, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x7, 0x29, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x3e, 0x20, 0x2, 0x7c, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x81, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x84, 0x9, 0x2, 0x2, 0x2, 0x84, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x89, 0x5, 0x18, 0xd, 0x2, 0x86, 0x89, 0x5, 0x1a, 0xe, 0x2, 0x87, 
    0x89, 0x5, 0x1c, 0xf, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x15, 0x2, 0x2, 0x8b, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8d, 0x7, 0x14, 0x2, 0x2, 0x8d, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x90, 0x7, 0x7, 0x2, 0x2, 0x8f, 0x91, 0x5, 0x3e, 0x20, 0x2, 
    0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x96, 0x5, 0x20, 0x11, 0x2, 0x93, 0x96, 
    0x5, 0x22, 0x12, 0x2, 0x94, 0x96, 0x5, 0x4, 0x3, 0x2, 0x95, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x8, 0x2, 
    0x2, 0x98, 0x99, 0x5, 0x26, 0x14, 0x2, 0x99, 0x9a, 0x7, 0x26, 0x2, 0x2, 
    0x9a, 0xa2, 0x5, 0x24, 0x13, 0x2, 0x9b, 0x9c, 0x7, 0x9, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0x26, 0x14, 0x2, 0x9d, 0x9e, 0x7, 0x26, 0x2, 0x2, 0x9e, 0x9f, 
    0x5, 0x24, 0x13, 0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0xa, 0x2, 0x2, 
    0xa6, 0xa7, 0x7, 0x26, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x24, 0x13, 0x2, 0xa8, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0xb, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0x26, 0x14, 0x2, 0xac, 0xad, 0x7, 0x26, 0x2, 0x2, 0xad, 0xae, 0x5, 0x24, 
    0x13, 0x2, 0xae, 0x23, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xba, 0x5, 0xe, 0x8, 
    0x2, 0xb0, 0xb1, 0x7, 0x16, 0x2, 0x2, 0xb1, 0xb3, 0x7, 0x51, 0x2, 0x2, 
    0xb2, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 
    0x52, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xba, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbc, 0x5, 0x28, 0x15, 0x2, 0xbc, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xc2, 0x5, 0x2a, 0x16, 0x2, 0xbe, 0xbf, 0x7, 0xe, 0x2, 0x2, 0xbf, 
    0xc1, 0x5, 0x2a, 0x16, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0x29, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xca, 0x5, 0x2c, 0x17, 0x2, 0xc6, 0xc7, 0x7, 0xf, 0x2, 
    0x2, 0xc7, 0xc9, 0x5, 0x2c, 0x17, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x10, 0x2, 0x2, 0xce, 0xd1, 0x5, 
    0x2c, 0x17, 0x2, 0xcf, 0xd1, 0x5, 0x2e, 0x18, 0x2, 0xd0, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd8, 0x5, 0x32, 0x1a, 0x2, 0xd3, 0xd4, 0x5, 0x30, 0x19, 
    0x2, 0xd4, 0xd5, 0x5, 0x32, 0x1a, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x9, 
    0x3, 0x2, 0x2, 0xdc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe2, 0x5, 0x34, 
    0x1b, 0x2, 0xde, 0xdf, 0x9, 0x4, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x34, 0x1b, 
    0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xea, 
    0x5, 0x36, 0x1c, 0x2, 0xe6, 0xe7, 0x9, 0x5, 0x2, 0x2, 0xe7, 0xe9, 0x5, 
    0x36, 0x1c, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0x35, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xee, 0x9, 0x4, 0x2, 0x2, 0xee, 0xf1, 0x5, 0x36, 0x1c, 0x2, 0xef, 
    0xf1, 0x5, 0x38, 0x1d, 0x2, 0xf0, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0x37, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 0x5, 
    0x3c, 0x1f, 0x2, 0xf3, 0xf5, 0x5, 0x3a, 0x1e, 0x2, 0xf4, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf8, 0x7, 0x23, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x40, 0x21, 
    0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x24, 0x2, 0x2, 0xfb, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x10b, 0x7, 0x17, 0x2, 0x2, 0xfd, 0x10b, 
    0x7, 0x4, 0x2, 0x2, 0xfe, 0x100, 0x7, 0x3, 0x2, 0x2, 0xff, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x10b, 0x7, 0x11, 0x2, 0x2, 0x104, 0x10b, 0x7, 0x12, 
    0x2, 0x2, 0x105, 0x10b, 0x7, 0x13, 0x2, 0x2, 0x106, 0x107, 0x7, 0x23, 
    0x2, 0x2, 0x107, 0x108, 0x5, 0x26, 0x14, 0x2, 0x108, 0x109, 0x7, 0x24, 
    0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10a, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x10a, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x111, 0x5, 0x26, 0x14, 0x2, 
    0x10d, 0x10e, 0x7, 0x25, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x26, 0x14, 0x2, 
    0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x114, 0x116, 0x7, 0x25, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x11c, 0x5, 0x42, 0x22, 0x2, 0x118, 0x119, 0x7, 0x25, 0x2, 0x2, 0x119, 
    0x11b, 0x5, 0x42, 0x22, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x121, 0x7, 0x25, 0x2, 0x2, 0x120, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x122, 0x127, 0x5, 0x26, 0x14, 0x2, 0x123, 
    0x124, 0x7, 0x17, 0x2, 0x2, 0x124, 0x125, 0x7, 0x29, 0x2, 0x2, 0x125, 
    0x127, 0x5, 0x26, 0x14, 0x2, 0x126, 0x122, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x127, 0x43, 0x3, 0x2, 0x2, 0x2, 0x23, 0x46, 
    0x48, 0x55, 0x5c, 0x62, 0x66, 0x6d, 0x74, 0x7e, 0x81, 0x88, 0x90, 0x95, 
    0xa2, 0xa8, 0xb5, 0xb9, 0xc2, 0xca, 0xd0, 0xd8, 0xe2, 0xea, 0xf0, 0xf4, 
    0xf8, 0x101, 0x10a, 0x111, 0x115, 0x11c, 0x120, 0x126, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Python3Parser::Initializer Python3Parser::_init;
