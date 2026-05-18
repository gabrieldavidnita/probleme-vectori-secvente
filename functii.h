#ifndef FUNCTII_H_INCLUDED
#define FUNCTII_H_INCLUDED
using namespace std;
#include <iostream>
#include <fstream>

void citireVector(int v[], int&dim)
{
    ifstream read("data.txt");
    read>>dim;
    for(int i=0; i<dim;i++)
    {
        read>>v[i];
    }
}

void afisareVector(int v[], int dim)
{
    for(int i=0; i<dim; i++)
    {
        cout<<v[i];
    }
}
//                0  1  2  3  4  5  6  7  8  9
//initiere: d=10, 24 54 12 41 49 43 22 42 92 88
// i=0, smax=0, dmax=0
// i<n     v[i]%2==0        j     j+1<n && v[j+1]%2==0     j++       j-i>dmax-smax     smax=i;    dmax=j;      i;
// 0<10     24%2==0 A       0      1<10  && 54%2==0         1
//                                 2<10  && 12%2==0         2
//                                 3<!0  && 41%2==0 F                2>0                0          2           3
// 3<!0     41%2==0 F                                                                                          4
// 4<10      49%2==0 F                                                                                         5
// 5<10      43%2==0 F                                                                                         6
// 6<10      22%2==0 A      6      7<10  && 42%2==0         7
//                                 8<10  && 92%2==0         8
//                                 9<10  && 88%2==0         9
// 9<10                            10<10 F                           3>2 da              6          9          9
// 10<10 F


void secvente(int v[],int n){
    int smax,dmax;
    smax=1;
    dmax=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]%2==1)
        {
            int j=i;
            while(j+1<n && v[j+1]%2==0)
            {
                j++;

            }
            if(j-i>dmax-smax)
            {
                    smax=i;
                    dmax=j;
                    i=j;
            }
        }

    }

    cout<<"inceput"<<smax<<endl;
    cout<<"sfarsit"<<dmax<<endl;


}

int  primulElementImpar(int v[],int n)
{
    int poz=-1;
    for(int i=0;i<n&&poz!=-1;i++)
    {
        if(v[i]%2==1){
            poz=i;
        }

    }
    return poz;

}

int ultimulElementImpar(int v[],int n)
{
    int poz=-1;
    for(int i=n-1;i>=0&poz!=-1;i--)
    {
         if(v[i]%2==1){
            poz=i;
        }
    }
    return poz;
}

int sumaInterval(int v[],int dim ,int init, int fin){
    int s=0;
    for(int i=init;i<=fin;i++)
    {

        s+=v[i];

    }
    return s;
}


#endif // FUNCTII_H_INCLUDED
