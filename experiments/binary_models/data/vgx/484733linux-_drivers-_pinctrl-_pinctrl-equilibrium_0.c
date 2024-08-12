static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
unsigned int VAR7 = FUN4(VAR2);
unsigned long VAR8;

FUN5(&VAR6->VAR9, VAR8);
FUN6(FUN7(VAR7), VAR6->VAR10 + VAR11);
FUN8(&VAR6->VAR9, VAR8);
}