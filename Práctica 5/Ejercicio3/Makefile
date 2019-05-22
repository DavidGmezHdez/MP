SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


# **** Compilación de módulos ****
$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(LIB)/libejercicio3.a
	$(CXX) -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o -I$(INC) -L$(LIB) -lejercicio3

$(LIB)/libejercicio3.a : $(OBJ)/Polilinea.o 
	ar rvs $(LIB)/libejercicio3.a $(OBJ)/Polilinea.o

$(OBJ)/Polilinea.o : $(SRC)/Polilinea.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/Polilinea.o $(SRC)/Polilinea.cpp -I$(INC)

$(OBJ)/ejercicio3.o : $(SRC)/ejercicio3.cpp
	$(CXX) $(CPPFLAGS)  -o $(OBJ)/ejercicio3.o $(SRC)/ejercicio3.cpp -I$(INC)

all: $(BIN)/ejercicio3	
# **** Ejecutar ** **
exec:
	./$(BIN)/ejercicio3 
# **** Limpieza ****
clean :
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*

mrproper : clean