OUTPUT_NAME=append_test
SOURCE_FILES=append.c
HEADDER_FILES=
COMPILE_OPTS=-O3 -g -Wall

all: $(SOURCE_FILES) $(HEADDER_FILES)
	cc $(COMPILE_OPTS) -o $(OUTPUT_NAME) $(SOURCE_FILES)

clean:
	rm $(OUTPUT_NAME)