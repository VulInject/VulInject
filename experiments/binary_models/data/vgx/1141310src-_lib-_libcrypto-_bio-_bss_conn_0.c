static int
FUN1(VAR1 *VAR2)
{
VAR2->VAR3 = 0;
VAR2->VAR4 = -1;
VAR2->VAR5 = 0;
if ((VAR2->VAR6 = (char *)FUN2()) == NULL)
return (0);
else
return (1);
}