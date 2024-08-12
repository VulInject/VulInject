static int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4 = VAR2->VAR5.VAR4;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR7->VAR9->VAR10 = 0;
    VAR7->VAR9->VAR11 = 0;
    if (VAR4->VAR12 && VAR2->VAR13.VAR14.VAR15)
    {
        VAR16 *VAR17 = &VAR2->VAR13.VAR14;
        switch (VAR17->VAR18)
        {
        case VAR19:
            break;
        case VAR20:
        case VAR21:
            VAR7->VAR9->VAR10 = 1;
            break;
        case VAR22:
        case VAR23:
            if (FUN2(VAR2))
                VAR7->VAR9->VAR10 = 1;
            else
                VAR7->VAR9->VAR10 = VAR2->VAR24;
            break;
        case VAR25:
        case VAR26:
            VAR7->VAR9->VAR11 = 1;
            break;
        case VAR27:
            VAR7->VAR9->VAR11 = 2;
            break;
        case VAR28:
            VAR7->VAR9->VAR11 = 4;
            break;
        }
        if ((VAR17->VAR29 & 3) && VAR17->VAR18 <= VAR23)
            VAR7->VAR9->VAR10 = (VAR17->VAR29 & (1 << 1)) != 0;
    }
    else
    {
        VAR7->VAR9->VAR10 = FUN2(VAR2);
    }
    VAR2->VAR24 = VAR7->VAR9->VAR10;
    if (VAR7->VAR30[0] != VAR7->VAR30[1])
    {
        VAR7->VAR9->VAR31 = VAR7->VAR30[0] < VAR7->VAR30[1];
    }
    else
    {
        if (VAR7->VAR9->VAR10 || (VAR4->VAR12 && VAR2->VAR13.VAR14.VAR15))
        {
            if (VAR2->VAR13.VAR14.VAR18 == VAR22 || VAR2->VAR13.VAR14.VAR18 == VAR25)
                VAR7->VAR9->VAR31 = 1;
            else
                VAR7->VAR9->VAR31 = 0;
        }
        else
        {
            VAR7->VAR9->VAR31 = 0;
        }
    }
    if (VAR2->VAR13.VAR32.VAR15 && VAR2->VAR13.VAR32.VAR33 >= 0 && VAR2->VAR13.VAR32.VAR33 <= 6 && VAR2->VAR13.VAR32.VAR34 > 0 && VAR2->VAR13.VAR32.VAR34 < 3)
    {
        VAR35 *VAR36 = &VAR2->VAR13.VAR32;
        VAR37 *VAR38 = FUN3(VAR7->VAR9);
        if (!VAR38)
            return FUN4(VAR39);
        switch (VAR36->VAR33)
        {
        case 0:
            VAR38->VAR40 = VAR41;
            break;
        case 1:
            VAR38->VAR40 = VAR42;
            break;
        case 2:
            VAR38->VAR40 = VAR43;
            break;
        case 3:
            if (VAR36->VAR44)
                VAR38->VAR40 = VAR45;
            else
                VAR38->VAR40 = VAR46;
            break;
        case 4:
            VAR38->VAR40 = VAR47;
            break;
        case 5:
            VAR38->VAR40 = VAR48;
            break;
        case 6:
            VAR38->VAR40 = VAR49;
            break;
        }
        if (VAR36->VAR34 == 2)
            VAR38->VAR50 = VAR51;
    }
    if (VAR2->VAR13.VAR52.VAR15 && (VAR2->VAR13.VAR52.VAR53 || VAR2->VAR13.VAR52.VAR54 || VAR2->VAR13.VAR52.VAR55))
    {
        VAR56 *VAR57 = &VAR2->VAR13.VAR52;
        double VAR58 = VAR57->VAR53 * 360 / (double)(1 << 16);
        VAR59 *VAR60 = FUN5(VAR7->VAR9, VAR61, sizeof(VAR62) * 9);
        if (!VAR60)
            return FUN4(VAR39);
        FUN6((VAR62 *)VAR60->VAR63, VAR58);
        FUN7((VAR62 *)VAR60->VAR63, VAR57->VAR54, VAR57->VAR55);
    }
    if (VAR2->VAR13.VAR64.VAR15)
    {
        VAR59 *VAR65 = FUN5(VAR7->VAR9, VAR66, sizeof(VAR67));
        if (!VAR65)
            return FUN4(VAR39);
        *VAR65->VAR63 = VAR2->VAR13.VAR64.VAR68;
        VAR2->VAR13.VAR64.VAR15 = 0;
    }
    if (VAR2->VAR13.VAR69.VAR69)
    {
        VAR70 *VAR71 = &VAR2->VAR13.VAR69;
        VAR59 *VAR65 = FUN5(VAR7->VAR9, VAR72, VAR71->VAR73);
        if (!VAR65)
            return FUN4(VAR39);
        memcpy(VAR65->VAR63, VAR71->VAR69, VAR71->VAR73);
        FUN8(&VAR71->VAR69);
        VAR71->VAR73 = 0;
    }
    return 0;
}