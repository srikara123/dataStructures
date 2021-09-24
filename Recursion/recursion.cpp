#include <iostream>

void fun(int n) {
  for(int i=0; i<n; i++) {
    fun(n-1);
  }
  printf(" Done recursing \n");
}

int main()
{
    fun(2);
    printf(" Ended \n");
    return 0;
}