void FUN1( const char *VAR1, ... )
{
va_list VAR2;
char	VAR3[1024];
char	VAR4[1024];
int		VAR5;

VAR5 = FUN2 ();

FUN3 (VAR2,VAR1);
vsprintf (VAR3, VAR1,VAR2);
FUN4 (VAR2);

sprintf (VAR4, "", VAR3, VAR5);
FUN5(NULL, VAR4, "", 0  );

FUN6 (1);
}