#include <stdio.h>
#include <malloc.h>
#define maxHeight 225

typedef struct {
    int weight;
    int height;
} WeightHeight;

int main(){
    WeightHeight* person1 = (WeightHeight*) malloc(sizeof(WeightHeight));
    person1->weight = 80;
    person1->height = 185;
    printf("Peso: %i, Altura: %i\n", person1->weight, person1->height);
    if(person1->height > maxHeight) printf("Acima da altura maxima\n");
    else printf("Abaixo da altura maxima\n");
    return 0;
}

