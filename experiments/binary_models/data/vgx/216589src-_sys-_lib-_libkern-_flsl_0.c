int
FUN1(long VAR1)
{
int VAR2;

if (VAR1 == 0)
return (0);
for (VAR2 = 1; VAR1 != 1; VAR2++)
VAR1 = (unsigned long)VAR1 >> 1;
return (VAR2);
}