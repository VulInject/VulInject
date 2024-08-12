static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR7.VAR6;
    VAR8 *VAR9;
    if (!VAR6)
    {
        FUN3("");
        return -1;
    }
    FUN4(VAR6, &VAR4->VAR2.VAR10);
    VAR4->VAR7.VAR6 = NULL;
    if (!VAR4->VAR11)
    {
        VAR9 = FUN5(VAR6);
        if (*VAR9->VAR11)
        {
            VAR4->VAR11 = strdup(VAR9->VAR11);
        }
    }
    if (VAR4->VAR11)
    {
        FUN6(VAR2, VAR12, VAR4->VAR11);
    }
    FUN7(VAR2);
    FUN8(&VAR4->VAR13, &VAR4->VAR2.VAR10, &VAR14);
    VAR4->VAR15 = FUN9(&VAR4->VAR13, VAR6, 0, !!VAR4->VAR16, VAR4->VAR7.VAR17);
    if (!VAR4->VAR15)
    {
        return -1;
    }
    VAR4->VAR13.VAR18.VAR19 = 0;
    FUN10(VAR2);
    if (FUN11(VAR6))
    {
        if (VAR20)
        {
            FUN12(VAR20, VAR6, VAR21, VAR4);
            VAR4->VAR2.VAR22 = 0;
        }
        else
        {
            VAR23 = 0;
        }
    }
    return 0;
}