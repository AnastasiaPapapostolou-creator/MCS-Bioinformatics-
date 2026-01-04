#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char seq[ 1000 ];
    int i, j, len;
    int start,stop;

int main() {
    
    while (scanf("%s",seq) ==1) {

        len = 0;
        while (seq[len] != '\0') {
            len = len + 1 ;
        }

        start = -1;
        stop = 0;

        for (i = 0; i < len - 2 ; i = i+1) {
            if (seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G') {
                                                                        start = i; 
                                                                        break;

                                                                }

            }
            if (start != -1) {


                for (j = start + 3; j < len - 2; j = j + 3) {
                int is_stop = 0;

                if (seq[j] == 'T' && seq[j+1] == 'A' && seq[j+2] == 'A') {
                    is_stop = 1;
                }
                if (seq[j] == 'T' && seq[j+1] == 'A' && seq[j+2] == 'G') {
                    is_stop = 1;
                }
                if (seq[j] == 'T' && seq[j+1] == 'G' && seq[j+2] == 'A') {
                    is_stop = 1;
                }

                if (is_stop == 1) {
                    stop = stop + 1;
                    if (stop > 1) {
                        break;
                    }
                }
            }  
        }      

        if (start != -1 && stop == 1) {
            printf("we won it's here\n");
        } else {
            printf("Ohhh noooo!\n");
        }
    }

    return 0;
}