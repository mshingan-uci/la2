CC = g++
CFLAGS = -std=c++17
LDFLAGS = 
OBJFILES = Calculator.o la2.o
TARGET = a.out

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm $(OBJFILES) $(TARGET)
