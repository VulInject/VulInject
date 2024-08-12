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
    VAR11->VAR21 = VAR2->VAR21;
    VAR11->VAR22 = VAR2->VAR22;
    VAR11->VAR23 = VAR2->VAR23;
    VAR11->VAR4 = VAR4;
    VAR13 = VAR24.VAR25 + VAR26;
    VAR11->VAR27 = VAR28;
    VAR11->VAR20 = VAR14;
    VAR11->VAR29 = VAR7->VAR29;
    if (VAR14 & 3)
    {
        FUN3(VAR30, "", VAR14);
        VAR14 &= ~3;
    }
    VAR17 = (VAR14 & VAR31) + VAR32;
    VAR16 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR33 & VAR34;
    if (VAR19 == 0)
    {
        VAR19 = VAR34;
    }
    FUN4(VAR4);
    do
    {
        FUN5(VAR9, VAR11);
        if (VAR5)
        {
            VAR15 = VAR24.VAR35 - VAR24.VAR25;
            if (VAR16 < VAR15)
            {
                VAR16++;
                while (VAR16 < VAR15)
                {
                    VAR24.VAR36[VAR16++] = 0;
                }
            }
            VAR24.VAR37[VAR16] = VAR11->VAR20;
            VAR24.VAR36[VAR16] = 1;
            VAR24.VAR38[VAR16] = VAR18;
        }
        FUN6("", VAR11->VAR20);
        if (VAR18 + 1 == VAR19 && (VAR4->VAR33 & VAR39))
        {
            FUN7();
        }
        FUN8(VAR11, FUN9(VAR9, VAR11->VAR20));
        VAR11->VAR20 += 4;
        VAR18++;
    } while (!VAR11->VAR27 && VAR24.VAR35 < VAR13 && !VAR7->VAR29 && !VAR40 && (VAR11->VAR20 < VAR17) && VAR18 < VAR19);
    if (VAR4->VAR33 & VAR39)
    {
        FUN10();
    }
    if (FUN11(VAR7->VAR29))
    {
        if (VAR11->VAR27 == VAR28)
        {
            FUN12(VAR41, VAR11->VAR20);
        }
        FUN13(VAR11, VAR42);
    }
    else
    {
        switch (VAR11->VAR27)
        {
        case VAR28:
            FUN14(VAR11, 1, VAR11->VAR20);
            break;
        default:
        case VAR43:
        case VAR44:
            FUN15(0);
            break;
        case VAR45:
            break;
        }
    }
    FUN16(VAR4, VAR18);
    *VAR24.VAR35 = VAR46;
    if (VAR5)
    {
        VAR15 = VAR24.VAR35 - VAR24.VAR25;
        VAR16++;
        while (VAR16 <= VAR15)
        {
            VAR24.VAR36[VAR16++] = 0;
        }
    }
    else
    {
        VAR4->VAR47 = VAR11->VAR20 - VAR14;
        VAR4->VAR48 = VAR18;
    }
    if (FUN17(VAR49))
    {
        FUN18("");
        FUN19(VAR9, VAR14, VAR11->VAR20 - VAR14, 0);
        FUN18("", VAR11->VAR20 - VAR14, VAR24.VAR35 - VAR24.VAR25);
    }
}