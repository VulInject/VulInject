static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR4->VAR10;
    int VAR11 = -1;
    int VAR12;
    int VAR13 = VAR5 ? VAR14 : VAR15;
    struct CheckBarArgs VAR16 = {
        .VAR2 = VAR2,
        .VAR17 = VAR4->VAR18,
        .VAR19 = FUN2(VAR4->VAR19),
        .VAR12 = false,
    };
    VAR11 = FUN3(VAR2, VAR10);
    if (VAR11 == -1 && (!VAR2->VAR20 || &VAR2->VAR20->VAR21 != VAR10))
    {
        return;
    }
    if (VAR2->VAR20 && &VAR2->VAR20->VAR21 == VAR10)
    {
        if (VAR5)
        {
            VAR2->VAR20->VAR22 = VAR4->VAR18;
            VAR12 = FUN4(VAR2, VAR2->VAR20->VAR23);
        }
        return;
    }
    VAR16.VAR24 = VAR7->VAR25[VAR11].VAR24;
    FUN5(FUN6(VAR7), FUN7(VAR7), VAR26, &VAR16);
    if (VAR16.VAR12)
    {
        FUN8(VAR7, "" VAR27 "" VAR27 "", VAR11, VAR4->VAR18, FUN2(VAR4->VAR19));
    }
    if (VAR7->VAR25[VAR11].VAR24 & VAR28)
    {
        uint32_t VAR29 = VAR4->VAR18;
        uint32_t VAR30 = VAR2->VAR31[VAR11].VAR32.VAR33;
        uint32_t VAR19 = FUN2(VAR4->VAR19);
        VAR12 = FUN9(VAR34, VAR35, VAR29, VAR30, VAR19, VAR13);
        if (VAR12)
        {
            FUN10(VAR7, "", VAR5 ? "" : "", VAR36);
        }
    }
    else
    {
        pcibus_t VAR37 = VAR4->VAR18;
        pcibus_t VAR38 = VAR2->VAR31[VAR11].VAR32.VAR39 + VAR4->VAR40;
        pcibus_t VAR19 = FUN2(VAR4->VAR19);
        VAR12 = FUN11(VAR34, VAR35, FUN12(VAR37 + VAR41 - 1), FUN12(VAR38 + VAR41 - 1), FUN12(VAR19 + VAR41 - 1), VAR13);
        if (VAR12)
        {
            FUN10(VAR7, "", VAR5 ? "" : "", VAR36);
        }
    }
}