cc = gcc
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))
VPATH = ../includes
FLAGS = -Wall 

all: arrays banking bitlevel boolean fibonacci math pointers \
		formulae functional gasoline hello loops macros recurse scan \
		seqfiles serie staex stock stringlib struct temperature union

arrays: arrays.o
	$(cc) -o arrays.o arrays.c
banking:	banking.o banking
	$(cc) -o banking.o banking.c
bitlevel:	bitlevel.o
	$(cc) -o bitlevel.o bitlevel.c
boolean:	boolean.o
	$(cc) -o boolean.o boolean.c
fibonacci:	fibonacci.o fibonacci
	$(cc) -o fibonacci.o fibonacci.c
formulae:	formulae.o
	$(cc) -o formulae.o formulae.c
functional:	functional.o
	$(cc) -o functional.o functional.c
gasoline:	gasoline.o
	$(cc) -o gasoline.o gasoline.c
hello:	hello.o
	$(cc) -o  hello.o hello.c
loops:	loops.o
	$(cc) -o loops.o loops.c
macros:	macro.o macros
	$(cc) -o macros.o macro.c
math:	math.o
	$(cc) -o math.o math.c
pointers:	pointers.o pointers
	$(cc) -o pointers.o pointers.c
recurse:	recurse.o
	$(cc) -o recurse.o recurse.c
scan:	scan.o
	$(cc) -o scan.o scan.c
seqfiles:	seqfiles.o  seqfiles
	$(cc) -o seqfiles.o seqfiles.c
serie:	serie.o
	$(cc) -o serie.o serie.c
staex:	staex.o
	$(cc) -o staex.o staex.c
stock:	stock.o  stock
	$(cc) -o stock.o stock.c
stringlib:	stringlib.o
	$(cc) -o stringlib.o stringlib.c
struct:	struct.o struct structArray.h
	$(cc) -o struct.o struct.c
temperature:	temperature.o
	$(cc) -o temperature.o temperature.c
union:	union.o
	$(cc) -o union.o union.c

edit: arrays banking bitlevel boolean fibonacci math pointers \
			formulae functional gasoline hello loops macros recurse scan \
			seqfiles serie staex stock stringlib struct temperature union

.PHONY : clean

clean :
	rm  $(OBJ_FILES)
