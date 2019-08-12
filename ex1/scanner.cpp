/*
 * COMP3109 Calculator Exercise
 *
 * Task: Fill in the missing code for method next() that 
 * produces a sequence of tokens from a stream of
 * characters. 
 */

#include "exception.h"
#include "scanner.h"

using namespace std;

// get next token from input line
enum token scanner::next() 
{
  // write your own tokenizer here!!
  if (input[idx] == '+') {
      idx++;
      return t_plus;
  }
  if (input[idx] == '-') {
      idx++;
      return t_minus;
  }
  if (input[idx] == '*') {
      idx++;
      return t_multiply;
  }
  if (input[idx] == '/') {
      idx++;
      return t_divide;
  }
  if (input[idx] == '(') {
      idx++;
      return t_lparen;
  }
  if (input[idx] == ')') {
      idx++;
      return t_rparen;
  }
  if (input[idx] == 'l') {
      if (input[++idx] == 'e') {
          if (input[++idx] == 't') {
              idx++;
              return t_let;
          }
      }
  }

  if (input[idx] == '\n') {
      idx++;
      return t_eol;
  }
  if (input[idx] == '=') {
      idx++;
      return t_equal;
  }
  if (isalpha(input[idx])) {
      id_value = input[idx];
      idx++;
      return t_ident;
  }
  if (isdigit(input[idx])) {
      num_value = atof(&input[idx]);
      idx++;
      return t_number;
  }
//  if (isspace(input[idx])) {
//      idx++;
//      return;
//  }
  throw calc_exception();
}
