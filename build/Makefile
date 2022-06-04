exec:
	gcc ../src/*.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o Maze; ./Maze
build:
	gcc ../src/*.c -o Maze `sdl2-config --cflags` `sdl2-config --libs`; ./Maze
clean:
	rm *.exe