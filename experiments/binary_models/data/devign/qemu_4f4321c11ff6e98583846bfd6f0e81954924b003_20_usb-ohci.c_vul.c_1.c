static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    int VAR6;
    size_t VAR7 = 0;
    const char *VAR8 = NULL;
    int VAR9;
    int VAR10;
    int VAR11;
    VAR12 *VAR13;
    struct ohci_iso_td VAR14;
    uint32_t VAR15;
    uint16_t VAR16;
    int16_t VAR17;
    int VAR18;
    uint32_t VAR19, VAR20, VAR21 = 0;
    uint32_t VAR22, VAR23;
    VAR15 = VAR4->VAR24 & VAR25;
    if (!FUN2(VAR2, VAR15, &VAR14))
    {
        FUN3("", VAR15);
        return 0;
    }
    VAR16 = FUN4(VAR14.VAR26, VAR27);
    VAR18 = FUN4(VAR14.VAR26, VAR28);
    VAR17 = FUN5(VAR2->VAR29, VAR16);
    FUN3(""
           ""
           ""
           ""
           ""
           ""
           "",
           VAR4->VAR24 & VAR25, VAR4->VAR30 & VAR25, VAR14.VAR26, VAR14.VAR31, VAR14.VAR32, VAR14.VAR33, VAR14.VAR34[0], VAR14.VAR34[1], VAR14.VAR34[2], VAR14.VAR34[3], VAR14.VAR34[4], VAR14.VAR34[5], VAR14.VAR34[6], VAR14.VAR34[7], VAR2->VAR29, VAR16, VAR18, VAR17, FUN4(VAR14.VAR26, VAR35), FUN4(VAR14.VAR26, VAR36));
    if (VAR17 < 0)
    {
        FUN6("", VAR17);
        return 1;
    }
    else if (VAR17 > VAR18)
    {
        FUN6("", VAR17, VAR18);
        FUN7(VAR14.VAR26, VAR36, VAR37);
        VAR4->VAR24 &= ~VAR25;
        VAR4->VAR24 |= (VAR14.VAR32 & VAR25);
        VAR14.VAR32 = VAR2->VAR38;
        VAR2->VAR38 = VAR15;
        VAR11 = FUN4(VAR14.VAR26, VAR35);
        if (VAR11 < VAR2->VAR39)
            VAR2->VAR39 = VAR11;
        FUN8(VAR2, VAR15, &VAR14);
        return 0;
    }
    VAR6 = FUN4(VAR4->VAR26, VAR40);
    switch (VAR6)
    {
    case VAR41:
        VAR8 = "";
        VAR9 = VAR42;
        break;
    case VAR43:
        VAR8 = "";
        VAR9 = VAR44;
        break;
    case VAR45:
        VAR8 = "";
        VAR9 = VAR46;
        break;
    default:
        FUN3("", VAR6);
        return 1;
    }
    if (!VAR14.VAR31 || !VAR14.VAR33)
    {
        FUN3("", VAR14.VAR31, VAR14.VAR33);
        return 1;
    }
    VAR19 = VAR14.VAR34[VAR17];
    VAR20 = VAR14.VAR34[VAR17 + 1];
    if (!(FUN4(VAR19, VAR47) & 0xe) || ((VAR17 < VAR18) && !(FUN4(VAR20, VAR47) & 0xe)))
    {
        FUN3("", VAR19, VAR20);
        return 1;
    }
    if ((VAR17 < VAR18) && (VAR19 > VAR20))
    {
        FUN3("", VAR19, VAR20);
        return 1;
    }
    if ((VAR19 & 0x1000) == 0)
    {
        VAR22 = (VAR14.VAR31 & VAR48) | (VAR19 & VAR49);
    }
    else
    {
        VAR22 = (VAR14.VAR33 & VAR48) | (VAR19 & VAR49);
    }
    if (VAR17 < VAR18)
    {
        VAR21 = VAR20 - 1;
        if ((VAR21 & 0x1000) == 0)
        {
            VAR23 = (VAR14.VAR31 & VAR48) | (VAR21 & VAR49);
        }
        else
        {
            VAR23 = (VAR14.VAR33 & VAR48) | (VAR21 & VAR49);
        }
    }
    else
    {
        VAR23 = VAR14.VAR33;
    }
    if ((VAR22 & VAR48) != (VAR23 & VAR48))
    {
        VAR7 = (VAR23 & VAR49) + 0x1001 - (VAR22 & VAR49);
    }
    else
    {
        VAR7 = VAR23 - VAR22 + 1;
    }
    if (VAR7 && VAR6 != VAR41)
    {
        FUN9(VAR2, VAR22, VAR23, VAR2->VAR50, VAR7, 0);
    }
    if (VAR5)
    {
        VAR10 = VAR2->VAR51.VAR7;
    }
    else
    {
        VAR10 = VAR52;
        for (VAR11 = 0; VAR11 < VAR2->VAR53; VAR11++)
        {
            VAR13 = VAR2->VAR54[VAR11].VAR55.VAR13;
            if ((VAR2->VAR54[VAR11].VAR56 & VAR57) == 0)
                continue;
            VAR2->VAR51.VAR9 = VAR9;
            VAR2->VAR51.VAR58 = FUN4(VAR4->VAR26, VAR59);
            VAR2->VAR51.VAR60 = FUN4(VAR4->VAR26, VAR61);
            VAR2->VAR51.VAR62 = VAR2->VAR50;
            VAR2->VAR51.VAR7 = VAR7;
            VAR10 = FUN10(VAR13, &VAR2->VAR51);
            if (VAR10 != VAR52)
                break;
        }
        if (VAR10 == VAR63)
        {
            return 1;
        }
    }
    FUN3("", VAR19, VAR21, VAR22, VAR23, VAR8, VAR7, VAR10);
    if (VAR6 == VAR41 && VAR10 >= 0 && VAR10 <= VAR7)
    {
        FUN9(VAR2, VAR22, VAR23, VAR2->VAR50, VAR10, 1);
        FUN7(VAR14.VAR34[VAR17], VAR47, VAR64);
        FUN7(VAR14.VAR34[VAR17], VAR65, VAR10);
    }
    else if (VAR6 == VAR43 && VAR10 == VAR7)
    {
        FUN7(VAR14.VAR34[VAR17], VAR47, VAR64);
        FUN7(VAR14.VAR34[VAR17], VAR65, 0);
    }
    else
    {
        if (VAR10 > (VAR66)VAR7)
        {
            FUN3("", VAR10, VAR7);
            FUN7(VAR14.VAR34[VAR17], VAR47, VAR37);
            FUN7(VAR14.VAR34[VAR17], VAR65, VAR7);
        }
        else if (VAR10 >= 0)
        {
            FUN3("", VAR10);
            FUN7(VAR14.VAR34[VAR17], VAR47, VAR67);
        }
        else
        {
            switch (VAR10)
            {
            case VAR52:
                FUN7(VAR14.VAR34[VAR17], VAR47, VAR68);
                FUN7(VAR14.VAR34[VAR17], VAR65, 0);
                break;
            case VAR69:
            case VAR70:
                FUN3("", VAR10);
                FUN7(VAR14.VAR34[VAR17], VAR47, VAR71);
                FUN7(VAR14.VAR34[VAR17], VAR65, 0);
                break;
            default:
                FUN3("", VAR10);
                FUN7(VAR14.VAR34[VAR17], VAR47, VAR72);
                break;
            }
        }
    }
    if (VAR17 == VAR18)
    {
        FUN7(VAR14.VAR26, VAR36, VAR64);
        VAR4->VAR24 &= ~VAR25;
        VAR4->VAR24 |= (VAR14.VAR32 & VAR25);
        VAR14.VAR32 = VAR2->VAR38;
        VAR2->VAR38 = VAR15;
        VAR11 = FUN4(VAR14.VAR26, VAR35);
        if (VAR11 < VAR2->VAR39)
            VAR2->VAR39 = VAR11;
    }
    FUN8(VAR2, VAR15, &VAR14);
    return 1;
}