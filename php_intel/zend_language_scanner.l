%{

#include "zend_language_parser.h"
#ifdef __cplusplus 
extern "C" YYSTYPE  yylval; 
#endif
extern YYSTYPE  yylval; 

int transfer_token(int id,char copy_value);

%}

word    [_A-Za-z]
digit   [0-9]
id      {word}({word}|{digit})*
integer {digit}+
float   {digit}+\.{digit}+

%x C_COMMENT
%x L_COMMENT
%x H_COMMENT

%%

"<" {return (int)'<';}
">" {return (int)'>';}
"!" {return (int)'!';}
"^" {return (int)'^';}
"&" {return (int)'&';}
"|" {return (int)'|';}
"=" {return (int)'=';}
"*" {return (int)'*';}
"+" {return (int)'+';}
"-" {return (int)'-';}
"/" {return (int)'/';}
"%" {return (int)'%';}
"." {return (int)'.';}
"," {return (int)',';}


class {return T_CLASS;}
require_once {return T_REQUIRE_ONCE;}
require {return T_REQUIRE;}
eval {return T_EVAL;}
include_once {return T_INCLUDE_ONCE;}
include {return T_INCLUDE;}
or {return T_LOGICAL_OR;}
xor {return T_LOGICAL_XOR;}
and {return T_LOGICAL_AND;}
print {return T_PRINT;}
">>=" {return T_SR_EQUAL;}
"<<=" {return T_SL_EQUAL;}
"^=" {return T_XOR_EQUAL;}
"|=" {return T_OR_EQUAL;}
"&=" {return T_AND_EQUAL;}
"%=" {return T_MOD_EQUAL;}
".=" {return T_CONCAT_EQUAL;}
"/=" {return T_DIV_EQUAL;}
"*=" {return T_MUL_EQUAL;}
"-=" {return T_MINUS_EQUAL;}
"+=" {return T_PLUS_EQUAL;}
"||" {return T_BOOLEAN_OR;}
"&&" {return T_BOOLEAN_AND;}
"!==" {return T_IS_NOT_IDENTICAL;}
"===" {return T_IS_IDENTICAL;}
"!="|"<>" {return T_IS_NOT_EQUAL;}
"==" {return T_IS_EQUAL;}
">=" {return T_IS_GREATER_OR_EQUAL;}
"<<" {return T_SL;}
"<=" {return T_IS_SMALLER_OR_EQUAL;}
">>" {return T_SR;}
instanceof {return T_INSTANCEOF;}
\(unset\) {return T_UNSET_CAST;}
\(bool\)|\(boolean\) {return T_BOOL_CAST;}
\(object\) {return T_OBJECT_CAST;}
\(array\) {return T_ARRAY_CAST;}
\(string\) {return T_STRING_CAST;}
\(float\)|\(real\)|\(double\) {return T_DOUBLE_CAST;}
\(int\)|\(integer\) {return T_INT_CAST;}
--                 {return T_DEC;}
\+\+              {return T_INC;}
clone             {return T_CLONE;}
new               {return T_NEW;}
exit|die          {return T_EXIT;}
if                {return T_IF;}
elseif            {return T_ELSEIF;}
else              {return T_ELSE;}
endif             {return T_ENDIF;}
0[xX][0-9a-fA-F]+ {return T_LNUMBER;}
[-+]?[0-9]+       {return T_LNUMBER;}
""                {return T_DNUMBER;}
""                {return T_STRING_VARNAME;}
""                {return T_NUM_STRING;}
""                {return T_ENCAPSED_AND_WHITESPACE;}
(\"[^"]*\")       {return T_CONSTANT_ENCAPSED_STRING;}
(\'[^']*\')       {return T_CONSTANT_ENCAPSED_STRING;}
echo              {return T_ECHO;}
do                {return T_DO;}
while             {return T_WHILE;}
endwhile          {return T_ENDWHILE;}
for               {return T_FOR;}
endfor            {return T_ENDFOR;}
foreach           {return T_FOREACH;}
endforeach        {return T_ENDFOREACH;}
declare           {return T_DECLARE;}
enddeclare        {return T_ENDDECLARE;}
as                {return T_AS;}
switch            {return T_SWITCH;}
endswitch         {return T_ENDSWITCH;}
case              {return T_CASE;}
default           {return T_DEFAULT;}
break             {return T_BREAK;}
continue          {return T_CONTINUE;}
goto              {return T_GOTO;}
function|cfunction {return T_FUNCTION;}
const             {return T_CONST;}
return            {return T_RETURN;}
try               {return T_TRY;}
catch             {return T_CATCH;}
throw             {return T_THROW;}
use               {return T_USE;}
global            {return T_GLOBAL;}
public            {return T_PUBLIC;}
protected         {return T_PROTECTED;}
private           {return T_PRIVATE;}
final             {return T_FINAL;}
abstract          {return T_ABSTRACT;}
static            {return T_STATIC;}
var               {return T_VAR;}
unset             {return T_UNSET;}
isset             {return T_ISSET;}
empty             {return T_EMPTY;}
interface         {return T_INTERFACE;}
extends           {return T_EXTENDS;}
implements        {return T_IMPLEMENTS;}
"->"              {return T_OBJECT_OPERATOR;}
"=>"              {return T_DOUBLE_ARROW;}
list              {return T_LIST;}
array             {return T_ARRAY;}
__halt_compiler   {return T_HALT_COMPILER;}
__CLASS__         {return T_CLASS_C;}
__METHOD__        {return T_METHOD_C;}
__FUNCTION__      {return T_FUNC_C;}
__LINE__          {return T_LINE;}
__FILE__          {return T_FILE;}
namespace         {return T_NAMESPACE;}
__NAMESPACE__     {return T_NS_C;}
__DIR__           {return T_DIR;}
{id}              {return transfer_token(T_STRING,1);}
${id}             {return transfer_token(T_VARIABLE,1);}
""                {return T_DOC_COMMENT;}
\<\?php|\<?|\<\%  {;}
\<\?=|\<\%=       {;}
\?\>|\%\>         {;}
\<\<\<            {return T_START_HEREDOC;}
""                {return T_END_HEREDOC;}
\$\{              {return T_DOLLAR_OPEN_CURLY_BRACES;}
\{\$              {return T_CURLY_OPEN;}
::                {return T_PAAMAYIM_NEKUDOTAYIM;}
\\                {return T_NS_SEPARATOR;}


"/*"              { BEGIN(C_COMMENT); }
<C_COMMENT>"*/"   { BEGIN(INITIAL); }
<C_COMMENT>.      { printf("%c",yytext[0]); }
<C_COMMENT>\n|\r  { printf("\n"); }

"//"              { BEGIN(L_COMMENT); }
<L_COMMENT>\n|\r  { printf("\n");BEGIN(INITIAL); }
<L_COMMENT>.      { printf("%c",yytext[0]); }

"#"               { BEGIN(H_COMMENT); }
<H_COMMENT>\n|\r  { printf("\n");BEGIN(INITIAL); }
<H_COMMENT>.      { printf("%c",yytext[0]); }


[ \t] {;}
\r|\n {;;}
. {return (int)yytext[0];}


%%

int transfer_token(int id,char copy_value)
{
  if(copy_value)
  {
    yylval.val=malloc(yyleng+1);
    sprintf(yylval.val,"%s\0",yytext);
  }
  return id;
}

#ifndef yywrap
yywrap()
{ return 1; }
#endif