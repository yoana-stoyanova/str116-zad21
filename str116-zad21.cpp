//Програмата извежда броя на елементите от масив, които са по-големи от средноаритметичната стойност на всички елементи
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<2 || n>30) {cout<<"n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int sum=0;
    for(int j=0; j<n; j++)
    {sum=sum+a[j];}

    double sredno=sum/n;
    int br=0;
    for(int f=0; f<n; f++){if(a[f]>sredno) br++;}

    cout<<"br = "<<br;

    return 0;
}
