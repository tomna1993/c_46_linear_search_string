CC := gcc
#CFLAGS := 
DEST := ./build/

all: linear_search_string.c
	mkdir -p build
	$(CC) linear_search_string.c -lcs50 -o $(DEST)/linear_search_string 