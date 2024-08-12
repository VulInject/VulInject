static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    uint16_t VAR7;
    VAR8 *VAR9 = NULL;
    if (VAR2->VAR10)
    {
        VAR7 = VAR2->VAR11;
    }
    else
    {
        VAR7 = VAR12;
    }
    if (VAR7 >= VAR13)
    {
        FUN2(VAR6, "" VAR14 "", VAR7);
        return;
    }
    if (VAR15[VAR7].VAR16)
    {
        FUN2(VAR6, "" VAR14, VAR7);
        return;
    }
    for (VAR9 = VAR2->VAR9; VAR9; VAR9 = VAR9->VAR17)
    {
        if (VAR9->VAR18 >= VAR19)
        {
            FUN2(VAR6, "" VAR14 ""
                             "",
                       VAR9->VAR18, VAR19);
            return;
        }
        FUN3(VAR15[VAR7].VAR20, VAR9->VAR18, 1);
    }
    if (VAR2->VAR21 && VAR2->VAR22)
    {
        FUN2(VAR6, "");
        return;
    }
    if (VAR23 == -1)
    {
        VAR23 = VAR2->VAR22;
    }
    if (VAR2->VAR22 != VAR23)
    {
        FUN2(VAR6, ""
                         "");
        return;
    }
    if (VAR2->VAR21)
    {
        uint64_t VAR24 = VAR2->VAR25;
        const char *VAR26 = FUN4(VAR4, "");
        if (FUN5(VAR26[strlen(VAR26) - 1]))
        {
            VAR24 <<= 20;
        }
        VAR15[VAR7].VAR27 = VAR24;
    }
    if (VAR2->VAR22)
    {
        VAR28 *VAR29;
        VAR29 = FUN6(VAR2->VAR30, VAR31, NULL);
        if (!VAR29)
        {
            FUN2(VAR6, "", VAR2->VAR30);
            return;
        }
        FUN7(VAR29);
        VAR15[VAR7].VAR27 = FUN8(VAR29, "", NULL);
        VAR15[VAR7].VAR32 = FUN9(VAR29);
    }
    VAR15[VAR7].VAR16 = true;
    VAR33 = FUN10(VAR33, VAR7 + 1);
}