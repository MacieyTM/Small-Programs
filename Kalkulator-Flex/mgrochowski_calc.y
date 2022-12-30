/* mgrochowski_calc.y - simple calculator */

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	int yylex(void);
	void yyerror(char *);
%}

%union {
	float fval;
}

%token <fval> NUMBER
%type <fval> expression
%left '+' '-'
%left '*' '/'
%left '^'
%left 's' 'q' 'r' 't' 'i' 'n' 'c' 'o' 'a' 'l' 'g'
%right UMINUS

%%

program:	program statement '\n'
		| /* empty statement */
		;

statement:	expression	{ printf("Result: %f\n\n", $1); }
		;

expression:	NUMBER
		| expression '+' expression		{ $$ = $1 + $3; }
		| expression '-' expression		{ $$ = $1 - $3; }
		| expression '*' expression		{ $$ = $1 * $3; }
		| expression '/' expression		{
								if($3 == 0) {
								yyerror("You cannot divide by 0!");
								$$ = 0;
								} else $$ = $1 / $3;
							}
		| '-' expression %prec UMINUS		{ $$ = -$2; }
		| '(' expression ')'			{ $$ = $2; }
		| expression '^' expression		{ $$ = pow($1, $3); }
		| '|' expression '|'			{ $$ = fabs($2); }
		| 's' 'q' 'r' 't' expression		{
								if($5 < 0) {
								yyerror("You cannot square root of a negative number!");
								$$ = 0;
								} else $$ = sqrt($5);
							}
		| 's' 'i' 'n' expression		{ $$ = sin($4); }
		| 'c' 'o' 's' expression		{ $$ = cos($4); }
		| 't' 'a' 'n' expression		{ $$ = tan($4); }
		| 'l' 'o' 'g' expression		{
								if($4 <= 0) {
								yyerror("Logarithm number must be a positive number!");
								$$ = 0;
								} else $$ = log10($4);
							}
		| 'l' 'n' expression			{
								if($3 <= 0) {
								yyerror("Logarithm number must be a positive number!");
								$$ = 0;
								} else $$ = log($3);
							}
		| 'q'					{ exit(0); }
		;

%%

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}
int main(void) {
	printf("Type 'q' to quit the program.\n\nEnter mathematical operations:\n\n");
	yyparse();
}
