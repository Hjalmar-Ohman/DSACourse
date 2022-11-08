# DSACourse
Assignments are reused, so I won't copy paste all my solutions from the course, but her is a modified version. <br />
<br />
The assignment was to implement some of the checks done by a compiler during semantic analysis. <br />
<br />
Example input: <br />
10                      //rows of commands that follow <br />
DECLARE apple int       //declares the variable apple as an int <br />
{                       //enters new block of code <br />
DECLARE apple float     //declares the variable apple as float in this scope <br />
TYPEOF apple            //outputs the type of apple in THIS scope <br />
DECLARE orange string <br />
} <br />
TYPEOF apple <br />
TYPEOF orange           //not declared in this scope <br />
DECLARE apple           //Already declared in this scope -> error <br />
 <br />
Output would therefore be: <br />
float <br />
UNDECLARED <br />
MULTIPLE DECLERATION <br />
