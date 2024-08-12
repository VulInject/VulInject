static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!VAR4)
    {
        VAR4 = FUN2();
    }
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = FUN3(VAR4, VAR6, VAR2);
    FUN4(&VAR2->VAR7);
    FUN5(&VAR2->VAR8);
    FUN5(&VAR2->VAR9);
    FUN6(&VAR2->VAR10, 0);
    VAR2->VAR11 = 64;
    VAR2->VAR12 = FUN3(VAR4, VAR13, VAR2);
    FUN7(&VAR2->VAR14);
    FUN8(&VAR2->VAR15);
}