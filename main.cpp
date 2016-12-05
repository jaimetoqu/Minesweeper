#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a,b,r=0,n1,n2,cont=0,aux;
    int array[7][7];
    //llenamos la matriz
     for(int f=1;f<=7;f++)
     {
          for(int c=1;c<=7;c++)
        {
         array[f][c]=1;
        }
     }
   //se llenan los ceros de manera aleatoria
          
          srand(time(0));
            a=( 1+rand() % 7);
            b=( 1+rand() % 7);
            array[a][b]=0;
            a=( 1+rand() % 7);
            b=( 1+rand() % 7);
            array[a][b]=0;
            a=( 1+rand() % 7);
            b=( 1+rand() % 7);
            array[a][b]=0;
            a=(1+rand() % 7);
            b=(1+rand() % 7);
            array[a][b]=0;
            a=( 1+rand() % 7);
            b=( 1+rand() % 7);
            array[a][b]=0;
            srand(time(0));   
     
     
     
    while(r==0&&cont<20)
    { // pedimos los numeros para el juego y vemos el resultado
       cout<<"introduzca la posicion a descubrir"<<endl;
         cin>>n1;
         cin>>n2;
         cout<<endl;
        if(array[n1][n2]==0||n1>7||n2>7)
         {r=1;
         }
         else
         {array[n1][n2]=2;
            cont++;
             for(int f=1;f<=6;f++)
            {
              for(int c=1;c<=6;c++)
              {
                 aux=array[f][c];
                  if(aux==2)
                  {
                   aux=aux-1;
                   cout<<aux;
                  }
                  else
                  {cout<<" ";
               }
              }
              cout<<endl;
            }
         }
      }
     
     //vemos si el jugador gano
     if(cont==20)
     {  cout<<"usted gano "<<endl;
            for(int f=1;f<=7;f++)
            {
              for(int c=1;c<=7;c++)
              {
                  if(array[f][c]==0)
                  {cout<<"*";
                  }
                  else
                    {
                         if(array[f][c]==1)
                          {cout<<array[f][c];
                          }
                         else
                          {aux=array[f][c]-1;
                           cout<<aux;
                          }
                    }
              }cout<<endl;
            }
     }
     else
     {
         cout<<"usted abrio una mina o metio una posicion inexistente" <<endl;
          for(int f=1;f<=7;f++)
            {
              for(int c=1;c<=7;c++)
              {
                  if(array[f][c]==0)
                  {cout<<"*";}
                  else
                    {
                    if(array[f][c]==1)
                    {cout<<array[f][c];
                    }
                     else
                     {aux=array[f][c]-1;
                     
                     cout<<aux;
                     }
                    }
              }
              cout<<endl;
           }
     }    
    system("PAUSE");
    return EXIT_SUCCESS;
}
