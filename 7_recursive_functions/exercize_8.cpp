/*

Si scriva un sottoprogramma C/C++ che effettui la ricerca di un intero in un vettore 
ordinato (in senso crescente) in maniera ricorsiva, restituendo 
l' indice della prima occorrenza nel vettore del valore cercato.

// Restituisce l' indice della cella contenente un valore 
// uguale a x; oppure -1

*/

int dicotomica(int v[], int left, int right, int x)
{
  int middle;

  if (left > right)
    return -1

           middle = (left + right) / 2;

  if (x < v[middle])
    return dicotomica(v, left, middle - 1, x);

  if (x == v[middle])
    return middle;

  return dicotomica(v, middle + 1, right, x);
}

int cerca(int v[], int len, int x)
{
  return dicotomica(v, 0, len - 1, x);
} // end cerca
