CC     = clang
CFLAGS = -Ofast -Wall -Wextra
INC    = -framework IOKit
PREFIX = /usr/local
EXEC   = sensors

all: $(EXEC)

$(EXEC): smc.c
	$(CC) $(CFLAGS) $(INC) -o $@ $?

.PHONY: clean install

clean :
	rm -f $(EXEC)

install : $(EXEC)
	install $(EXEC) $(PREFIX)/bin
