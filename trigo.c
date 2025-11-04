#include <stdio.h>
#include "trigo.h"
#include <math.h>

long int fatorial (int numero) {
    long int fat = 1;
    if ( numero == 0) {
        return fat;
    }
    else {
        for (int i = numero; i > 0; i--){
            fat = fat * i;
        }
        return fat;
    }    
}

double converterGrausEmRadianos(double grau){
    double convertido = (grau * (3.14/180));
    return convertido;
}

double converterRadianosEmGraus(double grau) {
    double conversaoRadianoEmGrau = (grau * (180/3.14));
    return  conversaoRadianoEmGrau;
}

double tangente(double anguloEmGraus) {
    double s = seno(anguloEmGraus);
    double c = cosseno(anguloEmGraus);
    double resultado;
    if ( c < 0.0005)
        resultado = INFINITY;
    else
        resultado = s / c;
    return resultado;
}

double cosseno(double anguloEmGraus){
    double conversao = converterGrausEmRadianos(anguloEmGraus);
    
    double t1, t2, t3;
    double soma = 0.0;
    double termo;
    

    for (int k=0; k < 10; k++) {
        t1 = pow(-1,k);
        t2 = pow(conversao, 2*k);
        t3 = fatorial(2*k);
        termo = (t1* t2) / t3; 
       
        soma = soma + termo;
        
    }
    return soma;
}

double seno(double anguloEmGraus){        
    double valorCosseno = cosseno(anguloEmGraus);
    double cosaoquadrado = valorCosseno*valorCosseno;
    double valorseno = sqrt(1 - (cosaoquadrado));
    printf("%lf %lf %lf \n", valorCosseno, cosaoquadrado, valorseno);
    return valorseno;
}

