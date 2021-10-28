
class circuit{
protected :
    float Vs_init;
public :
    circuit(){
    Vs_init = 0;};
    ~circuit(){};
    virtual float Vs(float t) = 0;
};

class circuit_A : public circuit{
protected :
    float R, C;

public :
    circuit_A();
    circuit_A(float saisie_Vs_init, float saisie_R, float saisie_C);
    float Vs(float t);
};


class circuit_B : public circuit{
private :
    float Vbe;
protected :
    float R1, R2, C;

public :
    circuit_B();
    circuit_B(float saisie_Vs_init, float saisie_R1, float saisie_R2, float saisie_C);
    float Vs(float t);
};

