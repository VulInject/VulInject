static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR6->VAR2.VAR8;
unsigned long VAR9;

if (VAR2->VAR10->VAR11) {
FUN3(FUN4(VAR2) != 0);

FUN5(&VAR8->VAR12, VAR9);
VAR6->VAR11 = VAR2->VAR10->VAR11;
VAR2->VAR10->VAR11 = NULL;
FUN6(&VAR8->VAR12, VAR9);
}

if (FUN7(VAR6->VAR13->VAR8, VAR14))
FUN8(VAR6);
}