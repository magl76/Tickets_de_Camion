#include "library.h"
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool fnbuscar(vector <Tticket> &vec, function <bool (Tticket&)> callback){

    for(int i=0; i<=vec.size();i++){
        Tticket ticket=vec[i];

        if(callback(ticket)==true){
            return true;
        }
    }
    return false;
}
