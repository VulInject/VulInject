static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR3->VAR11);
    int32_t VAR12;
    uint8_t VAR13;
    VAR4 *VAR14;
    int VAR15;
    VAR13 = VAR5[0];
    VAR14 = (VAR4 *)VAR7->VAR16.VAR17;
    FUN3("", VAR3->VAR18, VAR3->VAR19, VAR5[0]);
    if (FUN4(&VAR7->VAR3, VAR5) != 0)
    {
        FUN5("", VAR13);
        FUN6(VAR7, VAR20, FUN7(VAR21));
        return 0;
    }
    {
        int VAR22;
        for (VAR22 = 1; VAR22 < VAR7->VAR3.VAR23.VAR12; VAR22++)
        {
            FUN8("", VAR5[VAR22]);
        }
        FUN8("");
    }
    if (VAR3->VAR18)
    {
        FUN3("", VAR3->VAR18);
        if (VAR13 != VAR24 && VAR13 != VAR25)
        {
            FUN6(VAR7, VAR20, FUN7(VAR26));
            return 0;
        }
    }
    switch (VAR13)
    {
    case VAR27:
    case VAR24:
    case VAR25:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
        VAR15 = FUN9(VAR7, VAR14);
        if (VAR15 < 0)
        {
            return 0;
        }
        VAR7->VAR16.VAR43 = VAR15;
        break;
    case VAR44:
    case VAR45:
    case VAR46:
    case VAR47:
        VAR12 = VAR7->VAR3.VAR23.VAR48 / VAR9->VAR10.VAR49;
        FUN3("" VAR50 "", VAR7->VAR3.VAR23.VAR51, VAR12);
        if (VAR7->VAR3.VAR23.VAR51 > VAR9->VAR52)
            goto VAR53;
        VAR7->VAR54 = VAR7->VAR3.VAR23.VAR51 * VAR9->VAR55;
        VAR7->VAR56 = VAR12 * VAR9->VAR55;
        break;
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
        VAR12 = VAR7->VAR3.VAR23.VAR48 / VAR9->VAR10.VAR49;
        FUN3("" VAR50 "", (VAR13 & 0xe) == 0xe ? "" : "", VAR7->VAR3.VAR23.VAR51, VAR12);
        if (VAR7->VAR3.VAR23.VAR51 > VAR9->VAR52)
            goto VAR53;
        VAR7->VAR54 = VAR7->VAR3.VAR23.VAR51 * VAR9->VAR55;
        VAR7->VAR56 = VAR12 * VAR9->VAR55;
        break;
    case VAR64:
        FUN3("", (long)VAR7->VAR3.VAR23.VAR48);
        if (VAR7->VAR3.VAR23.VAR48 > 12)
        {
            goto VAR65;
        }
        break;
    case VAR66:
        FUN3("", (long)VAR7->VAR3.VAR23.VAR48);
        if (VAR7->VAR3.VAR23.VAR48 > 16)
        {
            goto VAR65;
        }
        break;
    case VAR67:
    case VAR68:
        FUN3("" VAR50 "", VAR13 == VAR67 ? 6 : 10, VAR7->VAR3.VAR23.VAR51);
        if (VAR7->VAR3.VAR23.VAR51 > VAR9->VAR52)
        {
            goto VAR53;
        }
        break;
    case VAR69:
        VAR12 = VAR7->VAR3.VAR23.VAR48 / VAR9->VAR10.VAR49;
        FUN3("" VAR50 "", VAR7->VAR3.VAR23.VAR51, VAR12);
        if (VAR7->VAR3.VAR23.VAR51 > VAR9->VAR52)
        {
            goto VAR53;
        }
        if (!(VAR5[1] & 0x8))
        {
            goto VAR65;
        }
        VAR15 = FUN10(VAR9->VAR70, VAR7->VAR3.VAR23.VAR51 * VAR9->VAR55, VAR12 * VAR9->VAR55);
        if (VAR15 < 0)
        {
            goto VAR65;
        }
        break;
    default:
        FUN3("", VAR5[0]);
        FUN6(VAR7, VAR20, FUN7(VAR21));
        return 0;
    VAR65:
        FUN6(VAR7, VAR20, FUN7(VAR71));
        return 0;
    VAR53:
        FUN6(VAR7, VAR20, FUN7(VAR72));
        return 0;
    }
    if (VAR7->VAR56 == 0 && VAR7->VAR16.VAR43 == 0)
    {
        FUN6(VAR7, VAR73, FUN7(VAR74));
    }
    VAR12 = VAR7->VAR56 * 512 + VAR7->VAR16.VAR43;
    if (VAR7->VAR3.VAR23.VAR75 == VAR76)
    {
        return -VAR12;
    }
    else
    {
        if (!VAR7->VAR56)
            VAR7->VAR56 = -1;
        return VAR12;
    }
}