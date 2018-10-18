#include <stdio.h>

 //prints int_value and int_pointer
void print_integers(int int_value,int *int_pointer){
  printf("Got an integer value %d and an address to an integer with value %d ",int_value, *int_pointer ); // The * access the pointer the value which is on this address
  printf("\n");
}

void change_integers(int *int_value, int *int_pointer){
  *int_value = 1234;
  *int_pointer = 4321;
}

int main(int argc, char const *argv[]) {
  int int_value = 10; //this is a int it is a variable. In it you can save a value of a number.
  int number = 238;
  int* int_pointer; //this is a pointer. A pointer access the address of another variable.
  int_pointer = &number;
  print_integers(int_value, int_pointer);
  change_integers(&int_value, int_pointer);
  print_integers(int_value, int_pointer);
  return 0;
}
