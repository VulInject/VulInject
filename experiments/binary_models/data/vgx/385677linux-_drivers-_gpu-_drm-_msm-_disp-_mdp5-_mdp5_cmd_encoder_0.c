void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8 = VAR4->VAR8;
struct VAR9 *VAR10 = FUN3(VAR2->VAR11);

if (FUN4(!VAR4->VAR12))
return;

FUN5(VAR2);

FUN6(VAR6, VAR10, false);
FUN7(VAR6, VAR10, FUN8(VAR8), true);

VAR4->VAR12 = false;
}