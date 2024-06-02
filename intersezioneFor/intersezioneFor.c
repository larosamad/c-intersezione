#include <stdio.h> 
int vet_1[30]; 
int vet_2[30]; 
int vet_f[30]; 
int i, y, temp, check, z, x, w, b, t; 

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


    // immagazinare i numeri in comune nel vettore finale 
    b = 0;
    z = 0;
    // se ci sono doppioni non li ripete
    // problema: stampa anche i -1 come intersezione
    check=0;
        for(b=0;b<y;b++){
            for(x=0;x<i;x++){
                if (vet_1[b] == vet_2[x]) { 
                    for(t=0; t<z; t++){
                        if(vet_f[t]==vet_2[x]){
                        check=1;
                        }
                    }
                        if(check==0){
                        vet_f[z]=vet_2[x]; 
                        z++;
                        }
                    check=0;
                }
            }
        }

    printf("Il vettore finale è "); 
    for (w = 0; w < z; w++) { 
        printf("%d ", vet_f[w]);
        }
        
return 0;
}
