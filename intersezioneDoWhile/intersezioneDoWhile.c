#include <stdio.h> 
int vet_1[30]; 
int vet_2[30]; 
int vet_f[30]; 

int i, y, temp, check, z, x, w, b; 

int main(void) { 
	// immagazinare i numeri nel vettore 1
    i = 0; 
    temp = 0; 
    while ((temp != -1) && (i < 30)) { 
        printf("Inserisci un numero "); 
        scanf("%d", &temp); 
        vet_1[i] = temp; 
        i++; 
    } 
    
    // immagazinare i numeri nel vettore 2
    y = 0; 
    temp = 0; 
    while ((temp != -1) && (y < 30)) { 
        printf("Inserisci un numero di un altro vettore "); 
        scanf("%d", &temp); 
        vet_2[y] = temp; 
        y++; 
    }


    // immagazinare i numeri in comune nel vettore finale MA se ci sono doppioni li ripete
    b = 0;
    z = 0;
    do{
        x = 0;
        do { 
            if (vet_1[b] == vet_2[x]) { 
                vet_f[z] = vet_1[b]; 
                z++;


                /* Qui manca il controllo per non salvare più volte eventuali doppioni */
            }
        x++;
        } while((vet_2[x] != -1)); 
    b++;
    } while(vet_1[b] != -1);

    printf("Il vettore finale è "); 
    for (w = 0; w < z; w++) { 
        printf("%d", vet_f[w]);
        } 
    
return 0;
}