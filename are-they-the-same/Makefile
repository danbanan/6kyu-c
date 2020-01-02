CC := gcc
CFLAGS := -lcriterion
DEPS := comp.h
OBJ := comp.o test.o

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
		gcc -c $<

clean:
		rm $(OBJ) test
