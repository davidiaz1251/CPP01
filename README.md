# CPP Module 01 - Memory allocation, pointers to members, references and switch statements

Este proyecto implementa los 6 ejercicios del módulo CPP01 de 42, enfocado en conceptos fundamentales de C++.

## Conceptos Principales

### 1. Stack vs Heap
- **Stack**: Memoria automática, se libera automáticamente
- **Heap**: Memoria dinámica, requiere `delete` manual

### 2. Referencias vs Punteros
- **Referencias**: Alias a una variable existente, no pueden ser nulas
- **Punteros**: Variables que contienen direcciones de memoria, pueden ser nulas

### 3. Punteros a funciones miembro
- Sintaxis especial para llamar funciones miembro a través de punteros

### 4. Switch statements
- Control de flujo con fall-through automático

## Ejercicios

### Exercise 00: BraiiiiiiinnnzzzZ
- **Objetivo**: Entender stack vs heap allocation
- **Archivos**: `Zombie.{hpp,cpp}`, `newZombie.cpp`, `randomChump.cpp`, `main.cpp`, `Makefile`
- **Conceptos**: Constructores, destructores, gestión de memoria

**Compilar y ejecutar:**
```bash
cd ex00
make
./zombie
```

### Exercise 01: Moar brainz!
- **Objetivo**: Asignación de arrays dinámicos
- **Archivos**: `Zombie.{hpp,cpp}`, `zombieHorde.cpp`, `main.cpp`, `Makefile`
- **Conceptos**: `new[]`, `delete[]`, inicialización de arrays

**Compilar y ejecutar:**
```bash
cd ex01
make
./zombie_horde
```

### Exercise 02: HI THIS IS BRAIN
- **Objetivo**: Desmitificar las referencias
- **Archivos**: `main.cpp`, `Makefile`
- **Conceptos**: Referencias, punteros, direcciones de memoria

**Compilar y ejecutar:**
```bash
cd ex02
make
./brain
```

### Exercise 03: Unnecessary violence
- **Objetivo**: Referencias vs punteros en diseño de clases
- **Archivos**: `Weapon.{hpp,cpp}`, `HumanA.{hpp,cpp}`, `HumanB.{hpp,cpp}`, `main.cpp`, `Makefile`
- **Conceptos**: Cuándo usar referencias vs punteros

**Compilar y ejecutar:**
```bash
cd ex03
make
./violence
```

### Exercise 04: Sed is for losers
- **Objetivo**: Manipulación de archivos y strings
- **Archivos**: `main.cpp`, `Makefile`
- **Conceptos**: `std::ifstream`, `std::ofstream`, `std::string::find`

**Compilar y ejecutar:**
```bash
cd ex04
make
./sed_replacement <filename> <s1> <s2>
make test  # Ejecuta una prueba automática
```

### Exercise 05: Harl 2.0
- **Objetivo**: Punteros a funciones miembro
- **Archivos**: `Harl.{hpp,cpp}`, `main.cpp`, `Makefile`
- **Conceptos**: Arrays de punteros a funciones miembro

**Compilar y ejecutar:**
```bash
cd ex05
make
./harl
```

### Exercise 06: Harl filter
- **Objetivo**: Switch statements y fall-through
- **Archivos**: `Harl.{hpp,cpp}`, `main.cpp`, `Makefile`
- **Conceptos**: `switch`, fall-through, filtrado de logs

**Compilar y ejecutar:**
```bash
cd ex06
make
./harlFilter "WARNING"
make test  # Ejecuta pruebas automáticas
```

## Reglas de Compilación

Todos los ejercicios usan las siguientes flags:
- `-Wall -Wextra -Werror`
- `-std=c++98`
- Compilador: `c++`

## Conceptos Técnicos Importantes

### Stack vs Heap (Exercise 00-01)
```cpp
// Stack allocation - automática
Zombie stackZombie("Name");  // Se destruye automáticamente

// Heap allocation - manual
Zombie* heapZombie = new Zombie("Name");  // Requiere delete
delete heapZombie;
```

### Referencias vs Punteros (Exercise 02-03)
```cpp
// Referencia - debe inicializarse, no puede ser nula
std::string& ref = variable;

// Puntero - puede ser nulo, puede reasignarse
std::string* ptr = &variable;
ptr = nullptr;  // Válido
```

### Punteros a Funciones Miembro (Exercise 05)
```cpp
// Declaración
void (ClassName::*funcPtr)(void) = &ClassName::memberFunction;

// Llamada
(object.*funcPtr)();
```

### Switch con Fall-through (Exercise 06)
```cpp
switch (level) {
    case 0:
        debug();
        // Fall through
    case 1:
        info();
        // Fall through
    case 2:
        warning();
        break;
}
```

## Gestión de Memoria

- Siempre usar `delete` para `new`
- Siempre usar `delete[]` para `new[]`
- Verificar memory leaks con herramientas como `valgrind`

## Testing

Cada ejercicio incluye casos de prueba que demuestran:
- Funcionalidad correcta
- Gestión adecuada de memoria
- Manejo de casos edge
- Comportamiento esperado según el subject

Compilar todo el módulo:
```bash
# Desde el directorio raíz
for ex in ex0{0..6}; do
    echo "Building $ex..."
    cd $ex
    make
    cd ..
done
```
