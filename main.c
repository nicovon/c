#include <stdio.h>
#include <stdlib.h>

void fun_1();
void fun_2();
void fun_3();
void fun_4();
void fun_5();
void fun_6();

int main(void){
    fun_6();
    system("pause");
}

void fun_1(){
     int ch;
     int num = 0;
     while((ch = getchar()) != EOF){
             if(ch == '('){
                   num++;      
             }else if(ch == ')'){
                   num--;      
             }
     }
     
     if(num != 0)
         printf("false\n");       
     else
         printf("true\n");
}

void fun_2(){
     printf("%d", 32);
     printf("%s", 48);   
}

void fun_3(){
	 int num;
	 while(scanf("%d", &num)){
	 		 if((num%4 == 0 && num%100 != 0) || num%400 == 0)
	 		 		  printf("true\n");
             else
             	 	  printf("false\n");
	 }	 
}

void fun_4(){
	int num;
	float res1,res2;
	float a = 1;
	while(scanf("%d", &num)){
		do{
			res1 = a;
			res2 = (a+(num/a))/2;
			a = res2;
		}while(res1 != res2);
		
		printf("the result is:%f\n", res1);
	}
}

void fun_5(){
	printf("1,2");
	for(int i = 3; i <= 10000; i += 2){
		for(int j = 3; j <= i; j += 2){//偶数不可能为素数 
			if(i%j == 0){
				if(i == j)
					printf(",%d", i);
				else
					break;
			}
		}
	}	
}

void fun_6(){
		
}
