static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5;
    VAR6 *VAR7, *VAR8;
    GIOStatus VAR9;
    FUN2(VAR4 && VAR2->VAR10);
    VAR7 = FUN3(VAR4);
    if (!VAR7)
    {
        return -VAR11;
    }
    if (VAR2->VAR12)
    {
        VAR2->VAR12 = false;
        VAR8 = FUN4();
        FUN5(VAR8, VAR13);
        FUN6(VAR8, FUN7(VAR7));
        FUN8(VAR7);
    }
    else
    {
        VAR8 = VAR7;
    }
    FUN5(VAR8, '');
    VAR5 = FUN7(VAR8);
    VAR9 = FUN9(VAR2->VAR10, VAR5, strlen(VAR5));
    FUN8(VAR8);
    if (VAR9 != VAR14)
    {
        return -VAR15;
    }
    return 0;
}