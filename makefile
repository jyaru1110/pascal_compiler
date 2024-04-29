compila_pascal: main.l parser.y
	flex -L main.l
	bison -dtv parser.y
	gcc parser.tab.c lex.yy.c
	./a.out "Hello.PAS"