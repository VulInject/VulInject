static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct VAR7 *VAR8;
    if (!FUN3(VAR4))
    {
        return;
    }
    if (!VAR6->VAR9 && VAR6->VAR10)
    {
        FUN4(VAR6);
        VAR6->VAR9 = true;
    }
    VAR8 = FUN5(VAR4, sizeof(struct VAR7));
    while (VAR8)
    {
        VAR8->VAR4 = VAR4;
        VAR8->VAR11 = 0;
        VAR8->VAR12 = false;
        VAR8->VAR13 = false;
        FUN6(&VAR6->VAR14, VAR8, VAR15);
        VAR8 = FUN5(VAR4, sizeof(struct VAR7));
    }
    FUN7(VAR6);
    if (VAR6->VAR10)
    {
        FUN8(VAR6);
    }
}