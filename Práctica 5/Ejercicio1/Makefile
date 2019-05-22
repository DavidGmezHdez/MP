SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o $(LIB)/libejercicio1.a
	$(CXX) -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o -I$(INC) -L$(LIB) -lejercicio1

$(LIB)/libejercicio1.a : $(OBJ)/Barquitos.o 
	ar rvs $(LIB)/libejercicio1.a $(OBJ)/Barquitos.o

$(OBJ)/Barquitos.o : $(SRC)/Barquitos.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Barquitos.o $(SRC)/Barquitos.cpp -I$(INC)

$(OBJ)/ejercicio1.o : $(SRC)/ejercicio1.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio1.o $(SRC)/ejercicio1.cpp -I$(INC)

all: $(BIN)/ejercicio1	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio1 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean