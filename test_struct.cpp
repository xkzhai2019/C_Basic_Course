#include <stdio.h>

struct STest{
  int n;
  int m;
  int GetCount(){
      return n+m;
  }
};

int main(){
    int i = 0;
    scanf("%d",&i);
    printf("Hello,C!\n");
    int j  = i+1;
    return 0;
}
