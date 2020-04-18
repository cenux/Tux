CC = gcc
CFLAGS = -Wall

BIN = tux
OBJ = tux.o fileio.o
SRC = tux.c fileio.c

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(CFLAGS)

$(OBJ): $(SRC)
	$(CC) -c $(SRC) $(CFLAGS)

run:
	./$(BIN)

clean:
	rm $(OBJ) $(BIN)
