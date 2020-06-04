SHELL=/bin/sh
LEX=flex
YACC=bison
CC=gcc
CFLAGS=-g -std=c11 -pedantic -Wall
LDFLAGS=-ly -lfl
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEXOPTS=-D_POSIX_SOURCE --nounput
YACCOPTS=--graph

PROG=ristretto

$(PROG): lex.yy.o $(PROG).tab.o
	$(CC) $+ -o $@ $(LDFLAGS)

lex.yy.c: $(PROG).l $(PROG).tab.h
	$(LEX) $(LEXOPTS) $<

lex.yy.h: $(PROG).l
	$(LEX) $(LEXOPTS) --header-file=$@ $<

$(PROG).tab.c $(PROG).tab.h: $(PROG).y lex.yy.h
	$(YACC) $(YACCOPTS) $< -d -v

%.o: %.c
	$(CC) $(CFLAGS) $< -c $(LDFLAGS)

clean:
	-rm $(PROG) *.o lex.yy.* $(PROG).tab.* *.err *.output *.out *.dot
