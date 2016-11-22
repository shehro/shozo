#include<stdio.h>
#include<conio.h>

main()

{
      int a[3][3], b[3][3], out[3][3];

     for (int i=0; i<=2; i++)
     {
         for(int j=0; j<=2; j++)
         {
                 
         printf("Enter the Value: ");
         printf("Enter the  2nd Value:");  scanf("%d %d",&a[i][j],&b[i][j]);
         
         }
         
     }
         for(int i=0; i<=2; i++)
         {
                 for(int j=0; j<=2; j++)
                 {
                         out [i][j]= a[i][j]+b[i][j];
                 }
         }
         for(int i=0; i<=2; i++)
         {
                 for(int j=0; j<=2; j++)
                 { 
                         printf("%d ",out[i][j]); 
                 }
         printf("\n");
         }
 
getch();
         
}
