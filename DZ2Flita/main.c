#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE  *inputfile;
    FILE  *outputfile;
    int Ways, Peaks;
    inputfile = fopen("C:/Users/mkruk/Desktop/adjacency_matrix_5.txt","r");
    outputfile = fopen("C:/Users/mkruk/Desktop/graph.dot","w");
    fprintf(outputfile,"graph{\n");
    while (fscanf(inputfile,"%d %d", &Peaks,&Ways)!=EOF) {
        fprintf(outputfile,"%d -- %d\n", Peaks, Ways);
    }

    fprintf(outputfile, "}\n");
    fclose(inputfile);
    fclose(outputfile);
    system("dot -Tpng -O C:/Users/mkruk/Desktop/graph.dot");
    system("C:/Users/mkruk/Desktop/graph.dot.png");
}