static int
FUN1(int VAR1, VAR2 *VAR3)
{
int VAR4;
int VAR5;

for (VAR5 = 0; VAR5 < VAR6; ++VAR5) {
VAR7 = 0;

if ((VAR4 = FUN2(VAR1, VAR3)) == 0)
break;

if (VAR7 != VAR8 && VAR7 != VAR9)
break;
}

return (VAR4);
}