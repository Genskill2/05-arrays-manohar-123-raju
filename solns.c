#include <stdio.h>

  int max(int a[], int y){
    int m = a[0];
       for(int i = 0; i < y; i++){
        if(m < a[i]){
         m = a[i];
        }
       }
  return m;
  }
