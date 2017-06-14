//
//  main.c
//  exerciceC
//
//  Created by Jérémy Bachayani on 14/06/2017.
//  Copyright © 2017 Jérémy Bachayani. All rights reserved.
//

#include <stdio.h>
#include <string.h>



void equalWords(char *wordOne, char *wordTwo) {
    int compare = strcmp(wordOne, wordTwo);
    
    if (compare != 0) {
        printf("Erreur : Mot différent !");
    }
}

void rankWords(char *wordOne, char *wordTwo) {
    int compare = strcmp(wordOne, wordTwo);
    
if (compare < 0) {
        printf("Le mot %s est inférieur a %s", wordOne, wordTwo);
    } else if (compare > 0){
        printf("Le mot %s est inférieur a %s", wordTwo, wordOne);
    } else {
        printf("Les deux mots ont identiques ");
    }
}

int main(int argc, const char * argv[]) {
    char str1[] = "bonjour";
    char str2[] = "bonjour";
    equalWords(str1, str2);
    return 0;
}
