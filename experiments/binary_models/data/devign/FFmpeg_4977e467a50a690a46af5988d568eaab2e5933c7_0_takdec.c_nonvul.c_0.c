static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    GetBitContext VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13;
    VAR10 = FUN2(VAR2, 0);
    if (!VAR10)
        return FUN3(VAR14);
    VAR10->VAR15->VAR16 = VAR17;
    VAR10->VAR15->VAR18 = VAR19;
    VAR10->VAR20 = VAR21;
    VAR4->VAR22 = 0;
    if (FUN4(VAR7) != FUN5('', '', '', ''))
    {
        FUN6(VAR7, -4, VAR23);
        return 0;
    }
    while (!FUN7(VAR7))
    {
        enum TAKMetaDataType VAR24;
        int VAR25;
        VAR24 = FUN8(VAR7) & 0x7f;
        VAR25 = FUN9(VAR7);
        switch (VAR24)
        {
        case VAR26:
        case VAR27:
        case VAR28:
            if (VAR25 <= 3)
                return VAR29;
            VAR12 = FUN10(VAR25 - 3 + VAR30);
            if (!VAR12)
                return FUN3(VAR14);
            FUN11(VAR7, VAR31, 0xCE04B7U);
            if (FUN12(VAR7, VAR12, VAR25 - 3) != VAR25 - 3)
            {
                FUN13(&VAR12);
                return FUN3(VAR32);
            }
            if (FUN14(VAR2->VAR7) != FUN15(VAR7))
            {
                FUN16(VAR2, VAR33, "", VAR24);
                if (VAR2->VAR34 & VAR35)
                {
                    FUN13(&VAR12);
                    return VAR29;
                }
            }
            FUN17(&VAR8, VAR12, (VAR25 - 3) * 8);
            break;
        case VAR36:
        {
            uint8_t VAR37[16];
            int VAR38;
            if (VAR25 != 19)
                return VAR29;
            FUN11(VAR7, VAR31, 0xCE04B7U);
            FUN12(VAR7, VAR37, 16);
            if (FUN14(VAR2->VAR7) != FUN15(VAR7))
            {
                FUN16(VAR2, VAR33, "");
                if (VAR2->VAR34 & VAR35)
                    return VAR29;
            }
            FUN16(VAR2, VAR39, "");
            for (VAR38 = 0; VAR38 < 16; VAR38++)
                FUN16(VAR2, VAR39, "", VAR37[VAR38]);
            FUN16(VAR2, VAR39, "");
            break;
        }
        case VAR40:
        {
            int64_t VAR41 = FUN18(VAR7);
            if (VAR7->VAR42)
            {
                FUN19(VAR2);
                FUN6(VAR7, VAR41, VAR43);
            }
            VAR4->VAR44 += VAR41;
            return 0;
        }
        default:
            VAR13 = FUN20(VAR7, VAR25);
            if (VAR13 < 0)
                return VAR13;
        }
        if (VAR24 == VAR26)
        {
            TAKStreamInfo VAR45;
            FUN21(&VAR8, &VAR45);
            if (VAR45.VAR46 > 0)
                VAR10->VAR47 = VAR45.VAR46;
            VAR10->VAR15->VAR48 = VAR45.VAR49;
            if (VAR45.VAR50)
                VAR10->VAR15->VAR51 = VAR45.VAR50;
            VAR10->VAR15->VAR52 = VAR45.VAR52;
            VAR10->VAR15->VAR53 = VAR45.VAR53;
            VAR10->VAR54 = 0;
            FUN22(VAR10, 64, 1, VAR10->VAR15->VAR52);
            VAR10->VAR15->VAR55 = VAR12;
            VAR10->VAR15->VAR56 = VAR25 - 3;
            VAR12 = NULL;
        }
        else if (VAR24 == VAR27)
        {
            if (VAR25 != 11)
                return VAR29;
            VAR4->VAR22 = 1;
            VAR4->VAR44 = FUN23(&VAR8, VAR57) + FUN24(&VAR8, VAR58);
            FUN13(&VAR12);
        }
        else if (VAR24 == VAR28)
        {
            FUN16(VAR2, VAR39, "", FUN25(&VAR8, VAR59));
            FUN13(&VAR12);
        }
    }
    return VAR60;
}