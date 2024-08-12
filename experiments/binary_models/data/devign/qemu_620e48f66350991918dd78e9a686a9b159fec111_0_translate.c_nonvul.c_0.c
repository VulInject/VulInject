static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6, int32_t VAR7)
{
    target_ulong VAR8 = -1;
    int VAR9 = 0;
    int VAR10 = 0;
    TCGv VAR11 = FUN2();
    TCGv VAR12 = FUN2();
    if (VAR2->VAR13 & VAR14)
    {
        FUN3("" VAR15 "", VAR2->VAR16);
        FUN4(VAR2, VAR17);
        goto VAR18;
    }
    switch (VAR3)
    {
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        if (VAR5 != VAR6)
        {
            FUN5(VAR11, VAR5);
            FUN5(VAR12, VAR6);
            VAR10 = 1;
        }
        VAR8 = VAR2->VAR16 + VAR4 + VAR7;
        break;
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
        if (VAR5 != 0)
        {
            FUN5(VAR11, VAR5);
            VAR10 = 1;
        }
        VAR8 = VAR2->VAR16 + VAR4 + VAR7;
        break;
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
        VAR8 = ((VAR2->VAR16 + VAR4) & (VAR40)0xF0000000) | (VAR41)VAR7;
        break;
    case VAR42:
    case VAR43:
    case VAR44:
    case VAR45:
        if (VAR7 != 0 && VAR7 != 16)
        {
            FUN6("");
            FUN4(VAR2, VAR17);
            goto VAR18;
        }
        FUN5(VAR46, VAR5);
        break;
    default:
        FUN6("");
        FUN4(VAR2, VAR17);
        goto VAR18;
    }
    if (VAR10 == 0)
    {
        switch (VAR3)
        {
        case VAR19:
        case VAR20:
        case VAR23:
        case VAR26:
        case VAR29:
        case VAR30:
            VAR2->VAR13 |= VAR47;
            FUN7("");
            break;
        case VAR24:
        case VAR25:
            VAR9 = 31;
            VAR2->VAR13 |= VAR47;
            FUN7("");
            break;
        case VAR21:
        case VAR27:
        case VAR31:
            FUN7("");
            goto VAR18;
        case VAR32:
            FUN8(VAR48[31], VAR2->VAR16 + 8);
            FUN7("");
            goto VAR18;
        case VAR33:
            FUN8(VAR48[31], VAR2->VAR16 + 8);
            FUN7("");
            VAR2->VAR16 += 4;
            goto VAR18;
        case VAR22:
        case VAR28:
        case VAR34:
            FUN7("");
            VAR2->VAR16 += 4;
            goto VAR18;
        case VAR35:
            VAR2->VAR13 |= VAR47;
            FUN7("" VAR15, VAR8);
            break;
        case VAR39:
        case VAR37:
            VAR2->VAR13 |= VAR49;
        case VAR38:
        case VAR36:
            VAR9 = 31;
            VAR2->VAR13 |= VAR47;
            VAR2->VAR13 |= ((VAR3 == VAR38 || VAR3 == VAR39) ? VAR50 : VAR51);
            FUN7("" VAR15, VAR8);
            break;
        case VAR42:
            VAR2->VAR13 |= VAR52;
            if (VAR4 == 4)
                VAR2->VAR13 |= VAR51;
            FUN7("", VAR53[VAR5]);
            break;
        case VAR45:
        case VAR43:
        case VAR44:
            VAR9 = VAR6;
            VAR2->VAR13 |= VAR52;
            VAR2->VAR13 |= (VAR3 == VAR45 ? VAR50 : VAR51);
            FUN7("", VAR53[VAR6], VAR53[VAR5]);
            break;
        default:
            FUN6("");
            FUN4(VAR2, VAR17);
            goto VAR18;
        }
    }
    else
    {
        switch (VAR3)
        {
        case VAR19:
            FUN9(VAR54, VAR55, VAR11, VAR12);
            FUN7("" VAR15, VAR53[VAR5], VAR53[VAR6], VAR8);
            goto VAR56;
        case VAR20:
            FUN9(VAR54, VAR55, VAR11, VAR12);
            FUN7("" VAR15, VAR53[VAR5], VAR53[VAR6], VAR8);
            goto VAR57;
        case VAR21:
            FUN9(VAR58, VAR55, VAR11, VAR12);
            FUN7("" VAR15, VAR53[VAR5], VAR53[VAR6], VAR8);
            goto VAR56;
        case VAR22:
            FUN9(VAR58, VAR55, VAR11, VAR12);
            FUN7("" VAR15, VAR53[VAR5], VAR53[VAR6], VAR8);
            goto VAR57;
        case VAR23:
            FUN10(VAR59, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR56;
        case VAR26:
            FUN10(VAR59, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR57;
        case VAR24:
            FUN10(VAR59, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            VAR9 = 31;
            goto VAR56;
        case VAR25:
            FUN10(VAR59, VAR55, VAR11, 0);
            VAR9 = 31;
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR57;
        case VAR27:
            FUN10(VAR60, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR56;
        case VAR28:
            FUN10(VAR60, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR57;
        case VAR29:
            FUN10(VAR61, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR56;
        case VAR30:
            FUN10(VAR61, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR57;
        case VAR31:
            FUN10(VAR62, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR56;
        case VAR34:
            FUN10(VAR62, VAR55, VAR11, 0);
            FUN7("" VAR15, VAR53[VAR5], VAR8);
            goto VAR57;
        case VAR32:
            FUN10(VAR62, VAR55, VAR11, 0);
            VAR9 = 31;
            FUN7("" VAR15, VAR53[VAR5], VAR8);
        VAR56:
            VAR2->VAR13 |= VAR63;
            break;
        case VAR33:
            FUN10(VAR62, VAR55, VAR11, 0);
            VAR9 = 31;
            FUN7("" VAR15, VAR53[VAR5], VAR8);
        VAR57:
            VAR2->VAR13 |= VAR64;
            break;
        default:
            FUN6("");
            FUN4(VAR2, VAR17);
            goto VAR18;
        }
    }
    FUN7("" VAR15, VAR9, VAR2->VAR13, VAR8);
    VAR2->VAR46 = VAR8;
    if (VAR9 > 0)
    {
        int VAR65 = VAR4;
        int VAR66 = !!(VAR2->VAR13 & VAR67);
        if (VAR3 != VAR44)
            VAR65 += ((VAR2->VAR13 & VAR50) ? 2 : 4);
        FUN8(VAR48[VAR9], VAR2->VAR16 + VAR65 + VAR66);
    }
VAR18:
    if (VAR4 == 2)
        VAR2->VAR13 |= VAR68;
    FUN11(VAR11);
    FUN11(VAR12);
}