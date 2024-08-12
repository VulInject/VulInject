int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int32_t VAR7;
    uint32_t VAR8;
    uint32_t VAR9;
    uint32_t VAR10;
    VAR11 *VAR12 = FUN2(FUN3(VAR2));
    VAR13 *VAR14 = FUN4(VAR12);
    if (VAR14->VAR15)
    {
        VAR6 = VAR14->FUN5(VAR12->VAR16, VAR4);
        if (VAR6)
            return VAR6;
    }
    FUN6(VAR4, &VAR2->VAR17);
    FUN6(VAR4, &VAR2->VAR18);
    FUN7(VAR4, &VAR2->VAR19);
    if (VAR2->VAR19 >= VAR20)
    {
        return -1;
    }
    FUN8(VAR4, &VAR9);
    if (FUN9(VAR2, VAR9) < 0)
    {
        VAR10 = VAR14->FUN10(VAR12->VAR16);
        FUN11("", VAR9, VAR10);
        return -1;
    }
    VAR7 = FUN12(VAR4);
    FUN13(VAR4, VAR2->VAR21, FUN14(VAR7, VAR2->VAR7));
    while (VAR7 > VAR2->VAR7)
    {
        FUN15(VAR4);
        VAR7--;
    }
    VAR8 = FUN12(VAR4);
    if (VAR8 > VAR20)
    {
        FUN11("", VAR8);
        return -1;
    }
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        VAR2->VAR22[VAR5].VAR23.VAR8 = FUN12(VAR4);
        if (VAR14->VAR24)
        {
            VAR2->VAR22[VAR5].VAR23.VAR25 = FUN12(VAR4);
        }
        VAR2->VAR22[VAR5].VAR26 = FUN16(VAR4);
        FUN7(VAR4, &VAR2->VAR22[VAR5].VAR27);
        VAR2->VAR22[VAR5].VAR28 = false;
        VAR2->VAR22[VAR5].VAR29 = true;
        if (VAR2->VAR22[VAR5].VAR26)
        {
            uint16_t VAR30;
            FUN17(&VAR2->VAR22[VAR5]);
            VAR30 = FUN18(&VAR2->VAR22[VAR5]) - VAR2->VAR22[VAR5].VAR27;
            if (VAR30 > VAR2->VAR22[VAR5].VAR23.VAR8)
            {
                FUN11(""
                             "",
                             VAR5, VAR2->VAR22[VAR5].VAR23.VAR8, FUN18(&VAR2->VAR22[VAR5]), VAR2->VAR22[VAR5].VAR27, VAR30);
                return -1;
            }
        }
        else if (VAR2->VAR22[VAR5].VAR27)
        {
            FUN11(""
                         "",
                         VAR5, VAR2->VAR22[VAR5].VAR27);
            return -1;
        }
        if (VAR14->VAR31)
        {
            VAR6 = VAR14->FUN19(VAR12->VAR16, VAR5, VAR4);
            if (VAR6)
                return VAR6;
        }
    }
    FUN20(VAR2, VAR32);
    return 0;
}