#include <iostream>
#include <cstring>
#include <cxxabi.h>

#include "colour.h"

void print_usage( char* command )
{
    std::cout << "\nUsage: " << command << " < mangled function name >\n" << std::endl;
}

int main(int argc, char** argv)
{
  int     status;
  char   *realname;

  if( argc < 2 )
  {
      print_usage( argv[0] );
      return 1;
  }

  std::cout << std::endl;
  for( int i = 1; i < argc; i++ )
  {
      realname = abi::__cxa_demangle(argv[i], 0, 0, &status);

      if( realname )
      {
          std::cout << ASCII_BOLD_GREY << argv[i] << ASCII_COLOUR_YELLOW << " => " << ASCII_COLOUR_RESET << realname /*<<  ASCII_COLOUR_YELLOW << " : " << status << ASCII_COLOUR_RESET*/ << '\n';
      }
      else
      {
          std::cout << ASCII_COLOUR_RED << argv[i] << ASCII_COLOUR_YELLOW << " => " << ASCII_COLOUR_RESET << "Not Found." /*<< ASCII_COLOUR_RED << " : " << status << ASCII_COLOUR_RESET*/ << '\n';
      }

      delete realname;
  }

  return 0;
}
