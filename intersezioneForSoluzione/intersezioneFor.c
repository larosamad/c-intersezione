#include <stdio.h> 
#define MAX 30 

int main(void) 
{ 
    int vet_1[30], vet_2[30], vet_f[30]; 
    int len1 = 0, len2 = 0, len_f = 0; 
    int temp, i, j, k; 

    /* 
    int len1, len2 e len_f tengono traccia della 
    lunghezza dei rispettivi vettori 
    */

    // Inserimento del primo vettore 
    printf("Inserisci i numeri per il primo vettore:\n"); 
    while (len1 < 30){ 
        scanf("%d", &temp); 
        if (temp == -1){ 
            break; 
        } 
        vet_1[len1++] = temp; 
    } 

    // Inserimento del secondo vettore 
    printf("Inserisci i numeri per il secondo vettore :\n"); 
    while (len2 < 30){ 
        scanf("%d", &temp); 
        if (temp == -1){ 
            break; 
        } 
        vet_2[len2++] = temp; 
    } 

    // immagazinare i numeri in comune nel vettore finale MA se ci sono doppioni li ripete 
    // problema risolto con il ciclo for: 
    /* 
    Dobbiamo fare due cicli: 
    1. il primo ciclo scorre ogni elemento del primo vettore; 
    2. il secondo ciclo scorre ogni elemento 
    del secondo vettore per ogni elemento del primo; 
    3. Se un elemento del primo vettore è uguale a un elemento del secondo vettore, 
    verifica se è già presente nel vettore finale. 
    4. Se l'elemento non è gia presente nel vettore finale, lo aggiunge. 
    */ 
    // Trova l'intersezione evitando duplicati 
    for (i = 0; i < len1; i++){ 
        for (j = 0; j < len2; j++){ 
            if (vet_1[i] == vet_2[j]){ 
                // Verifica che l'elemento non sia già stato aggiunto a vet_f 
                int controllo = 0; 
                for (k = 0; k < len_f; k++){ 
                    if (vet_f[k] == vet_1[i]){ 
                        controllo = 1; 
                        break;
                    } 
                } 
                if (controllo == 0){ 
                    vet_f[len_f++] = vet_1[i]; 
                } 
            } 
        } 
    } 

    // Stampa il vettore finale 
    printf("Il vettore finale è: "); 
    for (i = 0; i < len_f; i++) 
    { 
        printf("%d ", vet_f[i]); 
    } 
    printf("\n"); 

    return 0; 
}