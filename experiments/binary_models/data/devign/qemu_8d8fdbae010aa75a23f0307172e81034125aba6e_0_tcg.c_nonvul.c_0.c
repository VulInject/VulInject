int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    {
        int VAR9;
        VAR9 = VAR2->VAR10 + 1;
        VAR2->VAR11 += VAR9;
        if (VAR9 > VAR2->VAR12)
        {
            VAR2->VAR12 = VAR9;
        }
        VAR9 = VAR2->VAR13;
        VAR2->VAR14 += VAR9;
        if (VAR9 > VAR2->VAR15)
        {
            VAR2->VAR15 = VAR9;
        }
    }
    if (FUN2(FUN3(VAR16) && FUN4(VAR4->VAR17)))
    {
        FUN5("");
        FUN6(VAR2);
        FUN5("");
    }
    VAR2->VAR18 -= FUN7();
    FUN8(VAR2);
    VAR2->VAR18 += FUN7();
    VAR2->VAR19 -= FUN7();
    FUN9(VAR2);
    VAR2->VAR19 += FUN7();
    if (FUN2(FUN3(VAR20) && FUN4(VAR4->VAR17)))
    {
        FUN5("");
        FUN6(VAR2);
        FUN5("");
    }
    FUN10(VAR2);
    VAR2->VAR21 = VAR4->VAR22;
    VAR2->VAR23 = VAR4->VAR22;
    FUN11(VAR2);
    VAR8 = -1;
    for (VAR6 = VAR2->VAR24; VAR6 >= 0; VAR6 = VAR7)
    {
        VAR25 *const VAR26 = &VAR2->VAR27[VAR6];
        VAR28 *const VAR29 = &VAR2->VAR30[VAR26->VAR29];
        TCGOpcode VAR31 = VAR26->VAR31;
        const VAR32 *VAR33 = &VAR34[VAR31];
        uint16_t VAR35 = VAR2->VAR36[VAR6];
        uint8_t VAR37 = VAR2->VAR38[VAR6];
        VAR7 = VAR26->VAR39;
        VAR40[VAR31]++;
        switch (VAR31)
        {
        case VAR41:
        case VAR42:
            FUN12(VAR2, VAR33, VAR29, VAR35, VAR37);
            break;
        case VAR43:
        case VAR44:
            FUN13(VAR2, VAR29, VAR35, VAR37);
            break;
        case VAR45:
            if (VAR8 >= 0)
            {
                VAR2->VAR46[VAR8] = FUN14(VAR2);
            }
            VAR8++;
            for (VAR5 = 0; VAR5 < VAR47; ++VAR5)
            {
                target_ulong VAR48;
                VAR48 = ((VAR49)VAR29[VAR5 * 2 + 1] << 32) | VAR29[VAR5 * 2];
                VAR48 = VAR29[VAR5];
                VAR2->VAR50[VAR8][VAR5] = VAR48;
            }
            break;
        case VAR51:
            FUN15(VAR2, &VAR2->VAR52[VAR29[0]]);
            break;
        case VAR53:
            FUN16(VAR2, VAR2->VAR54);
            FUN17(VAR2, FUN18(VAR29[0]), VAR2->VAR23);
            break;
        case VAR55:
            FUN19(VAR2, VAR26->VAR56, VAR26->VAR57, VAR29, VAR35, VAR37);
            break;
        default:
            if (VAR33->VAR58 & VAR59)
            {
                FUN20();
            }
            FUN21(VAR2, VAR33, VAR31, VAR29, VAR35, VAR37);
            break;
        }
        FUN22(VAR2);
        if (FUN2((void *)VAR2->VAR23 > VAR2->VAR60))
        {
            return -1;
        }
    }
    FUN23(VAR8 >= 0);
    VAR2->VAR46[VAR8] = FUN14(VAR2);
    if (!FUN24(VAR2))
    {
        return -1;
    }
    FUN25((VAR61)VAR2->VAR21, (VAR61)VAR2->VAR23);
    return FUN14(VAR2);
}