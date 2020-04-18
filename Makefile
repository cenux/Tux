CC = gcc
CFLAGS = -Wall

BIN = tux
OBJ = tux.o
SRC = tux.c

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(CFLAGS)

$(OBJ): $(SRC)
	$(CC) -c $(SRC) $(CFLAGS)

run:
	./$(BIN)

clean:
	rm $(OBJ) $(BIN)
