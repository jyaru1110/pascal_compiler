compila_pascal: main.l parser.y
	flex -L main.l
	bison -dt parser.y
	gcc parser.tab.c lex.yy.c
	./a.out "Hello.pas"