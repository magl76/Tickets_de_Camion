#ifndef EXAMEN_1_LIBRARY_H
#define EXAMEN_1_LIBRARY_H

#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Tticket{
    unsigned origen;
    unsigned destino;
    unsigned fecha;
    unsigned precio;
};

bool callback (Tticket ticket_1);

bool fnbuscar(vector <Tticket> &vec, function <bool (Tticket&)> callback);//funcion que recibe UN VECTOR POR REFERENCIA LLAMADO vec, y una funcion tipo BOOL QUE RECIBE COMO PARÀMETRO UN TTICKET POR REFERENCIA Y SE LLAMA CALLBACK

#endif //EXAMEN_1_LIBRARY_H
