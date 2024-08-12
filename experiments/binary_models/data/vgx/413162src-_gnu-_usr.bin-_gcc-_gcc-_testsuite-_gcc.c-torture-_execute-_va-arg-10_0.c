FUN1 (int VAR1, char* VAR2, va_list VAR3)
{
va_list VAR4;
char *VAR5;

FUN2 (VAR4, VAR3);
VAR5 = VAR2;

if (strlen (VAR2) != 16 - VAR1)
FUN3 ();
while (*VAR2)
if (*VAR2++ != FUN4 (FUN5 (VAR3, int)))
FUN3 ();
while (*VAR5)
if (*VAR5++ != FUN4 (FUN5 (VAR4, int)))
FUN3 ();
}