#include <iostream>
#include <string>

int main()
{
   std::string temp;
   std::getline(std::cin, temp);
   bool found = false;
   for(int i = 0; i < temp.size(); i++){
       if(temp[i] == 'H' || temp[i] == 'Q' || temp[i] == '9'){
           std::cout << "YES";
           found = true;
           break;
       }
   }
   if (!found) {
       std::cout << "NO";
   }
   return 0;
}
