static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3, void *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u32 VAR7 = VAR8;

VAR7 |= VAR6->VAR4->VAR9;

while (1) {
FUN3(VAR7, VAR6->VAR10 + VAR11);
FUN4(5);
}

return 0;
}