compila_pascal: main.l parser.y
	flex -L -o lex.yy.cpp main.l
	bison -dtv parser.y
	g++ -std=c++17 parser.tab.cpp lex.yy.cpp
	./a.out "Pr_1.pas"