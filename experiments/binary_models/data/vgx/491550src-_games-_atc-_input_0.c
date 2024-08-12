const char	*
FUN1(char VAR1)
{
VAR2	*VAR3;

VAR3 = FUN2(FUN3(VAR1));
if (VAR3 == NULL)
return ("");
memcpy(&VAR4, VAR3, sizeof (VAR4));
VAR4.VAR5 = 0;
return (NULL);
}