SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(LIB)/libejercicio6.a
	$(CXX) -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o -I$(INC) -L$(LIB) -lejercicio6

$(LIB)/libejercicio6.a : $(OBJ)/Matriz2D.o 
	ar rvs $(LIB)/libejercicio6.a $(OBJ)/Matriz2D.o

$(OBJ)/Matriz2D.o : $(SRC)/Matriz2D.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Matriz2D.o $(SRC)/Matriz2D.cpp -I$(INC)


$(OBJ)/ejercicio6.o : $(SRC)/ejercicio6.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio6.o $(SRC)/ejercicio6.cpp -I$(INC)

all: $(BIN)/ejercicio6	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio6 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean
	