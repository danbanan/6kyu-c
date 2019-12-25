CC := gcc

TARGET := test

.PHONY: all clean

all: $(TARGET)

clean:
		rm $(TARGET)

$(TARGET):
		$(CC) -o $(TARGET) *.c -lcriterion
