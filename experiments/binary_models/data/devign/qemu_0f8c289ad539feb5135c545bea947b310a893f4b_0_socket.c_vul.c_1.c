int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    const VAR9 *VAR10;
    assert(VAR2->VAR11 == VAR12);
    VAR10 = &VAR2->VAR13.socket;
    if (VAR10->VAR14 + VAR10->VAR15 + VAR10->VAR16 + VAR10->VAR17 + VAR10->VAR18 != 1)
    {
        FUN2(""
                     "");
        return -1;
    }
    if (VAR10->VAR19 && !VAR10->VAR17 && !VAR10->VAR18)
    {
        FUN2("");
        return -1;
    }
    if (VAR10->VAR14)
    {
        int VAR20;
        VAR20 = FUN3(VAR21, VAR10->VAR20, &VAR8);
        if (VAR20 == -1)
        {
            FUN4(VAR8);
            return -1;
        }
        FUN5(VAR20);
        if (!FUN6(VAR5, "", VAR3, VAR20, 1))
        {
            return -1;
        }
        return 0;
    }
    if (VAR10->VAR15)
    {
        if (FUN7(VAR5, "", VAR3, VAR10->VAR22) == -1)
        {
            return -1;
        }
        return 0;
    }
    if (VAR10->VAR16)
    {
        if (FUN8(VAR5, "", VAR3, VAR10->connect) == -1)
        {
            return -1;
        }
        return 0;
    }
    if (VAR10->VAR17)
    {
        if (FUN9(VAR5, "", VAR3, VAR10->VAR23, VAR10->VAR24) == -1)
        {
            return -1;
        }
        return 0;
    }
    assert(VAR10->VAR18);
    if (!VAR10->VAR19)
    {
        FUN2("");
        return -1;
    }
    if (FUN10(VAR5, "", VAR3, VAR10->VAR25, VAR10->VAR24) == -1)
    {
        return -1;
    }
    return 0;
}