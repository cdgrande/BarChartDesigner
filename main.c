#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//This was made by Cody Grande, you can change this but give the creator some credit.//

double graph, secondGraph, a, c;
int dataset[2];
char z;

int theRandom(void){
        dataset[1] = rand() % 11;
        dataset[2] = rand() % 11;
        graph = dataset[1];
        secondGraph = dataset[2];
        theMath();
}

int main(void){
    srand(time(NULL));
    printf("do you want to run a random test?(y or n)");
    z = getchar();
    switch(z){
    case 'y':
            theRandom();
            break;
        case 'n':
            noRandom();
            break;
        default:
            printf("the letter is not y or n.");
            break;
    }
}

int noRandom(void){
    printf("what is the number for the first graph?\n");
    scanf("%lf", &graph);
    printf("what is the number for the second graph?\n");
    scanf("%lf", &secondGraph);
    theMath();
}

 int theMath(void){
     printf("\n");
    for(a=0; a<graph; a++){
        printf("+");
    }
    printf("\n");
    for(c=0;c<secondGraph;c++){
            printf("+");
    }
    printf("\n");
    for(a=0;a>graph;a--){
        printf("-");
    }
    printf("\n");
    for(c=0;c>secondGraph;c--){
        printf("-");
    }
    printf("\n+ means positive graph\n- means negative graph.\n");
    printf("Thank you for using this program made by Cody Grande");
    return 0;
}

