#pragma once

namespace libreria{
    int indexOf(char arr[], char c, int tamano){
        for(int i = 0; i < tamano; i++){
            if(c == arr[i]){
                return i;
            }
        }
        return -1;
    }
}