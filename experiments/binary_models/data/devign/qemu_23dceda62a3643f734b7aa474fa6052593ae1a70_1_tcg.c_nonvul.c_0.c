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
    if (FUN2(FUN3(VAR16)))
    {
        FUN4("");
        FUN5(VAR2);
        FUN4("");
    }
    VAR2->VAR17 -= FUN6();
    FUN7(VAR2);
    VAR2->VAR17 += FUN6();
    VAR2->VAR18 -= FUN6();
    FUN8(VAR2);
    VAR2->VAR18 += FUN6();
    if (FUN2(FUN3(VAR19)))
    {
        FUN4("");
        FUN5(VAR2);
        FUN4("");
    }
    FUN9(VAR2);
    VAR2->VAR20 = VAR4;
    VAR2->VAR21 = VAR4;
    FUN10(VAR2);
    VAR8 = -1;
    for (VAR6 = VAR2->VAR22; VAR6 >= 0; VAR6 = VAR7)
    {
        VAR23 *const VAR24 = &VAR2->VAR25[VAR6];
        VAR26 *const VAR27 = &VAR2->VAR28[VAR24->VAR27];
        TCGOpcode VAR29 = VAR24->VAR29;
        const VAR30 *VAR31 = &VAR32[VAR29];
        uint16_t VAR33 = VAR2->VAR34[VAR6];
        uint8_t VAR35 = VAR2->VAR36[VAR6];
        VAR7 = VAR24->VAR37;
        VAR38[VAR29]++;
        switch (VAR29)
        {
        case VAR39:
        case VAR40:
            FUN11(VAR2, VAR31, VAR27, VAR33, VAR35);
            break;
        case VAR41:
        case VAR42:
            FUN12(VAR2, VAR27, VAR33, VAR35);
            break;
        case VAR43:
            if (VAR8 >= 0)
            {
                VAR2->VAR44[VAR8] = FUN13(VAR2);
            }
            VAR8++;
            for (VAR5 = 0; VAR5 < VAR45; ++VAR5)
            {
                target_ulong VAR46;
                VAR46 = ((VAR47)VAR27[VAR5 * 2 + 1] << 32) | VAR27[VAR5 * 2];
                VAR46 = VAR27[VAR5];
                VAR2->VAR48[VAR8][VAR5] = VAR46;
            }
            break;
        case VAR49:
            FUN14(VAR2, VAR27[0]);
            break;
        case VAR50:
            FUN15(VAR2, VAR2->VAR51);
            FUN16(VAR2, FUN17(VAR27[0]), VAR2->VAR21);
            break;
        case VAR52:
            FUN18(VAR2, VAR24->VAR53, VAR24->VAR54, VAR27, VAR33, VAR35);
            break;
        default:
            if (VAR31->VAR55 & VAR56)
            {
                FUN19();
            }
            FUN20(VAR2, VAR31, VAR29, VAR27, VAR33, VAR35);
            break;
        }
        FUN21(VAR2);
        if (FUN2((void *)VAR2->VAR21 > VAR2->VAR57))
        {
            return -1;
        }
    }
    FUN22(VAR8 >= 0);
    VAR2->VAR44[VAR8] = FUN13(VAR2);
    if (!FUN23(VAR2))
    {
        return -1;
    }
    FUN24((VAR58)VAR2->VAR20, (VAR58)VAR2->VAR21);
    return FUN13(VAR2);
}