static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    GetByteContext VAR16, VAR17;
    int VAR18;
    int VAR19 = 0;
    uint32_t VAR20, VAR21, VAR22, VAR23;
    int VAR24, VAR25;
    int VAR26;
    int VAR27;
    if (VAR9 < 12)
    {
        FUN2(VAR2, VAR28, "", VAR9);
        return VAR29;
    }
    FUN3(&VAR16, VAR8, VAR9);
    VAR18 = FUN4(&VAR16);
    if ((VAR18 & ~0xF) != FUN5('', '', '', '') || (VAR18 & 0xF) < 2 || (VAR18 & 0xF) > 5)
    {
        FUN2(VAR2, VAR28, "", VAR18);
        return VAR29;
    }
    VAR12->VAR30 = VAR18 == FUN5('', '', '', '');
    while (FUN6(&VAR16) > 5)
    {
        VAR20 = FUN7(&VAR16) - 1;
        VAR24 = FUN8(&VAR16);
        VAR25 = FUN9(&VAR16);
        if (VAR20 > FUN6(&VAR16))
        {
            FUN2(VAR2, VAR28, "" VAR31 "", VAR20, VAR24);
            break;
        }
        switch (VAR24)
        {
        case VAR32:
            VAR19 = VAR12->VAR19 = 0;
            if (VAR20 < 21)
            {
                FUN2(VAR2, VAR28, "" VAR31 "", VAR20);
                break;
            }
            VAR12->VAR33 = FUN4(&VAR16);
            VAR12->VAR34 = FUN4(&VAR16);
            if (VAR12->VAR33 < 16 || VAR12->VAR33 > VAR12->VAR35 || VAR12->VAR34 < 16 || VAR12->VAR34 > VAR12->VAR36)
            {
                FUN2(VAR2, VAR28, "", VAR12->VAR33, VAR12->VAR34);
                VAR27 = VAR29;
                goto VAR37;
            }
            if (VAR12->VAR33 != VAR2->VAR33 || VAR12->VAR34 != VAR2->VAR34)
            {
                VAR27 = FUN10(VAR2, VAR12->VAR33, VAR12->VAR34);
                if (VAR27 < 0)
                    goto VAR37;
            }
            VAR12->VAR38 = FUN4(&VAR16);
            if (VAR12->VAR38 != 2 && VAR12->VAR38 != 3)
            {
                FUN2(VAR2, VAR28, "", VAR12->VAR38);
                VAR27 = VAR39;
                goto VAR37;
            }
            VAR12->VAR40 = FUN4(&VAR16);
            VAR12->VAR41 = FUN4(&VAR16);
            if (VAR12->VAR40 <= 0 || VAR12->VAR41 <= 0 || ((VAR12->VAR40 | VAR12->VAR41) & 0xF) || VAR12->VAR40 * 4LL * VAR12->VAR41 >= VAR42)
            {
                FUN2(VAR2, VAR28, "", VAR12->VAR40, VAR12->VAR41);
                VAR27 = VAR29;
                goto VAR37;
            }
            VAR12->VAR43 = (VAR12->VAR33 + VAR12->VAR40 - 1) / VAR12->VAR40;
            VAR12->VAR44 = (VAR12->VAR34 + VAR12->VAR41 - 1) / VAR12->VAR41;
            VAR12->VAR45 = FUN8(&VAR16);
            if (VAR12->VAR45 == 32)
            {
                if (FUN6(&VAR16) < 16 || (VAR20 - 21) < 16)
                {
                    FUN2(VAR2, VAR28, "");
                    VAR27 = VAR29;
                    goto VAR37;
                }
                VAR21 = FUN4(&VAR16);
                VAR22 = FUN4(&VAR16);
                VAR23 = FUN4(&VAR16);
                if (VAR21 != 0xFF0000 || VAR22 != 0xFF00 || VAR23 != 0xFF)
                {
                    FUN2(VAR2, VAR28, "" VAR46 "" VAR46 "" VAR46 "", VAR21, VAR22, VAR23);
                    VAR27 = VAR39;
                    goto VAR37;
                }
            }
            else
            {
                FUN11(VAR2, "", VAR12->VAR45);
                VAR27 = VAR39;
                goto VAR37;
            }
            if (FUN12(VAR12))
            {
                VAR27 = FUN13(VAR47);
                goto VAR37;
            }
            VAR19 = 1;
            break;
        case VAR48:
            if (!VAR12->VAR43 || !VAR12->VAR44)
            {
                FUN2(VAR2, VAR49, "");
                break;
            }
            if (VAR20 < 2)
            {
                FUN2(VAR2, VAR28, "" VAR31 "", VAR20);
                break;
            }
            VAR12->VAR50 = FUN8(&VAR16);
            VAR12->VAR51 = FUN8(&VAR16);
            if (VAR12->VAR50 >= VAR12->VAR43 || VAR12->VAR51 >= VAR12->VAR44)
            {
                FUN2(VAR2, VAR28, "", VAR12->VAR50, VAR12->VAR51, VAR12->VAR43, VAR12->VAR44);
                break;
            }
            VAR27 = 0;
            switch (VAR12->VAR38)
            {
            case VAR52:
                VAR27 = FUN14(VAR12, VAR12->VAR50, VAR12->VAR51, VAR8 + FUN9(&VAR16), VAR20 - 2, VAR2);
                break;
            case VAR53:
                VAR27 = FUN15(VAR12, VAR12->VAR50, VAR12->VAR51, VAR8 + FUN9(&VAR16), VAR20 - 2);
                break;
            }
            if (VAR27 && VAR12->VAR54)
                FUN2(VAR2, VAR28, "", VAR12->VAR50, VAR12->VAR51);
            break;
        case VAR55:
            if (VAR20 < 5)
            {
                FUN2(VAR2, VAR28, "" VAR31 "", VAR20);
                break;
            }
            VAR12->VAR56 = FUN16(&VAR16);
            VAR12->VAR57 = FUN16(&VAR16);
            break;
        case VAR58:
            if (VAR20 < 8)
            {
                FUN2(VAR2, VAR28, "" VAR31 "", VAR20);
                break;
            }
            FUN3(&VAR17, VAR8 + FUN9(&VAR16), VAR20 - 4);
            FUN17(VAR2, VAR12, &VAR17);
            break;
        case VAR59:
        case VAR60:
            break;
        default:
            FUN2(VAR2, VAR49, "", VAR24);
        }
        FUN18(&VAR16, VAR25 + VAR20 - FUN9(&VAR16));
    }
    if (VAR19)
        VAR12->VAR19 = 1;
    if (VAR12->VAR33 && VAR12->VAR34 && VAR12->VAR54)
    {
        if ((VAR27 = FUN19(VAR2, VAR15, 0)) < 0)
            return VAR27;
        VAR15->VAR61 = VAR19;
        VAR15->VAR62 = VAR19 ? VAR63 : VAR64;
        for (VAR26 = 0; VAR26 < VAR2->VAR34; VAR26++)
            memcpy(VAR15->VAR3[0] + VAR26 * VAR15->VAR65[0], VAR12->VAR54 + VAR26 * VAR12->VAR66, VAR12->VAR33 * 3);
        FUN20(VAR12, VAR15->VAR3[0], VAR15->VAR65[0]);
        *VAR4 = 1;
    }
    return VAR9;
VAR37:
    VAR12->VAR33 = VAR12->VAR34 = 0;
    VAR12->VAR43 = VAR12->VAR44 = 0;
    return VAR27;
}