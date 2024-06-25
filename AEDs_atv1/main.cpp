/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   newmain.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 9 de maio de 2024, 22:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */

const int TAM = 100;

int main(int argc, char** argv) {

    int x[TAM];

    int n, p;
    double med = 0.0, med_apara = 0.0, desv = 0.0, num = 0.0, pot = 0.0;

    printf("Quantos valores serão inseridos: ");
    scanf("%i", &n);
    printf("Quantos valores a serem desconsiderado da média aparada: ");
    scanf("%i", &p);

    for (int i = 0; i < n; i++) {

        printf("Insira um valor: ");
        scanf("%i", &x[i]);

    }

    //media    

    for (int i = 0; i < n; i++) {

        med = med + x[i];

    }

    med = med / n;

    printf("\n\t Média: %.3lf", +med);
    printf("\n \t Vetor ordenado: ");

    //media aparada

    //algoritmo de ordenação

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (x[i] > x[j]) {

                int ant = x[i];
                x[i] = x[j];
                x[j] = ant;

            }
        }
    }
    
    //print vetor ordenado

    for (int k = 0; k < n; k++) {

        printf(",%i ", x[k]);

    }

    for (int i = p; i < n - p; i++) {

        med_apara = med_apara + x[i];

    }
    
    med_apara = med_apara/n;

    printf("\n\t Média Aparada: %.3lf", +med_apara);

    //desvio padrão

    for (int i = 0; i < n; i++) {

        pot = x[i] - med;
        pot = pot*pot;
        num = num + pot;

    }

    desv = num /n;
    desv = sqrt(desv);

    printf("\n\t Desvio Padrão: %.3lf", +desv);

    return 0;
}

