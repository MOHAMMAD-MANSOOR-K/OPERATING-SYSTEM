#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tph, philname[20], status[20], howhung, hu[20], cho;

void one() {
    // Implement one philosopher eating logic here
}

void two() {
    // Implement two philosophers eating logic here
}

int main() {
    int i;

    printf("\n\nDINING PHILOSOPHER PROBLEM");
    printf("\nEnter the total number of philosophers: ");
    scanf("%d", &tph);

    for (i = 0; i < tph; i++) {
        philname[i] = (i + 1);
        status[i] = 1;
    }

    printf("How many are hungry: ");
    scanf("%d", &howhung);

    if (howhung == tph) {
        printf("\n All are hungry...\nDeadlock stage will occur");
        printf("\nExiting\n");
    } else {
        for (i = 0; i < howhung; i++) {
            printf("Enter philosopher %d position:", (i + 1));
            scanf("%d", &hu[i]);
            status[hu[i]] = 2;
        }

        do {
            printf("1. One can eat at a time\t2. Two can eat at a time\t3. Exit\nEnter your choice:");
            scanf("%d", &cho);

            switch (cho) {
                case 1:
                    one();
                    break;
                case 2:
                    two();
                    break;
                case 3:
                    exit(0);
                    break;
                default:
                    printf("\nInvalid option..\n");
            }
        } while (1);
    }

    return 0;
}

