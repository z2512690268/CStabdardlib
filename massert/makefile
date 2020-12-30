BIN = ./bin
PACK = ./massert
SRC = ./src
CPPS = $(wildcard ./src/*.cpp)
build:
	g++ -g $(CPPS) -o $(BIN)/testassert.exe

run: 
	$(BIN)/testassert.exe

clean:
	rm -frv $(BIN)/*

lib:
	g++ -g -c $(SRC)/massert.cpp -o $(BIN)/massert.o
	ar crv $(BIN)/massert.lib $(BIN)/massert.o
	g++ -g $(SRC)/tassert.cpp $(BIN)/massert.lib -o $(BIN)/testlib.exe

runlib:
	$(BIN)/testlib.exe

$(BIN)/massert.lib:
	make lib

pack:$(SRC)/massert.h $(BIN)/massert.lib
	cp $(SRC)/massert.h $(PACK)
	cp $(BIN)/massert.lib $(PACK)

test:
	ls $(TOP_PATH)