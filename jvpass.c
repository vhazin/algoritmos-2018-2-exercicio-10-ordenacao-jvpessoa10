#include <stdio.h>
#include <stdlib.h>

typedef struct text{
    char * value;
}Text;

Text * insertionSortList(Text * palavra, Text * palavras[]){
  if(palavras[0] == NULL){
    palavras 
  }
}


int main(void){
    int G;

    scanf("%d",&G);
    
    Text * palavras[G];

    for(int i = 0; i< G; i++){
      palavras[i] = NULL;
    }
    
    
    int menos = 0;
    int mais = 0;

    for(int i = 0; i<G;i++){
        Text * palavra  = (Text*)malloc(sizeof(Text));
        char status[2];
        char name[21];

        scanf("%s %s", &status, &name);

        switch(status[0]){
          case '-':
            menos++;
          case '+':
            mais++;
        }
        palavra->value = name;

        insertionSortList(palavra,palavras);

    }

    

    return 0;
}
