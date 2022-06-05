all: Tetris

main.o:		main.c shapes.h
			gcc -c main.c -o main.o

menu.o:		menu.c menu.h
			gcc -c menu.c -o menu.o

testsAndClear.o:	testsAndClear.c testsAndClear.h
				gcc -c testsAndClear.c -o testsAndClear.o

shapes.o:	shapes.c shapes.h
			gcc -c shapes.c -o shapes.o

Tetris.o:		Tetris.c Tetris.h
			gcc -c Tetris.c -o Tetris.o

aleat.o:		aleat.c aleat.h
			gcc -c aleat.c -o aleat.o

Tetris: 		 main.o menu.o  testsAndClear.o shapes.o Tetris.o aleat.o
		gcc main.o menu.o testsAndClear.o shapes.o Tetris.o aleat.o -o game