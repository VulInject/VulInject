static unsigned int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4,
unsigned int VAR5,
unsigned int *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2->VAR8);
unsigned int VAR9;

if (VAR8) {
FUN3(VAR2, VAR8, (VAR10 *)VAR4, VAR5);
VAR9 = VAR5;
} else {
VAR9 = 0;
}

return VAR9;
}