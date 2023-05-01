#pragma once

namespace miLib{
    bool equalsLenght(char arr1[], char arr2[]){
        int i = 0;
        int cont1 = 0;
        int cont2 = 0;

        while(true){
            if(arr1[i] != ' ' && arr1[i] == '\0'){
                break;
            }
            cont1++;
            i++;
        }

        i = 0;
        while(true){
            if(arr2[i] != ' ' && arr2[i] == '\0'){
                break;
            }
            cont2++;
            i++;
        }

        return cont1 == cont2;
    }
}