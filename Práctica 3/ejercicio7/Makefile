SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(LIB)/libejercicio7.a
	$(CXX) -o $(BIN)/ejercicio7 $(OBJ)/ejercicio7.o -I$(INC) -L$(LIB) -lejercicio7

$(LIB)/libejercicio7.a : $(OBJ)/Matriz2D.o 
	ar rvs $(LIB)/libejercicio7.a $(OBJ)/Matriz2D.o

$(OBJ)/Matriz2D.o : $(SRC)/Matriz2D.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Matriz2D.o $(SRC)/Matriz2D.cpp -I$(INC)


$(OBJ)/ejercicio7.o : $(SRC)/ejercicio7.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio7.o $(SRC)/ejercicio7.cpp -I$(INC)

all: $(BIN)/ejercicio7	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio7 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean
	