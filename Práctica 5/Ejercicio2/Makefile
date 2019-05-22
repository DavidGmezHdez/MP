SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(LIB)/libejercicio2.a
	$(CXX) -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o -I$(INC) -L$(LIB) -lejercicio2

$(LIB)/libejercicio2.a : $(OBJ)/Bigint.o 
	ar rvs $(LIB)/libejercicio2.a $(OBJ)/Bigint.o

$(OBJ)/Bigint.o : $(SRC)/Bigint.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Bigint.o $(SRC)/Bigint.cpp -I$(INC)

$(OBJ)/ejercicio2.o : $(SRC)/ejercicio2.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio2.o $(SRC)/ejercicio2.cpp -I$(INC)

all: $(BIN)/ejercicio2	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio2 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean