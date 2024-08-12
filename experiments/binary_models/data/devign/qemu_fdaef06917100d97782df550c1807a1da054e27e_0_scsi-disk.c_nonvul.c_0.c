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
    {
        int VAR20;
        for (VAR20 = 1; VAR20 < VAR7->VAR3.VAR21.VAR12; VAR20++)
        {
            FUN4("", VAR5[VAR20]);
        }
        FUN4("");
    }
    switch (VAR13)
    {
    case VAR22:
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
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
        VAR15 = FUN5(VAR7, VAR14);
        if (VAR15 < 0)
        {
            return 0;
        }
        VAR7->VAR16.VAR39 = VAR15;
        break;
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
        VAR12 = VAR7->VAR3.VAR21.VAR44 / VAR9->VAR10.VAR45;
        FUN3("" VAR46 "", VAR7->VAR3.VAR21.VAR47, VAR12);
        if (VAR7->VAR3.VAR21.VAR47 > VAR9->VAR48)
            goto VAR49;
        VAR7->VAR50 = VAR7->VAR3.VAR21.VAR47 * VAR9->VAR51;
        VAR7->VAR52 = VAR12 * VAR9->VAR51;
        break;
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
        VAR12 = VAR7->VAR3.VAR21.VAR44 / VAR9->VAR10.VAR45;
        FUN3("" VAR46 "", (VAR13 & 0xe) == 0xe ? "" : "", VAR7->VAR3.VAR21.VAR47, VAR12);
        if (VAR7->VAR3.VAR21.VAR47 > VAR9->VAR48)
            goto VAR49;
        VAR7->VAR50 = VAR7->VAR3.VAR21.VAR47 * VAR9->VAR51;
        VAR7->VAR52 = VAR12 * VAR9->VAR51;
        break;
    case VAR60:
        FUN3("", (long)VAR7->VAR3.VAR21.VAR44);
        if (VAR7->VAR3.VAR21.VAR44 > 12)
        {
            goto VAR61;
        }
        break;
    case VAR62:
        FUN3("", (long)VAR7->VAR3.VAR21.VAR44);
        if (VAR7->VAR3.VAR21.VAR44 > 16)
        {
            goto VAR61;
        }
        break;
    case VAR63:
    case VAR64:
        FUN3("" VAR46 "", VAR13 == VAR63 ? 6 : 10, VAR7->VAR3.VAR21.VAR47);
        if (VAR7->VAR3.VAR21.VAR47 > VAR9->VAR48)
        {
            goto VAR49;
        }
        break;
    case VAR65:
        VAR12 = VAR7->VAR3.VAR21.VAR44 / VAR9->VAR10.VAR45;
        FUN3("" VAR46 "", VAR7->VAR3.VAR21.VAR47, VAR12);
        if (VAR7->VAR3.VAR21.VAR47 > VAR9->VAR48)
        {
            goto VAR49;
        }
        if (!(VAR5[1] & 0x8))
        {
            goto VAR61;
        }
        VAR15 = FUN6(VAR9->VAR66, VAR7->VAR3.VAR21.VAR47 * VAR9->VAR51, VAR12 * VAR9->VAR51);
        if (VAR15 < 0)
        {
            goto VAR61;
        }
        break;
    default:
        FUN3("", VAR5[0]);
        FUN7(VAR7, FUN8(VAR67));
        return 0;
    VAR61:
        FUN7(VAR7, FUN8(VAR68));
        return 0;
    VAR49:
        FUN7(VAR7, FUN8(VAR69));
        return 0;
    }
    if (VAR7->VAR52 == 0 && VAR7->VAR16.VAR39 == 0)
    {
        FUN9(&VAR7->VAR3, VAR70);
    }
    VAR12 = VAR7->VAR52 * 512 + VAR7->VAR16.VAR39;
    if (VAR7->VAR3.VAR21.VAR71 == VAR72)
    {
        return -VAR12;
    }
    else
    {
        if (!VAR7->VAR52)
            VAR7->VAR52 = -1;
        return VAR12;
    }
}