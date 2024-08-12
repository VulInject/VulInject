int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR6->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12.VAR13[0];
    VAR14 *VAR15 = &VAR2->VAR16[0], *VAR17;
    enum AVMatrixEncoding VAR18 = VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    int VAR27[VAR28];
    if (VAR8->VAR29 & VAR30)
    {
        for (VAR20 = 0, VAR17 = VAR2->VAR16; VAR20 < VAR2->VAR31; VAR20++, VAR17++)
        {
            if (VAR20 < VAR2->VAR32)
                FUN2(VAR2, VAR17);
            if (!VAR17->VAR33)
                VAR17->VAR34 = 0;
        }
        VAR2->VAR35 = 0;
        VAR2->VAR36 = 0;
    }
    VAR2->VAR37 = 0;
    for (VAR20 = 0, VAR17 = VAR2->VAR16; VAR20 < VAR2->VAR32; VAR20++, VAR17++)
    {
        FUN3(VAR2, VAR17, 0);
        if (VAR17->VAR38 != (1 << VAR17->VAR39) - 1 && (VAR23 = FUN4(VAR2, VAR17)) < 0)
            return VAR23;
        if (VAR2->VAR35)
            FUN5(VAR2, VAR17, 0);
        if (VAR17->VAR40 > 1)
        {
            FUN3(VAR2, VAR17, 1);
            FUN5(VAR2, VAR17, 1);
        }
        VAR2->VAR37 |= VAR17->VAR41;
    }
    for (VAR20 = 1, VAR17 = &VAR2->VAR16[1]; VAR20 < VAR2->VAR31; VAR20++, VAR17++)
    {
        if (!FUN6(VAR17))
            continue;
        if (VAR20 >= VAR2->VAR32)
        {
            for (VAR21 = 0; VAR21 < VAR17->VAR40; VAR21++)
                if (VAR17->VAR42[VAR21].VAR34)
                    FUN7(VAR2, VAR17, VAR21);
            break;
        }
        for (VAR21 = 0; VAR21 < VAR17->VAR40; VAR21++)
            if (VAR17->VAR42[VAR21].VAR34)
                FUN8(VAR2, VAR17, VAR21);
    }
    if (VAR2->VAR40 > 1)
    {
        for (VAR20 = 0; VAR20 < VAR2->VAR32; VAR20++)
            if ((VAR23 = FUN9(VAR2, &VAR2->VAR16[VAR20])) < 0)
                return VAR23;
    }
    if (VAR8->VAR43)
    {
        if (VAR2->VAR37 & VAR44)
        {
            VAR2->VAR45[VAR46] = VAR2->VAR45[VAR47];
            VAR2->VAR37 = (VAR2->VAR37 & ~VAR44) | VAR48;
        }
        if (VAR2->VAR37 & VAR49)
        {
            VAR2->VAR45[VAR50] = VAR2->VAR45[VAR51];
            VAR2->VAR37 = (VAR2->VAR37 & ~VAR49) | VAR52;
        }
    }
    if (VAR8->VAR43 == VAR53 && FUN10(VAR2->VAR37) && VAR15->VAR34 && (VAR15->VAR54 == VAR55 || VAR15->VAR54 == VAR56))
        VAR26 = VAR53;
    else
        VAR26 = VAR2->VAR37;
    if (!FUN11(VAR6, VAR27, VAR26))
        return FUN12(VAR57);
    VAR6->VAR58 = VAR15->VAR59 << (VAR2->VAR40 - 1);
    switch (VAR15->VAR60)
    {
    case 16:
        VAR6->VAR61 = VAR62;
        VAR24 = 16 - VAR15->VAR63;
        break;
    case 20:
    case 24:
        VAR6->VAR61 = VAR64;
        VAR24 = 24 - VAR15->VAR63;
        break;
    default:
        return FUN12(VAR57);
    }
    VAR6->VAR65 = VAR15->VAR60;
    VAR6->VAR66 = VAR67;
    VAR6->VAR68 = 0;
    VAR4->VAR69 = VAR25 = VAR2->VAR70 << (VAR2->VAR40 - 1);
    if ((VAR23 = FUN13(VAR6, VAR4, 0)) < 0)
        return VAR23;
    if (VAR26 != VAR2->VAR37)
    {
        FUN14(VAR2->VAR71, VAR2->VAR45, VAR15->VAR72, VAR25, VAR2->VAR37);
    }
    for (VAR20 = 0; VAR20 < VAR6->VAR73; VAR20++)
    {
        VAR74 *VAR75 = VAR2->VAR45[VAR27[VAR20]];
        if (VAR4->VAR76 == VAR62)
        {
            VAR77 *VAR78 = (VAR77 *)VAR4->VAR79[VAR20];
            for (VAR22 = 0; VAR22 < VAR25; VAR22++)
                VAR78[VAR22] = FUN15(VAR75[VAR22] * (1 << VAR24));
        }
        else
        {
            VAR74 *VAR78 = (VAR74 *)VAR4->VAR79[VAR20];
            for (VAR22 = 0; VAR22 < VAR25; VAR22++)
                VAR78[VAR22] = FUN16(VAR75[VAR22] * (1 << VAR24)) * (1 << 8);
        }
    }
    if (!VAR11->VAR80)
    {
        if (VAR11->VAR81 == VAR82)
            VAR18 = VAR83;
        else if (VAR11->VAR81 == VAR84)
            VAR18 = VAR85;
    }
    else if (VAR26 != VAR2->VAR37 && VAR15->VAR54 == VAR56)
    {
        VAR18 = VAR83;
    }
    if ((VAR23 = FUN17(VAR4, VAR18)) < 0)
        return VAR23;
    return 0;
}