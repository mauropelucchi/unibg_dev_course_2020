/*


INFORMATICA 12 CFU – Modulo di Programmazione 
(ING. INFORMATICA)
Prof. G. PSAILA

APPELLO DEL 22/02/2019


Si consideri un programma per gestire la raccolta delle informazioni relative ai coupon per acquisto di servizi, 
venduti da un sito di vendita di questi coupon. Un coupon è descritto da un tipo strutturato denominato COUPON, i cui campi 
sono un codice di 10 caratteri (che identifica univocamente un coupon), la data di emissione (stringa nel formato internazionale aaaa-mm-gg ), 
la data di scadenza, il codice dell’esercente (stringa di 10 caratteri), l’indirizzo email dell’acquirente (stringa di 250 caratteri), 
il valore del coupon in Euro, lo stato del coupon (numero intero, dove 1 indica che il coupon non è stato ancora utilizzato, 2 indica 
che è stato utilizzato).
Si definisca quindi la struttura dati per una lista dinamica dove il campo informativo del nodo è a sua volta basato sul tipo COUPON.

Si scriva la funzione denominata EstraiCouponDuplicatiUsati che riceve come parametri due liste di coupon, denominate rispettivamente 
lista1 e lista2. La funzione restituisce l’indirizzo della testa di una nuova lista ottenuta inserendo i coupon presenti in lista1 con 
lo stato non utilizzato e in lista2 con lo stato utilizzato (nella nuova lista, vanno inseriti con quest’ultimo stato). La funzione 
restituisce NULL in caso di errore o in cui non ci siano coupon con le caratteristiche desiderate.
N.B. Si eviti la duplicazione del codice.
N.B. Si usi il codice per stabilire se un coupon è presente in entrambe le liste.


*/

#include <cstring>
#include <iostream>
using namespace std;

struct COUPON {
    char codice[11];
    char data_emissione[11];
    char data_scadenza[11];
    char codice_esercente[11];
    char email_acquirente[251];
    float valore;
    int stato;
};


struct NODO {
    COUPON info;
    NODO *next;
};

NODO* EstraiCouponDuplicatiUsati(NODO *&lista1, NODO *lista2);
int Inserimento_in_Testa(NODO *&head, NODO *pCoupon);

int main() {

    NODO *head;
    int scelta = -1;
    while(scelta != 0) {
        COUPON info;
        cout << "Inserisci il codice" << endl;
        cin.getline(info.codice, 10, '\n');
        cout << "Inserisci la data di emissione" << endl;
        cin.getline(info.data_emissione, 10, '\n');
        cout << "Inserisci la data di scadenza" << endl;
        cin.getline(info.data_scadenza, 10, '\n');
        cout << "Inserisci la mail dell'acquirente" << endl;
        cin.getline(info.email_acquirente, 250, '\n');
        cout << "Inserisci il valore" << endl;
        cin >> info.valore;
        cout << "Inserisci lo stato (1 non utilizzato, 2 utilizzato)" << endl;
        cin >> info.stato;
        cin.ignore(55, '\n');
        
        NODO *pCoupon;
        pCoupon = new NODO();
        pCoupon->info = info;
        pCoupon->next = NULL;
        int esito = Inserimento_in_Testa(head, pCoupon);

        cout << "Esito inserimento: " << esito << endl;


        cout << "Vuoi continuare (0 termina, <> 0 continuo)" << endl;
        cin >> scelta;

    }

}


int Inserimento_in_Testa(NODO *&head, NODO *pCoupon) {
    NODO *t;
    t = new NODO;
    if( t == NULL)
        return 1;
    
    t->info = pCoupon->info;
    t->next = head;
    head = t;
    return 0;
}