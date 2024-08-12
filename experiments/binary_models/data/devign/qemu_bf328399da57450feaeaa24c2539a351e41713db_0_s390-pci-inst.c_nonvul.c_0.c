int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint8_t VAR12[4096 * 2];
    uint8_t VAR13 = 0;
    VAR14 *VAR15 = &VAR2->VAR15;
    int VAR16;
    FUN2(FUN3(VAR2));
    if (VAR15->VAR17.VAR18 & VAR19)
    {
        FUN4(VAR15, VAR20, 4);
        return 0;
    }
    if (FUN5(VAR2, VAR15->VAR21[VAR3], VAR3, VAR12, sizeof(*VAR5)))
    {
        return 0;
    }
    VAR5 = (VAR4 *)VAR12;
    VAR10 = FUN6(&VAR5->VAR22);
    if (VAR10 < 16 || VAR10 > 8184 || (VAR10 % 8 != 0))
    {
        FUN4(VAR15, VAR23, 4);
        return 0;
    }
    if (FUN5(VAR2, VAR15->VAR21[VAR3], VAR3, VAR12, VAR10 + sizeof(*VAR7)))
    {
        return 0;
    }
    VAR7 = (VAR6 *)(VAR12 + VAR10);
    VAR11 = FUN6(&VAR7->VAR22);
    if (VAR11 < 8 || VAR11 > 8176 || (VAR11 % 8 != 0))
    {
        FUN4(VAR15, VAR23, 4);
        return 0;
    }
    if ((VAR10 + VAR11) > 8192)
    {
        FUN4(VAR15, VAR23, 4);
        return 0;
    }
    if (FUN5(VAR2, VAR15->VAR21[VAR3], VAR3, VAR12, VAR10 + VAR11))
    {
        return 0;
    }
    if (VAR10 != 32)
    {
        FUN7(&VAR7->VAR24, VAR25);
        goto VAR26;
    }
    switch (FUN6(&VAR5->VAR27))
    {
    case VAR28:
    {
        VAR29 *VAR30 = (VAR29 *)VAR12;
        FUN8(VAR30, &VAR13);
        break;
    }
    case VAR31:
    {
        VAR32 *VAR33 = (VAR32 *)VAR5;
        VAR34 *VAR35 = (VAR34 *)VAR7;
        VAR9 = FUN9(FUN10(&VAR33->VAR36));
        if (!VAR9)
        {
            FUN7(&VAR35->VAR37.VAR24, VAR38);
            goto VAR26;
        }
        switch (VAR33->VAR39)
        {
        case VAR40:
            VAR9->VAR36 |= VAR41;
            VAR9->VAR42 = VAR43;
            FUN11(&VAR35->VAR36, VAR9->VAR36);
            FUN7(&VAR35->VAR37.VAR24, VAR44);
            break;
        case VAR45:
            VAR9->VAR36 &= ~VAR41;
            VAR9->VAR42 = VAR46;
            FUN11(&VAR35->VAR36, VAR9->VAR36);
            FUN7(&VAR35->VAR37.VAR24, VAR44);
            break;
        default:
            FUN12("");
            FUN7(&VAR35->VAR37.VAR24, VAR47);
            break;
        }
        break;
    }
    case VAR48:
    {
        VAR49 *VAR50 = (VAR49 *)VAR5;
        VAR51 *VAR52 = (VAR51 *)VAR7;
        VAR9 = FUN9(FUN10(&VAR50->VAR36));
        if (!VAR9)
        {
            FUN12("");
            FUN7(&VAR52->VAR37.VAR24, VAR38);
            goto VAR26;
        }
        for (VAR16 = 0; VAR16 < VAR53; VAR16++)
        {
            uint32_t VAR54 = FUN13(VAR9->VAR55->VAR56 + VAR57 + (VAR16 * 4));
            FUN11(&VAR52->VAR58[VAR16], VAR54);
            VAR52->VAR59[VAR16] = VAR9->VAR55->VAR60[VAR16].VAR61 ? FUN14(VAR9->VAR55->VAR60[VAR16].VAR61) : 0;
            FUN12("" VAR62 "", VAR16, FUN10(&VAR52->VAR58[VAR16]), VAR9->VAR55->VAR60[VAR16].VAR61, VAR52->VAR59[VAR16]);
        }
        FUN15(&VAR52->VAR63, VAR64);
        FUN15(&VAR52->VAR65, VAR66);
        FUN11(&VAR52->VAR67, VAR9->VAR67);
        FUN7(&VAR52->VAR68, 0);
        FUN7(&VAR52->VAR69, 1);
        FUN11(&VAR52->VAR70, VAR9->VAR70);
        FUN7(&VAR52->VAR37.VAR24, VAR44);
        break;
    }
    case VAR71:
    {
        VAR72 *VAR73 = (VAR72 *)VAR7;
        VAR73->VAR74 = 1;
        FUN15(&VAR73->VAR75, 0);
        FUN15(&VAR73->VAR76, VAR77);
        FUN7(&VAR73->VAR78, 0);
        FUN7(&VAR73->VAR16, 128);
        VAR73->VAR79 = 0;
        FUN7(&VAR73->VAR37.VAR24, VAR44);
        break;
    }
    default:
        FUN12("");
        FUN7(&VAR7->VAR24, VAR80);
        break;
    }
VAR26:
    if (FUN16(VAR2, VAR15->VAR21[VAR3], VAR3, VAR12, VAR10 + VAR11))
    {
        return 0;
    }
    FUN17(VAR2, VAR13);
    return 0;
}