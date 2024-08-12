static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    int VAR6;
    size_t VAR7 = 0;
    const char *VAR8 = NULL;
    int VAR9;
    int VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    struct ohci_iso_td VAR16;
    uint32_t VAR17;
    uint16_t VAR18;
    int16_t VAR19;
    int VAR20;
    uint32_t VAR21, VAR22, VAR23 = 0;
    uint32_t VAR24, VAR25;
    VAR17 = VAR4->VAR26 & VAR27;
    if (!FUN2(VAR2, VAR17, &VAR16))
    {
        FUN3("", VAR17);
        return 0;
    }
    VAR18 = FUN4(VAR16.VAR28, VAR29);
    VAR20 = FUN4(VAR16.VAR28, VAR30);
    VAR19 = FUN5(VAR2->VAR31, VAR18);
    FUN3(""
           ""
           ""
           ""
           ""
           ""
           "",
           VAR4->VAR26 & VAR27, VAR4->VAR32 & VAR27, VAR16.VAR28, VAR16.VAR33, VAR16.VAR34, VAR16.VAR35, VAR16.VAR36[0], VAR16.VAR36[1], VAR16.VAR36[2], VAR16.VAR36[3], VAR16.VAR36[4], VAR16.VAR36[5], VAR16.VAR36[6], VAR16.VAR36[7], VAR2->VAR31, VAR18, VAR20, VAR19, FUN4(VAR16.VAR28, VAR37), FUN4(VAR16.VAR28, VAR38));
    if (VAR19 < 0)
    {
        FUN6("", VAR19);
        return 1;
    }
    else if (VAR19 > VAR20)
    {
        FUN6("", VAR19, VAR20);
        FUN7(VAR16.VAR28, VAR38, VAR39);
        VAR4->VAR26 &= ~VAR27;
        VAR4->VAR26 |= (VAR16.VAR34 & VAR27);
        VAR16.VAR34 = VAR2->VAR40;
        VAR2->VAR40 = VAR17;
        VAR11 = FUN4(VAR16.VAR28, VAR37);
        if (VAR11 < VAR2->VAR41)
            VAR2->VAR41 = VAR11;
        FUN8(VAR2, VAR17, &VAR16);
        return 0;
    }
    VAR6 = FUN4(VAR4->VAR28, VAR42);
    switch (VAR6)
    {
    case VAR43:
        VAR8 = "";
        VAR9 = VAR44;
        break;
    case VAR45:
        VAR8 = "";
        VAR9 = VAR46;
        break;
    case VAR47:
        VAR8 = "";
        VAR9 = VAR48;
        break;
    default:
        FUN3("", VAR6);
        return 1;
    }
    if (!VAR16.VAR33 || !VAR16.VAR35)
    {
        FUN3("", VAR16.VAR33, VAR16.VAR35);
        return 1;
    }
    VAR21 = VAR16.VAR36[VAR19];
    VAR22 = VAR16.VAR36[VAR19 + 1];
    if (!(FUN4(VAR21, VAR49) & 0xe) || ((VAR19 < VAR20) && !(FUN4(VAR22, VAR49) & 0xe)))
    {
        FUN3("", VAR21, VAR22);
        return 1;
    }
    if ((VAR19 < VAR20) && (VAR21 > VAR22))
    {
        FUN3("", VAR21, VAR22);
        return 1;
    }
    if ((VAR21 & 0x1000) == 0)
    {
        VAR24 = (VAR16.VAR33 & VAR50) | (VAR21 & VAR51);
    }
    else
    {
        VAR24 = (VAR16.VAR35 & VAR50) | (VAR21 & VAR51);
    }
    if (VAR19 < VAR20)
    {
        VAR23 = VAR22 - 1;
        if ((VAR23 & 0x1000) == 0)
        {
            VAR25 = (VAR16.VAR33 & VAR50) | (VAR23 & VAR51);
        }
        else
        {
            VAR25 = (VAR16.VAR35 & VAR50) | (VAR23 & VAR51);
        }
    }
    else
    {
        VAR25 = VAR16.VAR35;
    }
    if ((VAR24 & VAR50) != (VAR25 & VAR50))
    {
        VAR7 = (VAR25 & VAR51) + 0x1001 - (VAR24 & VAR51);
    }
    else
    {
        VAR7 = VAR25 - VAR24 + 1;
    }
    if (VAR7 && VAR6 != VAR43)
    {
        FUN9(VAR2, VAR24, VAR25, VAR2->VAR52, VAR7, 0);
    }
    if (VAR5)
    {
        VAR10 = VAR2->VAR53.VAR54;
    }
    else
    {
        VAR13 = FUN10(VAR2, FUN4(VAR4->VAR28, VAR55));
        VAR15 = FUN11(VAR13, VAR9, FUN4(VAR4->VAR28, VAR56));
        FUN12(&VAR2->VAR53, VAR9, VAR15);
        FUN13(&VAR2->VAR53, VAR2->VAR52, VAR7);
        VAR10 = FUN14(VAR13, &VAR2->VAR53);
        if (VAR10 == VAR57)
        {
            return 1;
        }
    }
    FUN3("", VAR21, VAR23, VAR24, VAR25, VAR8, VAR7, VAR10);
    if (VAR6 == VAR43 && VAR10 >= 0 && VAR10 <= VAR7)
    {
        FUN9(VAR2, VAR24, VAR25, VAR2->VAR52, VAR10, 1);
        FUN7(VAR16.VAR36[VAR19], VAR49, VAR58);
        FUN7(VAR16.VAR36[VAR19], VAR59, VAR10);
    }
    else if (VAR6 == VAR45 && VAR10 == VAR7)
    {
        FUN7(VAR16.VAR36[VAR19], VAR49, VAR58);
        FUN7(VAR16.VAR36[VAR19], VAR59, 0);
    }
    else
    {
        if (VAR10 > (VAR60)VAR7)
        {
            FUN3("", VAR10, VAR7);
            FUN7(VAR16.VAR36[VAR19], VAR49, VAR39);
            FUN7(VAR16.VAR36[VAR19], VAR59, VAR7);
        }
        else if (VAR10 >= 0)
        {
            FUN3("", VAR10);
            FUN7(VAR16.VAR36[VAR19], VAR49, VAR61);
        }
        else
        {
            switch (VAR10)
            {
            case VAR62:
                FUN7(VAR16.VAR36[VAR19], VAR49, VAR63);
                FUN7(VAR16.VAR36[VAR19], VAR59, 0);
                break;
            case VAR64:
            case VAR65:
                FUN3("", VAR10);
                FUN7(VAR16.VAR36[VAR19], VAR49, VAR66);
                FUN7(VAR16.VAR36[VAR19], VAR59, 0);
                break;
            default:
                FUN3("", VAR10);
                FUN7(VAR16.VAR36[VAR19], VAR49, VAR67);
                break;
            }
        }
    }
    if (VAR19 == VAR20)
    {
        FUN7(VAR16.VAR28, VAR38, VAR58);
        VAR4->VAR26 &= ~VAR27;
        VAR4->VAR26 |= (VAR16.VAR34 & VAR27);
        VAR16.VAR34 = VAR2->VAR40;
        VAR2->VAR40 = VAR17;
        VAR11 = FUN4(VAR16.VAR28, VAR37);
        if (VAR11 < VAR2->VAR41)
            VAR2->VAR41 = VAR11;
    }
    FUN8(VAR2, VAR17, &VAR16);
    return 1;
}