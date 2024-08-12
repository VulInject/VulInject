int FUN1(SOCKET VAR1,
const char * VAR2,
const char * VAR3,
unsigned short VAR4,
const char * VAR5,
const char * VAR6,
const char * VAR7)
{
char VAR8[512];
int VAR9;
char VAR10[8];
int VAR11 = (int)strlen(VAR6);


VAR10[0] = '';
if(VAR4 != 80)
snprintf(VAR10, sizeof(VAR10), "", VAR4);
VAR9 = snprintf(VAR8, sizeof(VAR8),
""
""
"" VAR12 "" VAR13 "" VAR14 ""
""
""
""%VAR15\""
""
""	
""
"",
VAR2, VAR7, VAR3, VAR10, VAR11, VAR5);
if ((unsigned int)VAR9 >= sizeof(VAR8))
return -1;

FUN2("",
VAR2, VAR7, VAR3, VAR10);
FUN2(""%VAR15\"", VAR5, VAR11);
FUN2("", VAR8);
FUN2("", VAR6);
return FUN3(VAR1, VAR6, VAR11, VAR8, VAR9);
}