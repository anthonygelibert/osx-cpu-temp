CC     = clang
CFLAGS = -Ofast -Wall -Wextra
INC    = -framework IOKit
PREFIX = /usr/local
EXEC   = sensors

all: $(EXEC)

$(EXEC): smc.o sensors.o
	$(CC) $(CFLAGS) $(INC) -o $@ $?

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $?

.PHONY: clean install

clean:
	rm -f *.o

mrproper:
	rm -f $(EXEC)

install: $(EXEC)
	install $(EXEC) $(PREFIX)/bin
