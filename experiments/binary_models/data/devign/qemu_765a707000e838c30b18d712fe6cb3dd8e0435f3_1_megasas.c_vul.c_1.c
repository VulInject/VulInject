static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int VAR7 = 0;
    const struct VAR8 *VAR9 = VAR10;
    VAR5 = FUN2(VAR4->VAR11->VAR12.VAR5);
    FUN3(VAR4->VAR13, VAR5);
    VAR6 = FUN4(VAR2, VAR4);
    if (VAR6 < 0)
    {
        return VAR14;
    }
    while (VAR9->VAR5 != -1 && VAR9->VAR5 != VAR5)
    {
        VAR9++;
    }
    if (VAR9->VAR5 == -1)
    {
        FUN5(VAR4->VAR13, VAR5, VAR6);
        VAR7 = FUN6(VAR2, VAR4);
    }
    else
    {
        FUN7(VAR4->VAR13, VAR9->VAR15, VAR6);
        VAR7 = VAR9->FUN8(VAR2, VAR4);
    }
    if (VAR7 != VAR16)
    {
        FUN9(VAR4, VAR6);
    }
    return VAR7;
}