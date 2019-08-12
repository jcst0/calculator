/*
 * COMP3109 Calculator Exercise
 */

#include "exception.h"
#include "scanner.h"
#include "parser.h"

/*
 * parse non-terminal term, i.e., 
 *
 * term := factor { '+'| '-' factor};
 *
 */
void parser::term() 
{
   // fill in code here!
   
}

/*
 * parse non-terminal factor
 *
 * factor := primitive { '*' | '/' primitive };
 *
 */
void parser::factor() 
{
  // fill in code here!

}

/*
 * parse non-terminal primitive
 *
 * primitive := IDENT | NUMBER | '(' term ')';
 *
 */
void parser::primitive() 
{
   // fill in code here 
}


/*
 * parse input
 *
 * start := [["let" IDENT '=' term ] | term] '\n';
 *
 */
void parser::parse() 
{
 // read first token from input stream
 t = s.next();

 // fill in code here 
}
