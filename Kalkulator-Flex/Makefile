mgrochowski_calc: lex.yy.c
	gcc -o mgrochowski_calc mgrochowski_calc.tab.c lex.yy.c -lfl -lm
lex.yy.c: calclex.l
	bison -d mgrochowski_calc.y
	flex calclex.l
