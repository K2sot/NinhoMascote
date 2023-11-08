#include "ponteH.h"

PonteH::PonteH(int In1, int In2 , int In3 ,int In4, int En1, int En2, int velA, int velB){

    this->In1 = In1;
    this->In2 = In2;
    this->In3 = In3;
    this->In4 = In4;

    this->En1 = En1;
    this->En2 = En2;

    this->velA = velA;
    this->velB = velB;

    init();
}

void PonteH::init(int vel1 ,int vel2 ){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    pinMode(In1, OUTPUT);
    pinMode(In2, OUTPUT);
    pinMode(In3, OUTPUT);
    pinMode(In4, OUTPUT);

    analogWrite(En1, velA);
    analogWrite(En2, velB);

}

void PonteH::direita(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}

void PonteH::esquerda(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);
}

void PonteH::frente(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);
}

void PonteH::tras(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);  

    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}

void PonteH::frenteDireita(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);
}

void PonteH::frenteEsquerda(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);
}

void PonteH::trasDireita(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);
    
    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}

void PonteH::trasEsquerda(int vel1 ,int vel2){
    if (vel1 == -1) {
        vel1 = velA;
    }
    if (vel2 == -1) {
        vel2 = velB;
    }

    analogWrite(En1, vel1);
    analogWrite(En2, vel2);

    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}

void PonteH::stop(){
    digitalWrite(In1,LOW);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,LOW);
}