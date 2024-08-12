static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR2->VAR5;
unsigned long VAR7 = FUN3(VAR6);

if (VAR4) {
FUN4(&VAR4->VAR8);
FUN5(VAR6->VAR9, VAR7);
FUN6(VAR4->VAR10.VAR11);
FUN7(VAR4);
}

return 0;
}