%{
int countv=0;
int countc=0;
int counti=0;
%}
%%
[aeiouAEIOU] {countv++; }
[a-zA-Z] {countc++;}
. {counti++;}
%%
main()
{
yylex();
printf("Number of vowels=%d \n",countv);
printf("Number of consonants=%d \n",countc);
printf("Number of invalid lexemes=%d \n",counti);
}
int yywrap()
{
return 1;
}