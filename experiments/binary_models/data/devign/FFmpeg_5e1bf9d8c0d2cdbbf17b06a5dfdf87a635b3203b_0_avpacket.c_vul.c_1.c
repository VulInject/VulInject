static int FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4)
{
    VAR2->VAR5 = NULL;
    VAR2->VAR6 = NULL;
    if (VAR2->VAR7)
    {
        VAR8 *VAR9 = FUN2(VAR3->VAR7);
        if (!VAR9)
            return FUN3(VAR10);
        VAR2->VAR7 = VAR9;
        VAR2->VAR5 = VAR9->VAR5;
    }
    else
    {
        FUN4(VAR2->VAR5, VAR3->VAR5, VAR2->VAR11, 1, VAR12);
    }
    if (VAR2->VAR13 && VAR4)
        VAR2->VAR6 = VAR3->VAR6;
    if (VAR2->VAR13 && !VAR4)
    {
        return FUN5(VAR2, VAR3);
    }
    return 0;
VAR14:
    FUN6(VAR2);
    return FUN3(VAR10);
}