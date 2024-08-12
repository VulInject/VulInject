static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, bool VAR7)
{
    VAR8 *VAR9;
    assert(!VAR4 || !VAR4->VAR10 || VAR4->VAR6 == VAR6);
    if (VAR4)
    {
        FUN2(VAR2, "", VAR4->VAR11);
        if (VAR6 && VAR6->VAR12)
        {
            FUN2(VAR2, "", VAR6->VAR13);
        }
    }
    else
    {
        assert(VAR6);
        FUN2(VAR2, "", VAR6->VAR12 ? VAR6->VAR13 : "");
    }
    if (VAR6)
    {
        FUN2(VAR2, "", VAR6->VAR14, VAR6->VAR15, VAR6->VAR16 ? "" : "", VAR6->VAR17 ? "" : "");
    }
    else
    {
        FUN2(VAR2, "");
    }
    if (VAR4)
    {
        if (VAR4->VAR18 && VAR4->VAR19 != VAR20)
        {
            FUN2(VAR2, "", VAR21[VAR4->VAR19]);
        }
        if (VAR4->VAR22)
        {
            FUN2(VAR2, "", VAR4->VAR23 ? "" : "", VAR4->VAR24 ? "" : "");
        }
    }
    if (!VAR6)
    {
        return;
    }
    FUN2(VAR2, "", VAR6->VAR25->VAR26 ? "" : "", VAR6->VAR25->VAR27 ? "" : "", VAR6->VAR25->VAR28 ? "" : "");
    if (VAR6->VAR29)
    {
        FUN2(VAR2, ""
                            "" VAR30 "",
                       VAR6->VAR31, VAR6->VAR32);
    }
    if (VAR6->VAR33 != VAR34)
    {
        FUN2(VAR2, "", VAR35[VAR6->VAR33]);
    }
    if (VAR6->VAR36 || VAR6->VAR37 || VAR6->VAR38 || VAR6->VAR39 || VAR6->VAR40 || VAR6->VAR41)
    {
        FUN2(VAR2, "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "" VAR30 "", VAR6->VAR36, VAR6->VAR37, VAR6->VAR38, VAR6->VAR42, VAR6->VAR43, VAR6->VAR44, VAR6->VAR39, VAR6->VAR40, VAR6->VAR41, VAR6->VAR45, VAR6->VAR46, VAR6->VAR47, VAR6->VAR48);
    }
    if (VAR7 && VAR6->VAR49)
    {
        FUN2(VAR2, "");
        VAR9 = VAR6->VAR49;
        while (1)
        {
            FUN3((VAR50)VAR51, VAR2, VAR9);
            if (VAR9->VAR52)
            {
                VAR9 = VAR9->VAR53;
            }
            else
            {
                break;
            }
        }
    }
}