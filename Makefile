TARGET = MyProject
CC = gcc
OBJ = func.o main.o
INSTALL_DIR = /usr/local

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

func.o : func.c
	$(CC) -c func.c
main.o : main.c
	$(CC) -c main.c

install:
	cp $(TARGET) $(INSTALL_DIR)/bin/

clean:
	rm -f $(TARGET) $(OBJ)

clean-all: clean
	rm -f $(INSTALL_DIR)/bin/$(TARGET)
