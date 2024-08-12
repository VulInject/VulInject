int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    VAR8 *VAR9;
    VAR8 **VAR10;
    VAR11 *VAR12;
    VAR9 = FUN3(VAR7);
    if (!VAR9)
    {
        FUN4(VAR13, VAR7);
        return -1;
    }
    if (FUN5(VAR9))
    {
        FUN4(VAR14, VAR7);
        return -1;
    }
    FUN6();
    FUN7(VAR9);
    FUN8(VAR9);
    if (VAR9->VAR15)
    {
        for (VAR12 = VAR9->VAR15->VAR16->VAR17; VAR12 && VAR12->VAR18; VAR12++)
        {
            if (VAR12->VAR16->VAR19 == VAR20)
            {
                VAR10 = FUN9(VAR9->VAR15, VAR12);
                if (*VAR10 == VAR9)
                {
                    FUN10(VAR9, VAR9->VAR15);
                    *VAR10 = NULL;
                    break;
                }
            }
        }
    }
    FUN11(FUN12(VAR9));
    return 0;
}