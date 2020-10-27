#include <iostream>
 
using namespace std;
 
int main() {
 
float consumo, tempo, velocidade, distancia, litros;

consumo = 12.0;

scanf("%f", &tempo);

scanf("%f", &velocidade);

distancia = tempo*velocidade;

litros = distancia/consumo;

printf("%.3f", litros);
 
return 0;
}
