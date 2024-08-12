void FUN1((FUN2(VAR1, 4, 5)))
FUN3(const int VAR2, const int VAR3, const int VAR4, const char *VAR5, ... )
{
va_list VAR6;
char VAR7[2048];
int VAR8;

FUN4(VAR6, VAR5);
VAR8 = vsnprintf(VAR7, sizeof(VAR7), VAR5, VAR6);
if(VAR8 < 0) {
strncpy(VAR7, "", sizeof(VAR7));
}
FUN5(VAR6);
VAR7[sizeof(VAR7) - 1] = ''; 

FUN6(VAR2, VAR3, VAR4, VAR7);
}