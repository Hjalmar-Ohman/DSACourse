# DSACourse
Assignments are reused, so I won't copy paste all my solutions from the course, but her is a modified version. 

The assignment was to implement some of the checks done by a compiler during semantic analysis.

Example input:
10                      //rows of commands that follow
DECLARE apple int       //declares the variable apple as an int
{                       //enters new block of code
DECLARE apple float     //declares the variable apple as float in this scope
TYPEOF apple            //outputs the type of apple in THIS scope
DECLARE orange string
}
TYPEOF apple
TYPEOF orange           //not declared in this scope
DECLARE apple           //Already declared in this scope -> error

Output would therefore be:
float
UNDECLARED
MULTIPLE DECLERATION
