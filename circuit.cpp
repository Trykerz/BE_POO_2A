#include "circuit.h"
#include <cmath>
#include <iostream>

using namespace std;

circuit_A :: circuit_A(){
    C = 0;
    R = 0;
}

circuit_A :: circuit_A(float saisie_Vs_init, float saisie_R, float saisie_C, float saisie_Ve){
    C = saisie_C;
    R = saisie_R;
    Vs_init = saisie_Vs_init;
    Ve_init = saisie_Ve;
}

float circuit_A :: Vs(float t){
    V_sp = (V_e-Vs)/(R*C);
    return V_sp*t;
}

circuit_B :: circuit_B(){
}

circuit_B :: circuit_B(float saisie_Vs_init, float saisie_R1, float saisie_R2, float saisie_C){
    Vs_init = saisie_Vs_init;
    R1 = saisie_R1;
    R2 = saisie_R2;
    C = saisie_C;
    Vbe = 0.6;
}

float circuit_B :: Vs(float t){

return 0;
}
