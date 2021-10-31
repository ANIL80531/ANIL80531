#include<stdio.h>
void message(){
    printf("this line is in message function\n");
}
void italy()/*void function returns nothing*/{
    printf("I am in Italy.\n");
}
void brazil(){
    printf("I am in Brazil.\n");
}
void India(/*this is argument aslo called parameters*/){
    printf("I am in India.\n");
    message();
}
int calsum(int x,int y,int z){
    int d = x+y+z;//The default scope of a variable is local to a function in which it is defined.
    return(d);
}
float square(float xx){
    float yy = xx*xx;
    return (yy);
}

int main(){
    float square(float);//this is called prototype declaration it means this function receives a float and returns a float.
    message();
    printf("this is in the main function\n");
    italy();
    brazil();
    India();
    int a, b, c, sum;
    printf("\nEnter any three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    sum = calsum(a,b,c);//this is a call by value function
    //on calling a function we are passing value of variables to it.
    printf("\nSum of three numbers is %d",sum);
    int z = 1;
    printf("\n%d %d %d\n",z,++z,z++);//because here calling connvention is from right to left.
    printf("\n%d\n",a);//since there is no variable matching with last specifier %d,a garbage integer gets printed;
    float m = 1.5;
    float n = square(m);
    printf("\nThe square of %f is %f\n",m,n);
    //call by reference
    //instead of passing the value of a variable, we pass address of variable to a function
    //the memory address of a variable is a number
    printf("\naddress of z = %u\n",&z);//& before z is address of operator
    //the address is unsigned integer.Hence %u is format specifier for printing an unsigned integer.
    //The other pointer operator * called value at address operator.It gives the value stored at particular address
    //it is also called indirect operator
    printf("\nthe value at %u address of z is = %d\n",&z,*(&z));
    
    return 0;
}

