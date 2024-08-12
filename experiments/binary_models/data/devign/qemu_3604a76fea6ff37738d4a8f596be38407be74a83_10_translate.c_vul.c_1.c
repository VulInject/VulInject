void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    struct DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    uint32_t VAR14;
    int VAR15, VAR16;
    uint32_t VAR17;
    int VAR18;
    int VAR19;
    VAR14 = VAR4->VAR20;
    VAR11->VAR9 = VAR9;
    VAR11->VAR4 = VAR4;
    VAR13 = VAR21.VAR22 + VAR23;
    VAR11->VAR24 = VAR25;
    VAR11->VAR20 = VAR14;
    VAR11->VAR26 = VAR7->VAR26;
    VAR11->VAR27 = 0;
    if (VAR14 & 3)
    {
        FUN3(VAR9, "", VAR14);
    }
    VAR17 = (VAR14 & VAR28) + VAR29;
    VAR16 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR30 & VAR31;
    if (VAR19 == 0)
    {
        VAR19 = VAR31;
    }
    FUN4();
    do
    {
        FUN5(VAR9, VAR11);
        if (VAR5)
        {
            VAR15 = VAR21.VAR32 - VAR21.VAR22;
            if (VAR16 < VAR15)
            {
                VAR16++;
                while (VAR16 < VAR15)
                {
                    VAR21.VAR33[VAR16++] = 0;
                }
            }
            VAR21.VAR34[VAR16] = VAR11->VAR20;
            VAR21.VAR33[VAR16] = 1;
            VAR21.VAR35[VAR16] = VAR18;
        }
        FUN6("", VAR11->VAR20);
        if (VAR18 + 1 == VAR19 && (VAR4->VAR30 & VAR36))
        {
            FUN7();
        }
        FUN8(VAR11, FUN9(VAR9, VAR11->VAR20));
        VAR11->VAR20 += 4;
        VAR18++;
    } while (!VAR11->VAR24 && VAR21.VAR32 < VAR13 && !VAR7->VAR26 && !VAR37 && (VAR11->VAR20 < VAR17) && VAR18 < VAR19);
    if (VAR4->VAR30 & VAR36)
    {
        FUN10();
    }
    if (FUN11(VAR7->VAR26))
    {
        if (VAR11->VAR24 == VAR25)
        {
            FUN12(VAR38, VAR11->VAR20);
        }
        FUN13(VAR11, VAR39);
    }
    else
    {
        switch (VAR11->VAR24)
        {
        case VAR25:
            FUN14(VAR11, 1, VAR11->VAR20);
            break;
        default:
        case VAR40:
        case VAR41:
            FUN15(0);
            break;
        case VAR42:
            break;
        }
    }
    FUN16(VAR4, VAR18);
    *VAR21.VAR32 = VAR43;
    if (VAR5)
    {
        VAR15 = VAR21.VAR32 - VAR21.VAR22;
        VAR16++;
        while (VAR16 <= VAR15)
        {
            VAR21.VAR33[VAR16++] = 0;
        }
    }
    else
    {
        VAR4->VAR44 = VAR11->VAR20 - VAR14;
        VAR4->VAR45 = VAR18;
    }
    if (FUN17(VAR46))
    {
        FUN18("");
        FUN19(VAR9, VAR14, VAR11->VAR20 - VAR14, 0);
        FUN18("", VAR11->VAR20 - VAR14, VAR21.VAR32 - VAR21.VAR22);
    }
}