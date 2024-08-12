static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5;
    mfxU16 VAR6;
    int VAR7 = VAR4->VAR8 >= 10;
    int VAR9 = !!(VAR2->VAR10 & VAR11);
    int VAR12 = VAR4->VAR13;
    if (VAR7 && !VAR14)
    {
        FUN2(VAR2, VAR15, "");
        return FUN3(VAR16);
    }
    if (VAR12 && !VAR17)
    {
        FUN2(VAR2, VAR15, "");
        return FUN3(VAR16);
    }
    if (VAR7 + VAR9 + VAR12 > 1)
    {
        FUN2(VAR2, VAR15, ""
                                    "");
        return FUN3(VAR18);
    }
    if (VAR9)
    {
        VAR6 = VAR19;
        VAR5 = "";
    }
    else if (VAR12)
    {
        VAR6 = VAR20;
        VAR5 = "";
    }
    else if (VAR7)
    {
        VAR6 = VAR21;
        VAR5 = "";
        if (VAR2->VAR22 > 0)
        {
            VAR6 = VAR23;
            VAR5 = "";
        }
    }
    else if (VAR2->VAR22 > 0)
    {
        VAR6 = VAR24;
        VAR5 = "";
    }
    else if (VAR2->VAR25 == VAR2->VAR26)
    {
        VAR6 = VAR27;
        VAR5 = "";
    }
    else if (!VAR2->VAR25)
    {
        VAR6 = VAR28;
        VAR5 = "";
    }
    else
    {
        VAR6 = VAR29;
        VAR5 = "";
    }
    VAR4->VAR30.VAR31.VAR32 = VAR6;
    FUN2(VAR2, VAR33, "", VAR5);
    return 0;
}