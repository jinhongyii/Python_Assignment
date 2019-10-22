
// Generated from .\Python3.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Python3Parser.h"
#include <regex>



class  Python3Lexer : public antlr4::Lexer {
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
    UNKNOWN_CHAR = 78
  };

  Python3Lexer(antlr4::CharStream *input);
  ~Python3Lexer();


      // A queue where extra tokens are pushed on (see the NEWLINE lexer rule).
   private: std::list<antlr4::Token*> tokens ;
       // The stack that keeps track of the indentation level.
   private: std::stack<int> indents ;
       // The amount of opened braces, brackets and parenthesis.
   private: int opened = 0;
       // The most recently produced token.
   private: antlr4::Token* lastToken = nullptr;

   public: void emit(std::unique_ptr<antlr4::Token> t) override {
         token.release();
         token=std::move(t);

         tokens.push_back(token.get());
   //      std::cout<<t->toString()<<std::endl;
       }


   public: std::unique_ptr<antlr4::Token> nextToken() override {
         // Check if the end-of-file is ahead and there are still some DEDENTS expected.
         if (_input->LA(1) == EOF && !this->indents.empty()) {
           // Remove any trailing EOF tokens from our buffer.
           for(auto i=tokens.rbegin();i!=tokens.rend();){
               auto tmp=i;
               i++;
               if((*tmp)->getType()==EOF){
                   tokens.erase(tmp.base());
               }
           }


           // First emit an extra line break that serves as the end of the statement.
           std::unique_ptr<antlr4::Token> tmp=commonToken(Python3Parser::NEWLINE, "\n");
           this->emit(std::move(tmp));

           // Now emit as much DEDENT tokens as needed.
           while (!indents.empty()) {
               auto tmp=createDedent();
             this->emit(std::move(tmp));
             indents.pop();
           }

           // Put the EOF back on the token stream.
           this->emit(commonToken(Python3Parser::EOF, "<EOF>"));
         }

         std::unique_ptr<antlr4::Token> next = Lexer::nextToken();

         if (next->getChannel() == antlr4::Token::DEFAULT_CHANNEL) {
           // Keep track of the last token on the default channel.
           this->lastToken = next.get();
         }
           if (tokens.empty()) {
               return std::move(next);
           } else{
               next.release();
               auto tmp=tokens.front();
               tokens.pop_front();
               return std::unique_ptr<antlr4::Token>(tmp);
           }

       }

   private: std::unique_ptr<antlr4::Token> createDedent() {
         auto dedent = commonToken(Python3Parser::DEDENT, "");
         dedent->setLine(this->lastToken->getLine());
         return std::move(dedent);
       }

   private: std::unique_ptr<antlr4::CommonToken> commonToken(int type,std::string text) {
         int stop = this->getCharIndex() - 1;
         int start = text.empty() ? stop : stop - text.length() + 1;
         return std::move(std::unique_ptr<antlr4::CommonToken>(new antlr4::CommonToken({ this, _input },
                 type,
                 DEFAULT_TOKEN_CHANNEL, start, stop)));
       }

       // Calculates the indentation of the provided spaces, taking the
       // following rules into account:
       //
       // "Tabs are replaced (from left to right) by one to eight spaces
       //  such that the total number of characters up to and including
       //  the replacement is a multiple of eight [...]"
       //
       //  -- https://docs.python.org/3.1/reference/lexical_analysis.html#indentation
       static int getIndentationCount(std::string spaces) {
         int count = 0;
         for (char ch : spaces) {
           switch (ch) {
             case '\t':
               count += 8 - (count % 8);
               break;
             default:
               // A normal space char.
               count++;
           }
         }

         return count;
       }

       bool atStartOfInput() {
         return Lexer::getCharPositionInLine() == 0 && Lexer::getLine() == 1;
       }

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACKAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACKAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

