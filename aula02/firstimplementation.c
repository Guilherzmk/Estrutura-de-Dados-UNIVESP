#include <stdio.h>
#define maxHeight 225

typedef struct {
    int weight;
    int height;
} WeightHeight;

int main()
{
    WeightHeight person1;
    person1.weight = 80;
    person1.height = 175;
    printf("Peso: %i, Altura: %i\n", person1.weight, person1.height);
    if(person1.height > maxHeight) printf("Altura acima da maxima.\n");
    else printf("Altura abaixo da maxima.\n");
    return 0;
}