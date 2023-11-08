#ifndef MY_PONTEH
#define MY_PONTEH

#include <Arduino.h>

class PonteH{
    private:
        int In1;
        int In2;
        int In3;
        int In4;
        
        int En1;
        int En2;
        
        int velA;
        int velB;

    public:
        
        PonteH(int In1, int In2 , int In3 ,int In4, int En1, int En2, int velA, int velB);

    void init(int vel1 = -1, int vel2 = -1);
    void direita(int vel1 = -1, int vel2 = -1);
    void esquerda(int vel1 = -1, int vel2 = -1);
    void frente(int vel1 = -1, int vel2 = -1);
    void tras(int vel1 = -1, int vel2 = -1);
    void frenteDireita(int vel1 = -1, int vel2 = -1);
    void frenteEsquerda(int vel1 = -1, int vel2 = -1);
    void trasDireita(int vel1 = -1, int vel2 = -1);
    void trasEsquerda(int vel1 = -1, int vel2 = -1);
    void stop();

};
#endif