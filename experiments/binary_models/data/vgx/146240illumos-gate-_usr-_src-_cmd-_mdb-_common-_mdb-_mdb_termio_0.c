int
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;

if (VAR2->VAR5 & VAR6)
return (1);

for (VAR4 = VAR2->VAR7; VAR4 != NULL; VAR4 = VAR4->VAR8) {
if (VAR4->VAR9 == &VAR10)
return (1);
}

return (0);
}