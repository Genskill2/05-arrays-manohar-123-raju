#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int x[], int y){
    int max = x[0];
       for(int i = 0; i < y; i++){
        if(max < x[i]){
         max = x[i];
        }
       }
  return max;
  }
