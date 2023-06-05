# include<stdio.h>
# include<conio.h>
# include<math.h>
void main (){
   float a,b,c,r1,r2,rp,ip,d;
   clrscr();
   printf("\t\t\t\tQUADRATIC EQUATION");
   printf ("\n\t\tenter the values of a b c:\n");
   printf("\t\t");
   scanf (" %f",&a);
   printf("\t\t");
   scanf("%f",&b);
   printf("\t\t");
   scanf("%f",&c);
   d= b*b-4*a*c;
   if (d>0){
      r1 = (-b+sqrt(d))/(2*a);
      r2 = (-b-sqrt (d))/( 2*a);
      printf ("\t\tThe real roots:r1= %f and  r2=%f", r1, r2);
   }
   else if (d==0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf ("\t\troots are equal:r1=r2=%f", r1);
   }
   else{
      rp=-b/(2*a);
      ip=sqrt(-d)/(2*a);
      printf("\t\tRoots are imaginary:r1= %.2f+%.2fi and r2= %.2f-%.2fi",rp,ip,rp,ip);
      }
   getch ();

}