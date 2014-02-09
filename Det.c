#include<stdio.h>


main()
{
int a[3][3],R=0,A,N,D=0,Y=0,L=0,O=0,P=0,E=0,Z=0,c=0,k=0,d=0,n ,b=0,z=0;

          printf("\t\tIngrese los valores de la matriz\n");
          for(A=0;A<3;A++){
          for(N=0;N<3;N++){
          printf("\n elemento a[%d,%d]:",A+1,N+1);
          scanf("%d",&a[A][N]);

          if(A==0 && N==0)
        {
          c=a[A][N];
        }
        else

        if(A==0 && N==1){
        R=a[A][N];
        }
        else

        if(A==0 && N==2){
        Y=a[A][N];
        }
        else

        if(A==1 && N==0){
        D=a[A][N];
        }
        else

        if(A==1 && N==1){
        L=a[A][N];
        }
        else

        if(A==1 && N==2){
        O=a[A][N];
        }
        else

        if(A==2 && N==0){
        P=a[A][N];
        }
        else

        if(A==2 && N==1){
        E=a[A][N];
        }
        else

        {
        Z=a[A][N];
        }
                         }
                            }

printf("\n Esta es tu matriz:\n\n");
for(A=0;A<3;A++){
for(N=0;N<3;N++){

printf("\n\n %6d",a[A][N]);
                }
printf("\n\t\t ");
}

printf("Que desea hacer?\n\n\Presione 1 para obtener el Determinante");
scanf("%d",&n);


if(n==1)
{
d=((L*Z)-(E*O));
k=(-1)*((D*Z)-(P*O));
b=((D*E)-(P*L));
z=(c+d+R+k+Y+b);
printf("\n\n\n\tEldeterminante de Tu matriz es = %d",z);


}
getch();
}
