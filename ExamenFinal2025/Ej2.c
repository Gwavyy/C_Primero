/*
 * Programa:
 * Sinopsis:  Se dispone de un modelo de calificaciones de diversas asignaturas que emplea las siguientes estructuras de datos:
 * Se solicita desarrollar una función calcular_estadisticas_asignaturas() que obtenga, para cada asignatura, el número de alumnos
 * aprobados, suspensos y la nota media de los presentados en cada una de las dos convocatorias de la asignatura. Hecho esto,
 * se precisa una función resultados_asignaturas() que genere un fichero de texto con la información obtenida, denominado
 * resultados.txt, que ofrezca una salida como la que se describe:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */
#define MAX_ALUMNOS 50
#define MAX_ASIGNATURAS 25
#define APROBADO 5.0

enum convocatorias {PRIMERA, SEGUNDA};

struct convocatoria {
    unsigned int num_presentados; // número de alumnos presentados

    float notas[MAX_ALUMNOS]; // calificaciones obtenidas por los diversos alumnos

    unsigned int num_aprobados; // número de alumnos que consiguen aprobado (por calcular)

    unsigned int num_suspensos; // número de alumnos que no consiguen aprobado (por calcular)

    float nota_media; // nota media de los alumnos presentados (por calcular)
};

struct asignatura {
    char codigo[4]; // código de la asignatura

    char descripcion[50]; // descripción de la asignatura

    unsigned int num_matriculados; // número de alumnos matriculados

    struct convocatoria convocatorias[2]; // array para los datos de PRIMERA o SEGUNDA convocatoria
};

void calcular_estadisticas_asignaturas();
int main(){
    struct asignatura tabla_asignaturas[MAX_ASIGNATURAS] = {
        "835",
        "Programacion",
        45,
        {
            {
                5,
                {2.5,4.8,6,6.2,8},
                0,
                0,
                0
            },
        {
            3,
            {5.9,6.0,8},
            0,
            0,
            0
            }
        }
    };
    return 0;
}