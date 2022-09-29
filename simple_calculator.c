#include <stdio.h>
#include<math.h>
int main() {
float n1,n2,ans;
int ch;
printf("Enter value of 1st number : ");
scanf("%f",&n1);
printf("\nEnter value of 2nd number : ");
scanf("%f",&n2);
printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Power");
printf("\nEnter ur choice : ");
scanf("%d",&ch);
switch(ch){
    case 1: ans = n1+n2;
    break;
    case 2: ans = n1-n2;
    break;
    case 3: ans = n1*n2;
    break;
    case 4 : ans = n1/n2;
    break;
    case 5: ans = pow(n1,n2);
    break;
    default : printf("incorrect choice");
    break;
}
printf("result : %.2f",ans);
    return 0;
}
