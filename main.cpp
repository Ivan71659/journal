#include <iostream>
#include <fstream>
#include <string>

int main () { 
  while(true){
    int question1;
    std::cout << "\n1.READ JOURNAL\n2.ADD TO JOURNAL\n3.EXIT\n\n";
    std::cin >> question1;
    
    if(question1 == 1){
      std::cout << "\nWhat y/m/d entry would you like to read?\n";
      std::string question2;
      std::cout << "\nYEAR: ";
      std::cin >> question2;
      std::string question3;
      std::cout << "MONTH: ";
      std::cin >> question3;
      std::string question4;
      std::cout << "DAY: ";
      std::cin >> question4;
      
      std::string filename = question2 + "-" + question3 + "-" + question4 + ".txt";
      std::ifstream reading;
      reading.open (filename);
  
      std::string reading1;
      while(getline (reading, reading1)) {
        std::cout << reading1 << "\n";
      }
    }
    
    if(question1 == 2) {
      std::cout << "\nWhat is the the date?\n";
      std::string question2;
      std::cout << "\nYEAR: ";
      std::cin >> question2;
      std::string question3;
      std::cout << "MONTH: ";
      std::cin >> question3;
      std::string question4;
      std::cout << "DAY: ";
      std::cin >> question4;
  
      std::string filename = question2 + "-" + question3 + "-" + question4 + ".txt";
      std::ofstream write;
      write.open(filename);
  
      while (true){
        std::string askwrite;
        std::cout << "\nwhat do you wanna write? ";
        std::getline (std::cin, askwrite);
        std::getline (std::cin, askwrite);
        write << askwrite << "\n";
        std::string askwrite2;
        std::cout << "are you done? y/n ";
        std::cin >> askwrite2;
        if (askwrite2 == "y"){
          break;
        }
      }
    
      write.close ();
    }
  
    if(question1 == 3){
      std::cout << "bye bye";
      break;
    }
  }
}
