#include <iostream>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void ordenarMatriz(int f, int c)
{
    int mayor=0;
    int matriz[f][c];
    srand(time(0));
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
             matriz[i][j]=rand()%200;
        }
    }

    for(int i=0; i<f; i++)
    {
       for(int j=0; j<c; j++)
       {
          for(int x=0; x<f;x++)
          {
              for(int y=0; y<c; y++)
              {
                  if(matriz[i][j]<matriz[x][y])
                  {
                      mayor=matriz[i][j];
                      matriz[i][j]=matriz[x][y];
                      matriz[x][y]=mayor;
                  }
               }
           }
        }
     }
}

void multiplicarMatrices(int f, int c)
{
    int a[f][c], b[f][c], r[f][c];

    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            a[i][j]=rand()%1000;
            b[i][j]=rand()%1000;
        }
    }

    for(int i=0; i<f; i++)
        for(int j=0; j<c; j++)
            r[i][j] = 0;

    for(int x=0; x<f; x++)
    {
        for(int y=0; y<c; y++)
        {
            for(int z=0; z<f; z++)
                r[x][y]+=a[x][z]*b[z][y];
        }
    }
}

int main()
{
    int n=850;
    int m=850;
    int tam=n*m;
    clock_t star,end;
    star = clock();
    multiplicarMatrices(n,m);
    end = clock();
    //cout<<"Con "<<tam<<", datos es: "<<(end-star)/(double)CLOCKS_PER_SEC<<" s."<<endl;
    //delete aux;

    //multiplicarMatrices(2, 2);

    return 0;
}
