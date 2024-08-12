static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const char *VAR6)
{
    int VAR7;
    V9fsString VAR8;
    char *VAR9, *VAR10;
    FUN2(&VAR8);
    FUN3(&VAR8, "", VAR5->VAR11, VAR6);
    VAR9 = FUN4(VAR2, VAR4->VAR11);
    VAR10 = FUN4(VAR2, VAR8.VAR11);
    VAR7 = FUN5(VAR9, VAR10);
    FUN6(VAR9);
    FUN6(VAR10);
    if (!VAR7 && (VAR2->VAR12 & VAR13))
    {
        VAR7 = FUN7(VAR2, VAR8.VAR11);
        if (VAR7 < 0)
        {
            goto VAR14;
        }
        VAR9 = FUN8(VAR2, VAR4->VAR11);
        VAR10 = FUN8(VAR2, VAR8.VAR11);
        VAR7 = FUN5(VAR9, VAR10);
        FUN6(VAR9);
        FUN6(VAR10);
        if (VAR7 < 0 && VAR15 != VAR16)
        {
            goto VAR14;
        }
    }
VAR14:
    FUN9(&VAR8);
    return VAR7;
}