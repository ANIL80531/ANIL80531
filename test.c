#include <stdio.h>
long int words(long int);
long int NOD(long int);
int main(){
    long int figure;
    long  int a;
    printf("Enter a number in figures\n");
    scanf("%d",&figure);
    words(figure);
    NOD(figure);
    return 0;
}


long int NOD(long int x){
    long int cod = 0;
    while (x>0){
        x = x/10;
        cod++;
    }
    printf("cod = %d\n",cod);
    return 0;

}

long int words(long int z){
    switch(z){
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");
            break;
        case 11:
            printf("Eleven\n");
            break;
        case 12:
            printf("Twelve\n");
            break;
        case 13:
            printf("Thirteen\n");
            break;
        case 14:
            printf("Fourteen\n");
            break;
        case 15:
            printf("Fifteen\n");
            break;
        case 16:
            printf("Sixteen\n");
            break;
        case 17:
            printf("Seventeen\n");
            break;
        case 18:
            printf("Eighteen\n");
            break;
        case 19:
            printf("Nineteen\n");
            break;
        case 20:
            printf("Twenty\n");
            break;
        case 30:
            printf("Thirty\n");
            break;
        case 40:
            printf("Forty\n");
            break;
        case 50:
            printf("Fifty\n");
            break;
        case 60:
            printf("Sixty\n");
            break;
        case 70:
            printf("Seventy\n");
            break;
        case 80:
            printf("Eighty\n");
            break;
        case 90:
            printf("Ninty\n");
            break;
        case 100:
            printf("Hundred\n");
            break;
        case 1000:
            printf("Thousand\n");
            break;
        case 100000:
            printf("Lakh\n");
            break;
        case 10000000:
            printf("Crore\n");
            break;
        case 1000000000:
            printf("Arab\n");
            break;
        case 100000000000:
            printf("Kharab\n");
            break;
        default:
            printf("I can count upto Kharab only. z = %d\n",z);
    }
    return 0;
}