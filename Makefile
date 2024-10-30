# Variables
CC = gcc                   # Compilador
CFLAGS = -Wall -Wextra -g  # Flags de compilación
SOURCES = codigo_fuente/main.c \
          codigo_fuente/prime_utils.c \
          codigo_fuente/math_utils.c  # Rutas de los archivos fuente
EXECUTABLE = numeros_primos  # Nombre del ejecutable

# Regla por defecto
all: $(EXECUTABLE)

# Regla para construir el ejecutable
$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para limpiar los archivos generados
clean:
	rm -f $(EXECUTABLE)
