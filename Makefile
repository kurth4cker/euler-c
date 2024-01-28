CC = cc

BIN = 1 2 3

all: $(BIN)

clean:
	rm -f $(BIN) *.o

.SUFFIXES: .c
.c:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
