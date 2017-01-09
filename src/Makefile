cc = c99
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))
VPATH = ../includes
FLAGS = -Wall

all: arrays banking bitlevel boolean fibonacci math pointers \
		formulae functional gasoline hello loops macros recurse scan \
		seqfiles serie staex stock stringlib struct temperature union

arrays: arrays.o
	$(cc) -o arrays.o arrays.c $(FLAGS)
banking:	banking.o banking
	$(cc) -o banking.o banking.c  $(FLAGS)
bitlevel:	bitlevel.o
	$(cc) -o bitlevel.o bitlevel.c  $(FLAGS)
boolean:	boolean.o
	$(cc) -o boolean.o boolean.c  $(FLAGS)
fibonacci:	fibonacci.o fibonacci
	$(cc) -o fibonacci.o fibonacci.c  $(FLAGS)
formulae:	formulae.o
	$(cc) -o formulae.o formulae.c  $(FLAGS)
functional:	functional.o
	$(cc) -o functional.o functional.c  $(FLAGS)
gasoline:	gasoline.o
	$(cc) -o gasoline.o gasoline.c  $(FLAGS)
hello:	hello.o
	$(cc) -o  hello.o hello.c  $(FLAGS)
loops:	loops.o
	$(cc) -o loops.o loops.c  $(FLAGS)
macros:	macro.o macros
	$(cc) -o macros.o macro.c  $(FLAGS)
math:	math.o
	$(cc) -o math.o math.c  $(FLAGS)
pointers:	pointers.o pointers
	$(cc) -o pointers.o pointers.c  $(FLAGS)
recurse:	recurse.o
	$(cc) -o recurse.o recurse.c  $(FLAGS)
scan:	scan.o
	$(cc) -o scan.o scan.c  $(FLAGS)
seqfiles:	seqfiles.o  seqfiles
	$(cc) -o seqfiles.o seqfiles.c  $(FLAGS)
serie:	serie.o
	$(cc) -o serie.o serie.c  $(FLAGS)
staex:	staex.o
	$(cc) -o staex.o staex.c  $(FLAGS)
stock:	stock.o  stock
	$(cc) -o stock.o stock.c  $(FLAGS)
stringlib:	stringlib.o
	$(cc) -o stringlib.o stringlib.c  $(FLAGS)
struct:	struct.o struct structArray.h
	$(cc) -o struct.o struct.c  $(FLAGS)
temperature:	temperature.o
	$(cc) -o temperature.o temperature.c  $(FLAGS)
union:	union.o
	$(cc) -o union.o union.c  $(FLAGS)

edit: arrays banking bitlevel boolean fibonacci math pointers \
			formulae functional gasoline hello loops macros recurse scan \
			seqfiles serie staex stock stringlib struct temperature union

.PHONY : clean

clean :
	rm  $(OBJ_FILES)
