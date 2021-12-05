#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



void take_apart(char file_name){
  FILE * txtFile = fopen(file_name, "r+b");
  FILE * word_list = fopen("word_list.txt","a+");

  char stderr[1000];

  fprintf(stderr, "%s\n", word_list);

  fprintf(stderr, "%s\n", );

  fclose (txtFile);
  fclose (word_list);

}

//int stitch(){}

//int id(){}

int main(){

  char file_name[100];
  int inp;


  while(1){
    printf("Name of the file :\n");
    scanf("%s",&file_name);
    printf("What do you want to do with the file ?\n"
    "1 :\tTake Apart\n"
    "2 :\tStich Together\n"
    "3 :\tID\n"
    "0 :\tExit\n");

    scanf("%d",&inp);

    switch (inp) {
      case 1:
      take_apart(file_name); // word_list = take_apart(file_name)
      break;
      case 2:
      //id_list = id(word_list);
      break;
      case 3:
      //stitch(id_list);
      break;
      case 0:
      printf("BYE\n");
      return 0;
      default :
      printf("Not an option !\n");
    }
  }
}
