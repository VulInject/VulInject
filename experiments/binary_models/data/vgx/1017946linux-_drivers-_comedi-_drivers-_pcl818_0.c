static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
unsigned int *VAR7)
{
if (FUN2(VAR4, VAR7)) {
FUN3(VAR4->VAR8 & 0xff, VAR2->VAR9 + VAR10);
FUN3((VAR4->VAR8 >> 8), VAR2->VAR9 + VAR11);
}

VAR7[1] = VAR4->VAR8;

return VAR6->VAR12;
}