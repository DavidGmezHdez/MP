SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio8: $(OBJ)/ejercicio8.o $(LIB)/libejercicio8.a
	$(CXX) -o $(BIN)/ejercicio8 $(OBJ)/ejercicio8.o -I$(INC) -L$(LIB) -lejercicio8

$(LIB)/libejercicio8.a : $(OBJ)/Menu.o 
	ar rvs $(LIB)/libejercicio8.a $(OBJ)/Menu.o

$(OBJ)/Menu.o : $(SRC)/Menu.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Menu.o $(SRC)/Menu.cpp -I$(INC)

$(OBJ)/ejercicio8.o : $(SRC)/ejercicio8.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio8.o $(SRC)/ejercicio8.cpp -I$(INC)

all: $(BIN)/ejercicio8	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio8 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean
	