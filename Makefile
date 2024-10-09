# Definir el compilador y las opciones de compilación
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Archivos fuente
SRCS = brazorobotico.cpp mainrobo.cpp

# Archivos objeto (automáticamente se generan de los archivos fuente)
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
EXEC = robot

# Regla por defecto: compilar todo
all: $(EXEC)

# Regla para enlazar los objetos y generar el ejecutable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Regla para compilar archivos .cpp a .o
%.o: %.cpp brazorobotico.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJS) $(EXEC)

# Ejecutar el programa
test: $(EXEC)
	./$(EXEC)

