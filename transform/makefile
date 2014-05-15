PROJECT = transform

BINARY = $(PROJECT).bin

SOURCES = transform.c

HEADERS = transform.h

DEADSOURCES = main.c

OBJECTS = $(SOURCES:.c=.o)
DEADOBJECTS = $(DEADSOURCES:.c=.do)

CFLAGS = -Wall -pg
LDFLAGS = -Wall -pg

all: $(BINARY)
	@echo Testing...
	@date +%s >> data.txt
	@echo ======================================== BEGIN APPLICATION OUTPUT | tee -a data.txt
	@echo | tee -a data.txt
	@./$(BINARY) | tee -a data.txt
	@echo | tee -a data.txt
	@echo ========================================== END APPLICATION OUTPUT | tee -a data.txt
	@echo transform.c: >> data.txt
	@cat transform.c >> data.txt

$(BINARY): $(OBJECTS) $(DEADOBJECTS)
	@echo Linking $(BINARY)...
	@gcc $(LDFLAGS) $(OBJECTS) $(DEADOBJECTS) -o $(BINARY)

%.o: %.c
	@echo Building $@...
	@gcc $< -c $(CFLAGS) -o $@

%.do: %.c
	@echo Building $@...
	@gcc $< -c $(CFLAGS) -o $@

clean:
	@rm -f *.o *.bin
	@rm -rf dist
	@rm -f $(PROJECT).zip
	@rm -f gmon.out
