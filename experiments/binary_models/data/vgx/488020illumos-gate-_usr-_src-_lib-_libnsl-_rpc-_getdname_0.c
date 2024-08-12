int
FUN1(char *VAR1, int VAR2)
{
int VAR3;

VAR3 = FUN2(VAR4,
VAR1, VAR2 + 1); 
return ((VAR3 < 0) ? -1 : 0);
}