#include <iostream>
#include <fstream>
#include <ctype.h>
// using namespace std;
int main()
{
  std::ifstream fin;
  fin.open("fname.txt");
  int word_count = 0, sentence_count = 0, lowercase_count = 0, uppercase_count = 0, digit_count = 0;
  char ch;
  fin.seekg(0, std::ios::beg);

  while (fin)
  {
    fin.get(ch);

    if (ch == ' ') 
    {
      word_count++;
    }

  

    else if(ch=='.'){
       sentence_count++;
       word_count++;
       fin.get(ch);
       while(ch==' '){
        fin.get(ch);
       }
       fin.unget();
    }



    else if (std::isdigit(ch))
    {
      digit_count++;
    }

    else if (ch >= 'a' && ch <= 'z')
    {
      lowercase_count++;
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
      uppercase_count++;
    }

   

    else if(ch==',' || ch=='!'){
       word_count++;
       fin.get(ch);
       while(ch==' '){
        fin.get(ch);
       }
       fin.unget();
    }
  }

  std::cout << "Words=" << word_count << "\n";
  std::cout << "sentences:" << sentence_count << std::endl;
  std::cout << "lowercase :" << lowercase_count << std::endl;
  std::cout << "uppercase are:" << uppercase_count << std::endl;
  std::cout << "digits are: " << digit_count << std::endl;
  // std::cout << "characters are: " << digit_count + uppercase_count + lowercase_count << std::endl;
  std::cout << "Average word Length: " << (digit_count + uppercase_count + lowercase_count) / (word_count) << std::endl;
  std::cout << "Average Sentences Length: " << (word_count) / (sentence_count) << std::endl;

  fin.close(); // closing file

  return 0;
}


