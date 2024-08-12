int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!FUN2(VAR2))
    {
        return 0;
    }
    FUN3(VAR2, VAR5, VAR6);
    VAR2->VAR7 = 0;
    FUN4(VAR2);
    VAR2->VAR8 = 0;
    FUN5(VAR4, &VAR2->VAR9);
    FUN6(&VAR2->VAR9);
    FUN7(VAR2->VAR10);
    VAR2->VAR10 = NULL;
    FUN7(VAR2->VAR11);
    VAR2->VAR11 = NULL;
    VAR2->VAR12 &= ~VAR13;
    return 0;
}