//
// Created by Bryan on 29/11/2019.
//

#ifndef PORTAFOLIONO_2_FSCHOOL_H
#define PORTAFOLIONO_2_FSCHOOL_H

#endif //PORTAFOLIONO_2_FSCHOOL_H


struct listado_evaluacion{
    float ponderacion;
    char *nombremateria;
    int calificacion;
};

struct info_materias{
    char *nombre_asignatura;
    struct listado_evaluacion evaluacion;
};

struct base_estudiantes{
    char *nombree_studiante;
    int matricula;
    int edad;
    struct info_materias materias;
}Estudiante;

