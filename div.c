#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argv[2] == 0){
      printf("DIV ZERO NOT ALLOWED!\n")
    } else {
      printf("%i", argv[1]/argv[2])
    };
  return 0;
};
