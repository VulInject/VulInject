static void FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2, VAR3);

if (VAR6->VAR7 >= VAR8 * VAR9) {
FUN3("", VAR6->VAR7);
return;
}

FUN4(VAR2, VAR3, VAR4);


FUN5(&VAR10);
FUN6(VAR6->VAR7, VAR11);
FUN7(&VAR10);
}