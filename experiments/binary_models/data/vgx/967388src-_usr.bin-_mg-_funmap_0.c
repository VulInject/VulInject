int
FUN1(PF VAR1, const char *VAR2, int VAR3)
{
struct VAR4 *VAR5;

if ((VAR5 = malloc(sizeof(*VAR5))) == NULL)
return (VAR6);

VAR5->VAR7 = VAR1;
VAR5->VAR8 = VAR2;
VAR5->VAR9 = VAR3;
VAR5->VAR10 = VAR11;

VAR11 = VAR5;
return (VAR12);
}