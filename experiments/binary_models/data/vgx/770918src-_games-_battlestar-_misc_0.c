int
FUN1(const unsigned int *VAR1)
{
int     VAR2 = 0, VAR3;

for (VAR3 = 0; VAR3 < VAR4; VAR3++)
if (FUN2(VAR1, VAR3))
VAR2++;
return (VAR2);
}