/*
 * COMP3109 Calculator Exercise
 * 
 * Driver for undecorated parser 
 *
 */

#include <ctype.h>
#include <string>
#include <iostream>
#include <exception>

#include "exception.h"
#include "scanner.h"
#include "parser.h"

/*
 * test driver for scanner
 */
int main(int argc, char **argv)
{
 //
 // read-evaluate-print-loop (REPL)
 //
 while(!cin.eof()) {
  try {
   // read line from stdin
   string line;
   getline(cin,line);
   // tokenize input line
   scanner s(line);
   parser p(s); 
   p.parse();
  } catch (calc_exception &e) {
   cerr << e.what() << "\n";
  }
 }
}
