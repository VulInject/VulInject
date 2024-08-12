static int
FUN1(int VAR1)
{
int	 VAR2;

if ((VAR2 = FUN2(VAR1, VAR3, 0)) == -1)
FUN3("");
else if (FUN2(VAR1, VAR4, VAR2|VAR5) == -1)
FUN3("");
else
return 1;

return 0;
}