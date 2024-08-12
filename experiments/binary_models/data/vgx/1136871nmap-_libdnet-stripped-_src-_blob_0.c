int
FUN1(VAR1 *VAR2, const void *VAR3, int VAR4)
{
int VAR5;

for (VAR5 = VAR2->VAR6; VAR5 <= VAR2->VAR7 - VAR4; VAR5++) {
if (memcmp(VAR2->VAR8 + VAR5, VAR3, VAR4) == 0)
return (VAR5);
}
return (-1);
}