static void FUN1(struct VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    (void)memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR6.VAR7 = VAR2->VAR8 = VAR5;
    VAR2->VAR9 = VAR4->VAR10;
    VAR2->VAR11 = FUN2();
    VAR2->VAR12 = FUN3();
    VAR2->VAR13 = FUN4(0);
    FUN5(VAR2);
}