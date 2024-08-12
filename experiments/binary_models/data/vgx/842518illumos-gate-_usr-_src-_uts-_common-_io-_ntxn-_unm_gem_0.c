static int
FUN1(VAR1 *VAR2)
{
u64		VAR3[8 + 1];
unsigned char	*VAR4;
int		VAR5;

if (FUN2(VAR2, VAR3) != 0)
return (-1);

if (FUN3(VAR2->VAR6.VAR7))
VAR4 = (unsigned char *)&VAR3[VAR2->VAR6.VAR8];
else
VAR4 = (unsigned char *)&VAR3[VAR2->VAR9];

for (VAR5 = 0; VAR5 < 6; VAR5++)
VAR2->VAR3[VAR5] = VAR4[5 - VAR5];

if (FUN4(VAR2, VAR2->VAR3) != 0)
return (-1);

return (0);
}