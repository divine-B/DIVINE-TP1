#include <iostream>

int main()
{
  bool bAnswer;
  std::cout<< "OR Truth Table\n\n";
  std::cout<<"0 + 0 + 0 = " <<(bAnswer = 0 + 0 + 0) << std::endl;
  std::cout<<"0 + 0 + 1 = " <<(bAnswer = 0 + 0 + 1) << std::endl;
  std::cout<<"0 + 1 + 0 = " <<(bAnswer = 0 + 1 + 0) << std::endl;
  std::cout<<"0 + 1 + 1 = " <<(bAnswer = 0 + 1 + 1) << std::endl;
  std::cout<<"1 + 0 + 0 = " <<(bAnswer = 1 + 0 + 0) << std::endl;
  std::cout<<"1 + 0 + 1 = " <<(bAnswer = 1 + 0 + 1) << std::endl;
  std::cout<<"1 + 1 + 0 = " <<(bAnswer = 1 + 1 + 0) << std::endl;
  std::cout<<"1 + 1 + 1 = " <<(bAnswer = 1 + 1 + 1) << std::endl;




  std::cout<< "AND Truth Table\n\n";
  std::cout<<"0 & 0 & 0 = " <<(bAnswer = 0 & 0 & 0) << std::endl;
  std::cout<<"0 & 0 & 1 = " <<(bAnswer = 0 & 0 & 1) << std::endl;
  std::cout<<"0 & 1 & 0 = " <<(bAnswer = 0 & 1 & 0) << std::endl;
  std::cout<<"0 & 1 & 1 = " <<(bAnswer = 0 & 1 & 1) << std::endl;
  std::cout<<"1 & 0 & 0 = " <<(bAnswer = 1 & 0 & 0) << std::endl;
  std::cout<<"1 & 0 & 1 = " <<(bAnswer = 1 & 0 & 1) << std::endl;
  std::cout<<"1 & 1 & 0 = " <<(bAnswer = 1 & 1 & 0) << std::endl;
  std::cout<<"1 & 1 & 1 = " <<(bAnswer = 1 & 1 & 1) << std::endl;


  return 0;

}

