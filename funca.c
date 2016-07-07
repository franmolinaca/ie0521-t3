#include<stdio.h>

int main() {
   int res;

   res = sum(1,2,3,4,3,2,1);

   printf("Addition of numbers is : %d \n",res);
   return (0);
}

int sum(int num1, int num2, int num3, int num4, int num5, int num6, int num7) {
        int cal=0;
        if(num7 > 4)
        {
                cal = num1 + num2 + num3 + num4 - num5 - num6;
                return (cal);
        }else
        {
                cal = num1 + num2 + num3 + num4 + num5 - num6;
                return (cal);
        }
}
