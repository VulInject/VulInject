static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    int VAR7;
    V9fsString VAR8;
    char *VAR9;
    FUN2(&VAR8);
    FUN3(&VAR8, "", VAR4->VAR10, VAR5);
    if (VAR2->VAR11 & VAR12)
    {
        if (VAR6 == VAR13)
        {
            VAR9 = FUN4("", VAR2->VAR14, VAR8.VAR10, VAR15);
            VAR7 = remove(VAR9);
            FUN5(VAR9);
            if (VAR7 < 0 && VAR16 != VAR17)
            {
                goto VAR18;
            }
        }
        VAR9 = FUN6(VAR2, VAR8.VAR10);
        VAR7 = remove(VAR9);
        FUN5(VAR9);
        if (VAR7 < 0 && VAR16 != VAR17)
        {
            goto VAR18;
        }
    }
    VAR9 = FUN7(VAR2, VAR8.VAR10);
    VAR7 = remove(VAR9);
    FUN5(VAR9);
VAR18:
    FUN8(&VAR8);
    return VAR7;
}