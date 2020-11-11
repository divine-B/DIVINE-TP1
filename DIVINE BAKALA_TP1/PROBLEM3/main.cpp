#include <iostream>


int fibonacci(int n)
{
    if((n==0)||(n==1))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n, i=0;
    std::cout<<"Input number of Finonacci: ";
    std::cin>>n;
    std::cout<<"\nFibonacci sequence are: \n";

    while(i<n)
    {
        std::cout<<" "<<fibonacci(i);
        i++;
    }

}
