#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	scanf("%d",&score);
	if(score>=90)
	   printf("太優秀了!");
	else if (score>=80)
	    printf("表現不錯!");
	else if (score>=70)
	    printf("恭喜通過!");
	else if (score>=60)
	    printf("好險有過:)");
	else printf("記得報名暑修");	  
 
 
 
	return 0;
}
