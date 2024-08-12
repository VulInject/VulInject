static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
    VAR11 *VAR12 = &VAR2->VAR8.VAR9;
    SectionHeader VAR13, *VAR14 = &VAR13;
    const VAR3 *VAR15, *VAR16;
    int VAR17, VAR18;
    VAR19 *VAR20;
    FUN2(VAR7->VAR21, VAR22, "");
    FUN3(VAR7->VAR21, VAR4, VAR5);
    VAR16 = VAR4 + VAR5 - 4;
    VAR15 = VAR4;
    if (FUN4(VAR14, &VAR15, VAR16) < 0)
        return;
    if (VAR14->VAR23 != VAR24)
        return;
    if (VAR7->VAR25)
        return;
    if (FUN5(VAR14, VAR12))
        return;
    VAR7->VAR21->VAR26 = VAR14->VAR27;
    FUN6(VAR7);
    for (;;)
    {
        VAR17 = FUN7(&VAR15, VAR16);
        if (VAR17 < 0)
            break;
        VAR18 = FUN7(&VAR15, VAR16);
        if (VAR18 < 0)
            break;
        VAR18 &= 0x1fff;
        if (VAR18 == VAR7->VAR28)
            break;
        FUN2(VAR7->VAR21, VAR22, "", VAR17, VAR18);
        if (VAR17 == 0x0000)
        {
        }
        else
        {
            VAR1 *VAR29 = VAR7->VAR30[VAR18];
            VAR20 = FUN8(VAR7->VAR21, VAR17);
            if (VAR20)
            {
                VAR20->VAR31 = VAR17;
                VAR20->VAR18 = VAR18;
            }
            if (VAR29)
                if (VAR29->VAR32 != VAR33 || VAR29->VAR34 != VAR18 || VAR29->VAR8.VAR9.VAR35 != VAR36)
                    FUN9(VAR7, VAR7->VAR30[VAR18]);
            if (!VAR7->VAR30[VAR18])
                FUN10(VAR7, VAR18, VAR36, VAR7, 1);
            FUN11(VAR7, VAR17);
            FUN12(VAR7, VAR17, 0);
            FUN12(VAR7, VAR17, VAR18);
        }
    }
    if (VAR17 < 0)
    {
        int VAR37, VAR38;
        for (VAR38 = 0; VAR38 < VAR7->VAR21->VAR39; VAR38++)
        {
            for (VAR37 = 0; VAR37 < VAR7->VAR40; VAR37++)
                if (VAR7->VAR41[VAR37].VAR27 == VAR7->VAR21->VAR42[VAR38]->VAR27)
                    break;
            if (VAR37 == VAR7->VAR40 && !VAR7->VAR43)
                FUN13(VAR7, VAR7->VAR21->VAR42[VAR38]->VAR27);
        }
    }
}