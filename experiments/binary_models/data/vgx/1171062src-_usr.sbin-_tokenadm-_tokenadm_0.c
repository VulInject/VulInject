static	int
FUN1(char *VAR1)
{
TOKENDB_Rec VAR2;

if (FUN2(VAR1, &VAR2))
return (-1);

VAR2.VAR3 &= ~VAR4;
VAR2.VAR3 &= ~VAR5;

if (FUN3(VAR1, &VAR2))
return (1);

return (0);
}