#include<stdio.h>
#define OPERATION_NUM 5

/* ======== Function Declarations " Prototypes " ======== */
void HelloAndMenu(void);
double addition(double a, double b);
double subtraction(double a, double b);
double multication(double a, double b);
double divition(double a, double b);
int pow(int a, int b);
/* ======== The MAIN Function ======== */
int main(void){

    int continuation_selection;
    int operation_Selection;
    double F_number;
    double S_number;
    int base;
    int power;
    while(1){
    while(1){
    HelloAndMenu();
    printf("Select One Operation :");
    scanf("%d", &operation_Selection);
    if(operation_Selection <=OPERATION_NUM)
        break;
    else
        printf("Invalid Selection ... Please Try Again \n");

    }

    switch(operation_Selection){
    case 1:
        printf("\nYour Selection Is Addition \n");
        printf("\nEnter The First Number :");
        scanf("%lf", &F_number);
        printf("Enter The Second Number :");
        scanf("%lf", &S_number);
        printf("%.2lf + %.2lf = %.2lf\n", F_number, S_number, addition(F_number, S_number));
        break;
    case 2:
        printf("\nYour Selection Is Subtraction \n");
        printf("\nEnter The First Number :");
        scanf("%lf", &F_number);
        printf("Enter The Second Number :");
        scanf("%lf", &S_number);
        printf("%.2lf - %.2lf = %.2lf\n", F_number, S_number, subtraction(F_number, S_number));
        break;
    case 3:
        printf("\nYour Selection Is Multiplication  \n");
        printf("\nEnter The First Number :");
        scanf("%lf", &F_number);
        printf("Enter The Second Number :");
        scanf("%lf", &S_number);
        printf("%.2lf * %.2lf = %.2lf\n", F_number, S_number, multication(F_number, S_number));
        break;
    case 4:
        while(1){
        printf("\nYour Selection Is Divition \n");
        printf("\nEnter The First Number :");
        scanf("%lf", &F_number);
        printf("Enter The Second Number :");
        scanf("%lf", &S_number);
        if(S_number!=0){
        printf("%.2lf / %.2lf = %.2lf\n", F_number, S_number, divition(F_number, S_number));
        break;
        }
        else
            printf("\nCan not4 Divided By Zero ... Please Try Again \n");
        }
        break;

     case 5:
         printf("\n Your Selection is Power\n");
        printf("Enter The base : ");
        scanf("%d", &base);
        printf("Enter The power : ");
        scanf("%d", &power);
        printf("%d to the  Power of %d = %d\n ", base, power, pow(base, power));
        break;


}
    while(1){
    printf("\n Do You Need To perform Another Operation :\n");
    printf("1]YES\n");
    printf("2]NO\n");
    scanf("%d", &continuation_selection);
    if(continuation_selection==1 || continuation_selection==2)
        break;
    else{
        printf("Invalid Selection .... Please Try Again \n");
    }}
    if(continuation_selection==1){
        ;
    }
    else
        return 0;


    }
    return 0;
}



/* ======== User-Defined Functions ========== */

void HelloAndMenu(void){

    printf("=============== < SIMPLE CALCULATOR > ===============\n");
    printf("\n---------- Welcome With The Calculator -----------\n\n");
    printf("The Menu :\n\n");
    printf("1] Addition \n");
    printf("2] Subtraction\n");
    printf("3] Multiplication\n");
    printf("4] Division\n");
    printf("5] power\n");
}


double addition(double a, double b){
    return a+b;
}


double subtraction(double a, double b){
    return a-b;
}


double multication(double a, double b){
    return a*b;
}

int pow(int a, int b) {
    int result = 1;
    for (int i=1; i<=b; i++) {
        result *= a;
    }
    return result;
}


double divition(double a, double b){
    return a/b;
}
