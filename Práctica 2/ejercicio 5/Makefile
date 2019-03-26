SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio5: $(OBJ)/ejercicio5.o $(LIB)/libejercicio5.a
	$(CXX) -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o -I$(INC) -L$(LIB) -lejercicio5

$(LIB)/libejercicio5.a : $(OBJ)/utilidades.o 
	ar rvs $(LIB)/libejercicio5.a $(OBJ)/utilidades.o 

$(OBJ)/utilidades.o : $(SRC)/utilidades.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INC)

$(OBJ)/ejercicio5.o : $(SRC)/ejercicio5.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio5.o $(SRC)/ejercicio5.cpp -I$(INC)

all: $(BIN)/ejercicio5	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio5 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean
	