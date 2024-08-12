static int FUN1(const struct VAR1 *VAR2,
unsigned int VAR3, unsigned int *VAR4, unsigned int *VAR5)
{
const struct VAR1 *VAR6;

for (VAR6 = VAR2; VAR6->VAR5; VAR6++) {
if (VAR6->VAR3 == VAR3) {
*VAR4 = VAR6->VAR4;
*VAR5 = VAR6->VAR5;
return 1;
}
}

return 0;
}