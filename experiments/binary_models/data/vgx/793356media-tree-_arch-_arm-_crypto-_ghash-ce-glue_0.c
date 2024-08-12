static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned int VAR7 = VAR6->VAR8 % VAR9;

if (VAR7) {
struct VAR10 *VAR11 = FUN3(VAR2->VAR12);

memset(VAR6->VAR13 + VAR7, 0, VAR9 - VAR7);
FUN4();
FUN5(1, VAR6->VAR14, VAR6->VAR13, VAR11, NULL);
FUN6();
}
FUN7(VAR6->VAR14[1], VAR4);
FUN7(VAR6->VAR14[0], VAR4 + 8);

*VAR6 = (struct VAR5){};
return 0;
}