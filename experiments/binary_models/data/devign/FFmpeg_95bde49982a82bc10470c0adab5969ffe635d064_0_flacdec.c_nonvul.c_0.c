static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0, VAR5, VAR6, VAR7 = 0;
    uint8_t VAR8[4];
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = FUN2(VAR2, NULL);
    if (!VAR15)
        return FUN3(VAR16);
    VAR15->VAR17->VAR18 = VAR19;
    VAR15->VAR17->VAR20 = VAR21;
    VAR15->VAR22 = VAR23;
    if (FUN4(VAR2->VAR24) != FUN5('', '', '', ''))
    {
        FUN6(VAR2->VAR24, -4, VAR25);
        return 0;
    }
    while (!FUN7(VAR2->VAR24) && !VAR4)
    {
        if (FUN8(VAR2->VAR24, VAR8, 4) != 4)
            return FUN3(VAR26);
        FUN9(VAR8, &VAR4, &VAR5, &VAR6);
        switch (VAR5)
        {
        case VAR27:
        case VAR28:
        case VAR29:
        case VAR30:
        case VAR31:
            VAR10 = FUN10(VAR6 + VAR32);
            if (!VAR10)
            {
                return FUN3(VAR16);
            }
            if (FUN8(VAR2->VAR24, VAR10, VAR6) != VAR6)
            {
                FUN11(FUN3(VAR33));
            }
            break;
        default:
            VAR3 = FUN12(VAR2->VAR24, VAR6);
            if (VAR3 < 0)
                return VAR3;
        }
        if (VAR5 == VAR27)
        {
            uint32_t VAR34;
            uint64_t VAR35;
            if (VAR7)
            {
                FUN11(VAR26);
            }
            if (VAR6 != VAR36)
            {
                FUN11(VAR26);
            }
            VAR7 = 1;
            VAR15->VAR17->VAR37 = VAR10;
            VAR15->VAR17->VAR38 = VAR6;
            VAR10 = NULL;
            VAR34 = FUN13(VAR15->VAR17->VAR37 + 10) >> 4;
            VAR35 = (FUN14(VAR15->VAR17->VAR37 + 13) >> 24) & ((1ULL << 36) - 1);
            if (VAR34 > 0)
            {
                FUN15(VAR15, 64, 1, VAR34);
                if (VAR35 > 0)
                    VAR15->VAR39 = VAR35;
            }
        }
        else if (VAR5 == VAR28)
        {
            uint8_t VAR40[13];
            uint64_t VAR41;
            const VAR9 *VAR42;
            int VAR43, VAR44, VAR45, VAR46;
            if (VAR6 < 431)
                FUN11(VAR26);
            VAR42 = VAR10 + 395;
            VAR44 = FUN16(&VAR42) - 1;
            if (VAR44 <= 0)
                FUN11(VAR26);
            for (VAR43 = 0; VAR43 < VAR44; VAR43++)
            {
                if (VAR42 + 36 - VAR10 > VAR6)
                    FUN11(VAR26);
                VAR41 = FUN17(&VAR42);
                VAR45 = FUN16(&VAR42);
                FUN18(&VAR42, VAR40, 12);
                VAR40[12] = 0;
                VAR42 += 14;
                VAR46 = FUN16(&VAR42);
                if (VAR46 <= 0)
                    FUN11(VAR26);
                VAR42 += VAR46 * 12;
                FUN19(VAR2, VAR45, VAR15->VAR47, VAR41, VAR48, VAR40);
            }
            FUN20(&VAR10);
        }
        else if (VAR5 == VAR29)
        {
            VAR3 = FUN21(VAR2, VAR10, VAR6);
            FUN20(&VAR10);
            if (VAR3 < 0)
            {
                FUN22(VAR2, VAR49, "");
                return VAR3;
            }
        }
        else if (VAR5 == VAR31)
        {
            const VAR9 *VAR50 = VAR10;
            int VAR43, VAR51 = VAR6 / VAR52;
            VAR12->VAR53 = 1;
            if ((VAR2->VAR54 & VAR55))
            {
                for (VAR43 = 0; VAR43 < VAR51; VAR43++)
                {
                    int64_t VAR56 = FUN17(&VAR50);
                    int64_t VAR57 = FUN17(&VAR50);
                    FUN23(&VAR50);
                    FUN24(VAR15, VAR57, VAR56, 0, 0, VAR58);
                }
            }
            FUN20(&VAR10);
        }
        else
        {
            if (!VAR7)
            {
                FUN11(VAR26);
            }
            if (VAR5 == VAR30)
            {
                VAR59 *VAR60;
                VAR3 = FUN25(VAR2, &VAR2->VAR61, VAR10, VAR6, 1);
                if (VAR3 < 0)
                {
                    FUN22(VAR2, VAR62, "");
                }
                else if (VAR3 > 0)
                {
                    VAR2->VAR63 |= VAR64;
                }
                VAR60 = FUN26(VAR2->VAR61, "", NULL, 0);
                if (VAR60)
                {
                    uint64_t VAR65 = FUN27(VAR60->VAR66, NULL, 0);
                    if (!VAR65 || VAR65 & ~0x3ffffULL)
                    {
                        FUN22(VAR2, VAR62, "");
                    }
                    else
                    {
                        VAR15->VAR17->VAR67 = VAR65;
                        FUN28(&VAR2->VAR61, "", NULL, 0);
                    }
                }
            }
            FUN20(&VAR10);
        }
    }
    VAR3 = FUN29(VAR15, VAR2->VAR61);
    if (VAR3 < 0)
        return VAR3;
    FUN30(FUN31(VAR2->VAR24), VAR15);
    return 0;
VAR68:
    FUN32(VAR10);
    return VAR3;
}