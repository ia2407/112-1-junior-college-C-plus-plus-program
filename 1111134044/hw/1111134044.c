#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score=0;
	scanf("%d",&score);
	if(score>=90)
      printf("表現優秀!得A");
    else if (score>=80)
	  printf("表現不錯!得B"); 
	else if (score>=70)
	  printf("恭喜通過!得C");
	else if (score>=60)
	  printf("好險有過!得D");
	else printf("請於8/31前報名暑修"); 
	return 0;
}
