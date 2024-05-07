CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
DEPS = quadratic_equation.h
OBJ = quadratic_equation.o test_quadratic_equation.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

quadratic_equation: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

check: quadratic_equation
	./quadratic_equation
clean:
	rm -f *.o quadratic_equation 