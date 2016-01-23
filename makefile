#Varijabla CC je kompajler koji se koristi
CC = gcc

#Varijabla CFLAGS su opcije koje se prosleđuju kompajleru
FLAGS = -o

SRCS = src/main/main.c src/palindrome/palindrome.c

all: app

app:

	$(CC) $(SRCS) $(FLAGS) app
