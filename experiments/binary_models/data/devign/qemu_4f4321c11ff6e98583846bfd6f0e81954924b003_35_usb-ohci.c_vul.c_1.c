static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    size_t VAR6 = 0;
    const char *VAR7 = NULL;
    int VAR8;
    int VAR9;
    int VAR10;
    VAR11 *VAR12;
    struct ohci_td VAR13;
    uint32_t VAR14;
    int VAR15;
    int VAR16;
    VAR14 = VAR4->VAR17 & VAR18;
    VAR16 = (VAR14 == VAR2->VAR19);
    if (VAR16 && !VAR2->VAR20)
    {
        FUN2("");
        return 1;
    }
    if (!FUN3(VAR2, VAR14, &VAR13))
    {
        fprintf(VAR21, "", VAR14);
        return 0;
    }
    VAR5 = FUN4(VAR4->VAR22, VAR23);
    switch (VAR5)
    {
    case VAR24:
    case VAR25:
        break;
    default:
        VAR5 = FUN4(VAR13.VAR22, VAR26);
        break;
    }
    switch (VAR5)
    {
    case VAR25:
        VAR7 = "";
        VAR8 = VAR27;
        break;
    case VAR24:
        VAR7 = "";
        VAR8 = VAR28;
        break;
    case VAR29:
        VAR7 = "";
        VAR8 = VAR30;
        break;
    default:
        fprintf(VAR21, "");
        return 1;
    }
    if (VAR13.VAR31 && VAR13.VAR32)
    {
        if ((VAR13.VAR31 & 0xfffff000) != (VAR13.VAR32 & 0xfffff000))
        {
            VAR6 = (VAR13.VAR32 & 0xfff) + 0x1001 - (VAR13.VAR31 & 0xfff);
        }
        else
        {
            VAR6 = (VAR13.VAR32 - VAR13.VAR31) + 1;
        }
        if (VAR6 && VAR5 != VAR25 && !VAR16)
        {
            FUN5(VAR2, &VAR13, VAR2->VAR33, VAR6, 0);
        }
    }
    VAR15 = (VAR13.VAR22 & VAR34) != 0;
    FUN2("" VAR35 "", VAR14, (VAR36)VAR6, VAR7, VAR15, VAR13.VAR31, VAR13.VAR32);
    if (VAR6 > 0 && VAR5 != VAR25)
    {
        FUN2("");
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            FUN6("", VAR2->VAR33[VAR10]);
        FUN2("");
    }
    if (VAR16)
    {
        VAR9 = VAR2->VAR37.VAR6;
        VAR2->VAR19 = 0;
        VAR2->VAR20 = 0;
    }
    else
    {
        VAR9 = VAR38;
        for (VAR10 = 0; VAR10 < VAR2->VAR39; VAR10++)
        {
            VAR12 = VAR2->VAR40[VAR10].VAR41.VAR12;
            if ((VAR2->VAR40[VAR10].VAR42 & VAR43) == 0)
                continue;
            if (VAR2->VAR19)
            {
                FUN2("");
                return 1;
            }
            VAR2->VAR37.VAR8 = VAR8;
            VAR2->VAR37.VAR44 = FUN4(VAR4->VAR22, VAR45);
            VAR2->VAR37.VAR46 = FUN4(VAR4->VAR22, VAR47);
            VAR2->VAR37.VAR48 = VAR2->VAR33;
            VAR2->VAR37.VAR6 = VAR6;
            VAR9 = FUN7(VAR12, &VAR2->VAR37);
            if (VAR9 != VAR38)
                break;
        }
        FUN2("", VAR9);
        if (VAR9 == VAR49)
        {
            VAR2->VAR19 = VAR14;
            return 1;
        }
    }
    if (VAR9 >= 0)
    {
        if (VAR5 == VAR25)
        {
            FUN5(VAR2, &VAR13, VAR2->VAR33, VAR9, 1);
            FUN2("");
            for (VAR10 = 0; VAR10 < VAR9; VAR10++)
                FUN6("", VAR2->VAR33[VAR10]);
            FUN2("");
        }
        else
        {
            VAR9 = VAR6;
        }
    }
    if (VAR9 == VAR6 || (VAR5 == VAR25 && VAR9 >= 0 && VAR15))
    {
        if (VAR9 == VAR6)
        {
            VAR13.VAR31 = 0;
        }
        else
        {
            VAR13.VAR31 += VAR9;
            if ((VAR13.VAR31 & 0xfff) + VAR9 > 0xfff)
            {
                VAR13.VAR31 &= 0xfff;
                VAR13.VAR31 |= VAR13.VAR32 & ~0xfff;
            }
        }
        VAR13.VAR22 |= VAR50;
        VAR13.VAR22 ^= VAR51;
        FUN8(VAR13.VAR22, VAR52, VAR53);
        FUN8(VAR13.VAR22, VAR54, 0);
        VAR4->VAR17 &= ~VAR55;
        if (VAR13.VAR22 & VAR51)
            VAR4->VAR17 |= VAR55;
    }
    else
    {
        if (VAR9 >= 0)
        {
            FUN2("");
            FUN8(VAR13.VAR22, VAR52, VAR56);
        }
        else
        {
            switch (VAR9)
            {
            case VAR38:
                FUN8(VAR13.VAR22, VAR52, VAR57);
            case VAR58:
                FUN2("");
                return 1;
            case VAR59:
                FUN2("");
                FUN8(VAR13.VAR22, VAR52, VAR60);
                break;
            case VAR61:
                FUN2("");
                FUN8(VAR13.VAR22, VAR52, VAR62);
                break;
            default:
                fprintf(VAR21, "", VAR9);
                FUN8(VAR13.VAR22, VAR52, VAR63);
                FUN8(VAR13.VAR22, VAR54, 3);
                break;
            }
        }
        VAR4->VAR17 |= VAR64;
    }
    VAR4->VAR17 &= ~VAR18;
    VAR4->VAR17 |= VAR13.VAR65 & VAR18;
    VAR13.VAR65 = VAR2->VAR66;
    VAR2->VAR66 = VAR14;
    VAR10 = FUN4(VAR13.VAR22, VAR67);
    if (VAR10 < VAR2->VAR68)
        VAR2->VAR68 = VAR10;
    FUN9(VAR2, VAR14, &VAR13);
    return FUN4(VAR13.VAR22, VAR52) != VAR53;
}