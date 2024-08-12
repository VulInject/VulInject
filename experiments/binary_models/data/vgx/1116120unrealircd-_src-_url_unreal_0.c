int FUN1(int VAR1, int VAR2, VAR3 *VAR4)
{
const char *VAR5;
unsigned long VAR6 = FUN2();
char VAR7[256];
const char *VAR8, *VAR9;


VAR9 = FUN3(VAR6);
if (VAR9 && *VAR9)
{
snprintf(VAR7, sizeof(VAR7), "", VAR9);
} else {
*VAR7 = '';
}

VAR8 = FUN4(VAR6);
VAR9 = FUN3(VAR6);
if (VAR8 && *VAR8 && VAR9 && *VAR9)
{
snprintf(VAR7, sizeof(VAR7), "", VAR8, VAR9);
} else {
*VAR7 = '';
}

VAR5 = FUN5(VAR1, VAR2);

FUN6(VAR4, "", VAR5, VAR7);
return -1;
}