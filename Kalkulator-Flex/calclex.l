/* calclex.l - scanner for parser mgrochowski_calc.y */

%{
	#include <stdlib.h>
	#include "mgrochowski_calc.tab.h"
%}

%%

([0-9]+)|([0-9]+\.[0-9]+)|([0-9]+\.[0-9]*(e|E)[0-9]+)	{ yylval.fval = atof(yytext); return NUMBER; }
[-+()/*^|sqrtincoalg\n]					{ return *yytext; }
[ \t]							; /* skip */
.							; /* skip */
%%

int yywrap(void) {
	return 1;
}
