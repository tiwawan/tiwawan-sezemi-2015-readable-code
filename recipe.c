#include <stdio.h>

int main(int argc, char* argv[]){
  FILE *f_recipe = fopen(argv[1], "r");
  char recipename[100];

  fgets(recipename, 100, f_recipe);

  printf(recipename);

  return 0;
}
