SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(LIB)/libejercicio4.a
	$(CXX) -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o -I$(INC) -L$(LIB) -lejercicio4

$(LIB)/libejercicio4.a : $(OBJ)/Celda.o $(OBJ)/Lista.o 
	ar rvs $(LIB)/libejercicio4.a $(OBJ)/Celda.o $(OBJ)/Lista.o

$(OBJ)/Celda.o : $(SRC)/Celda.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Celda.o $(SRC)/Celda.cpp -I$(INC)

$(OBJ)/Lista.o : $(SRC)/Lista.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Lista.o $(SRC)/Lista.cpp -I$(INC)

$(OBJ)/ejercicio4.o : $(SRC)/ejercicio4.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio4.o $(SRC)/ejercicio4.cpp -I$(INC)

all: $(BIN)/ejercicio4	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio4 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean