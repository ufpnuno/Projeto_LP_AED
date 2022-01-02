//
// Created by Nuno on 29/12/2021.
//

#ifndef PROJETO_LP_AED_GENETICALGORITHM_H
#define PROJETO_LP_AED_GENETICALGORITHM_H

#include "creation_resizing.h"
#include "csvData.h"
#include "tripsandcities.h"

typedef struct individuals {
    int *individual;
    double fitness;
    double probability;
} INDIVIDUAL;

typedef struct population {
    int generation;
    int bestIndividuals;
    INDIVIDUAL individuals;
    struct population *next;
} POPULATION;


POPULATION *initialPop(POPULATION *population, int populationSize);

POPULATION *createPopulation(CITYNODE *cities, POPULATION *population, int populationSize);

double evaluate_fitness(CITYNODE *cities, POPULATION *population);

double calculateDistance(CITYNODE *cities, int id_1, int id_2);

#endif //PROJETO_LP_AED_GENETICALGORITHM_H
