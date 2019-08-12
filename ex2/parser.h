#pragma once 

/*
 * COMP3109 Calculator Exercise 
 *
 * Undecorated Parser class (checks syntax only)
 *
 */

#include <ctype.h>
#include <string>
#include <iostream>
#include <exception>

#include "scanner.h"

using namespace std;

/*
 * This class implements a parser that checks 
 * whether the token stream is well-formed
 * for a simple calculator/interpreter.
 *
 * The grammar is given in EBNF:
 *
 * start := [["let" IDENT '=' term ] | term] '\n';
 * term := factor { '+'| '-' factor};
 * factor := primitive { '*' | '/' primitive };
 * primitive := IDENT | NUMBER | '(' term ')';
 *
 * The parser is implemented as a recursive descent parser, i.e.,
 * we know one token ahead of time and decide based
 * on this token which alternative of a non-terminal 
 * should be taken. 
 *
 */


class parser {
protected:
 scanner &s; // scanner
 token t;    // current token in input stream

 // parse non-terminal term
 void term();

 // parse non-terminal factor
 void factor();

 // parse non-terminal primitive
 void primitive();

public:
 parser(scanner &s): s(s) {
 };

 // parse input
 void parse();
};

