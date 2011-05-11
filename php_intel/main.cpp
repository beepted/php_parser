#include "sys_defs.h"
#include "zend_language_parser.h"
#include <vector>
#include <iostream>

extern "C" int __cdecl yydebug;
extern "C" int __cdecl yyparse(void);
extern "C" FILE* __cdecl yyin;


class _class
{
  std::vector<_class> classes;
  std::vector<std::string> functions;
  std::vector<std::string> variables;
};
class _namespace
{
  std::vector<_class> classes;
  std::vector<std::string> functions;
  std::vector<std::string> variables;
  std::vector<_namespace> namespaces;
};
class _file
{
  std::string name;
  std::vector<_namespace> namespaces;
};

class _directory
{
  std::vector<_file> files;
  std::vector<_directory> subdirectorys;
};


std::vector<char*> classes;

void main()
{
  yydebug=1;
  freopen("debug.trace","w",stderr);
  yyin=fopen("mysql.class.php","r");
  yyparse();
  system("PAUSE");
}