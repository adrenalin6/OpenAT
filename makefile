CC=g++
CFLAGS=-c -Wall -ldl
LDFLAGS= -lcurl
SOURCES=main.cpp type.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=OpenAT

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o OpenAT
