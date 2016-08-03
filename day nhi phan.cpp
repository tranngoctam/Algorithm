#include <conio.h>
#include <stdio.h>

int main()
{
  
  int x[30], n,i,k,l,r, dem;

  printf("\Nhap vao do dai cua day: ");
  scanf("%d",&n);
  // Khoi gan gia tri cua day
  for (i=0; i<n; i++)
        x[i] = 0;
  dem=0;
  while (i>=0)
  {
       dem++;
      for (i=0; i<n; i++)
        printf("%d  ",x[i]);
      printf("\n");
        i=n-1;
      while ((i>=0) && (x[i] == 1)) i--;


      if(i>=0)
      {
        x[i] = 1;
         for (int j= i+1; j<n; j++)
            x[j] = 0;

      }

  }

  printf("%d",dem);
  getch();
}
