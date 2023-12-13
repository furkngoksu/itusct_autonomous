#include <iostream>

int main() {

  std::string password = "Furkan123";
  std::string temp;

  std::cout << "Enter password : " << std::endl;
  std::cin >> temp;
  std::cout << std::endl;

  if (temp == password)
  {
    std::cout<<"Dogru aq"<<std::endl;
  }
  else{
    std::cout<<"Yanlis amk"<<std::endl;
  }
  



  return 0 ;



    
}
