#include <stdio.h>

#define MAX_RECIPES 3
#define MAX_NAME 100

int main(int argc, char* argv[]){
  FILE *f_recipe;
  char recipe_names[MAX_RECIPES][MAX_NAME];
  int recipe_count = 0;
  int i=0;

  if(argc < 2) {
    printf("Usage: recipe data-file\n");
    return 0;
  }

  if(!(f_recipe = fopen(argv[1], "r"))){
    fprintf(stderr, "Cannot open file: %s", argv[1]);
    return 0;
  }

  /* データファイルからfgets()でレシピ名を読み込む */
  while(recipe_count<MAX_RECIPES){
    if(!fgets(recipe_names[recipe_count], MAX_NAME, f_recipe)) break;
    else {
      recipe_count++;
    }
  }

  for(i=0;i<recipe_count;i++) {
    printf(recipe_names[i]);
  }

  return 0;
}
