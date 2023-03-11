#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

int main(int argc, char *argv[]){
  uint32_t a1, a2, out;
  FILE *fp = fopen(argv[1],"r");
  FILE *fp2 = fopen(argv[2],"r");
  fread(&a1, sizeof(a1), 1, fp);
  fread(&a2, sizeof(a2), 1, fp2);
  a1 = ntohl(a1);
  a2 = ntohl(a2);
  out = a1+a2;
  printf("%d(%x) + %d(%x) = %d(%x)\n",a1,a1,a2,a2,out,out);
  return 0;
}