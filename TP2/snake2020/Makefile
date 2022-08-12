all : game_exe

game_exe : game.o grid.o
	gcc -o game_exe game.o grid.o

game.o : game.c
	gcc -o game.o -c game.c

grid.o : grid.c
	gcc -o grid.o -c grid.c

clean:
	rm -rf *.o

mrproper : 
	rm -rf game_exe

