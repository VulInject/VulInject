static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
pseudo_t VAR5;

if (VAR4->VAR6)
FUN2(VAR2, "", VAR4->VAR7, VAR4->VAR6);
if (!VAR4->VAR8)
return;
VAR4->VAR9 = 0;
VAR4->VAR10 = 1;
FUN3(VAR4->VAR8, VAR5) {
if (FUN4(VAR5) & VAR11)
continue;
if (!(FUN4(VAR5) & VAR12))
continue;
FUN5(VAR2, VAR4, VAR5);
} FUN6(VAR5);
FUN7(&VAR4->VAR8);
}