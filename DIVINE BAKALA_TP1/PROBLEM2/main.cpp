#include <iostream>


int main()
{
   //Minimum
    int L[] = {49,42,35,28,21,14,7,1,7,14,21,28,35,42,49,};
     int Min = L[0];
     for(int i=1;i<15;i++)
     if(L[i]<Min)
       Min = L[i];
    std::cout<< "Minimum value: " << Min<< std::endl;

    //Maximum
    int D[] = {49,42,35,28,21,14,7,1,7,14,21,28,35,42,49,};
         int Max = D[0];
         for(int i=1;i<15;i++)
         if(D[i]>Max)
           Max = D[i];
        std::cout<< "Maximum value: " << Max<< std::endl;



}
