static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    size_t VAR6 = 0, VAR7 = 0;
    const char *VAR8 = NULL;
    int VAR9;
    int VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    struct ohci_td VAR16;
    uint32_t VAR17;
    int VAR18;
    int VAR19;
    VAR17 = VAR4->VAR20 & VAR21;
    VAR19 = (VAR17 == VAR2->VAR22);
    if (VAR19 && !VAR2->VAR23)
    {
        FUN2("");
        return 1;
    }
    if (!FUN3(VAR2, VAR17, &VAR16))
    {
        fprintf(VAR24, "", VAR17);
        return 0;
    }
    VAR5 = FUN4(VAR4->VAR25, VAR26);
    switch (VAR5)
    {
    case VAR27:
    case VAR28:
        break;
    default:
        VAR5 = FUN4(VAR16.VAR25, VAR29);
        break;
    }
    switch (VAR5)
    {
    case VAR28:
        VAR8 = "";
        VAR9 = VAR30;
        break;
    case VAR27:
        VAR8 = "";
        VAR9 = VAR31;
        break;
    case VAR32:
        VAR8 = "";
        VAR9 = VAR33;
        break;
    default:
        fprintf(VAR24, "");
        return 1;
    }
    if (VAR16.VAR34 && VAR16.VAR35)
    {
        if ((VAR16.VAR34 & 0xfffff000) != (VAR16.VAR35 & 0xfffff000))
        {
            VAR6 = (VAR16.VAR35 & 0xfff) + 0x1001 - (VAR16.VAR34 & 0xfff);
        }
        else
        {
            VAR6 = (VAR16.VAR35 - VAR16.VAR34) + 1;
        }
        VAR7 = VAR6;
        if (VAR6 && VAR5 != VAR28)
        {
            VAR7 = (VAR4->VAR25 & VAR36) >> VAR37;
            if (VAR7 > VAR6)
            {
                VAR7 = VAR6;
            }
            if (!VAR19)
            {
                FUN5(VAR2, &VAR16, VAR2->VAR38, VAR7, 0);
            }
        }
    }
    VAR18 = (VAR16.VAR25 & VAR39) != 0;
    FUN2("" VAR40 "" VAR40 "", VAR17, (VAR41)VAR7, (VAR41)VAR6, VAR8, VAR18, VAR16.VAR34, VAR16.VAR35);
    if (VAR7 > 0 && VAR5 != VAR28)
    {
        FUN2("");
        for (VAR11 = 0; VAR11 < VAR7; VAR11++)
        {
            FUN6("", VAR2->VAR38[VAR11]);
        }
        FUN2("");
    }
    if (VAR19)
    {
        VAR10 = VAR2->VAR42.VAR43;
        VAR2->VAR22 = 0;
        VAR2->VAR23 = 0;
    }
    else
    {
        if (VAR2->VAR22)
        {
            FUN2("");
            return 1;
        }
        VAR13 = FUN7(VAR2, FUN4(VAR4->VAR25, VAR44));
        VAR15 = FUN8(VAR13, VAR9, FUN4(VAR4->VAR25, VAR45));
        FUN9(&VAR2->VAR42, VAR9, VAR15);
        FUN10(&VAR2->VAR42, VAR2->VAR38, VAR7);
        VAR10 = FUN11(VAR13, &VAR2->VAR42);
        FUN2("", VAR10);
        if (VAR10 == VAR46)
        {
            VAR2->VAR22 = VAR17;
            return 1;
        }
    }
    if (VAR10 >= 0)
    {
        if (VAR5 == VAR28)
        {
            FUN5(VAR2, &VAR16, VAR2->VAR38, VAR10, 1);
            FUN2("");
            for (VAR11 = 0; VAR11 < VAR10; VAR11++)
                FUN6("", VAR2->VAR38[VAR11]);
            FUN2("");
        }
        else
        {
            VAR10 = VAR7;
        }
    }
    if (VAR10 == VAR7 || (VAR5 == VAR28 && VAR10 >= 0 && VAR18))
    {
        if (VAR10 == VAR6)
        {
            VAR16.VAR34 = 0;
        }
        else
        {
            if ((VAR16.VAR34 & 0xfff) + VAR10 > 0xfff)
            {
                VAR16.VAR34 = (VAR16.VAR35 & ~0xfff) + ((VAR16.VAR34 + VAR10) & 0xfff);
            }
            else
            {
                VAR16.VAR34 += VAR10;
            }
        }
        VAR16.VAR25 |= VAR47;
        VAR16.VAR25 ^= VAR48;
        FUN12(VAR16.VAR25, VAR49, VAR50);
        FUN12(VAR16.VAR25, VAR51, 0);
        if ((VAR5 != VAR28) && (VAR10 != VAR6))
        {
            goto VAR52;
        }
        VAR4->VAR20 &= ~VAR53;
        if (VAR16.VAR25 & VAR48)
            VAR4->VAR20 |= VAR53;
    }
    else
    {
        if (VAR10 >= 0)
        {
            FUN2("");
            FUN12(VAR16.VAR25, VAR49, VAR54);
        }
        else
        {
            switch (VAR10)
            {
            case VAR55:
                FUN12(VAR16.VAR25, VAR49, VAR56);
            case VAR57:
                FUN2("");
                return 1;
            case VAR58:
                FUN2("");
                FUN12(VAR16.VAR25, VAR49, VAR59);
                break;
            case VAR60:
                FUN2("");
                FUN12(VAR16.VAR25, VAR49, VAR61);
                break;
            default:
                fprintf(VAR24, "", VAR10);
                FUN12(VAR16.VAR25, VAR49, VAR62);
                FUN12(VAR16.VAR25, VAR51, 3);
                break;
            }
        }
        VAR4->VAR20 |= VAR63;
    }
    VAR4->VAR20 &= ~VAR21;
    VAR4->VAR20 |= VAR16.VAR64 & VAR21;
    VAR16.VAR64 = VAR2->VAR65;
    VAR2->VAR65 = VAR17;
    VAR11 = FUN4(VAR16.VAR25, VAR66);
    if (VAR11 < VAR2->VAR67)
        VAR2->VAR67 = VAR11;
VAR52:
    FUN13(VAR2, VAR17, &VAR16);
    return FUN4(VAR16.VAR25, VAR49) != VAR50;
}