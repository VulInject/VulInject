static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, long VAR5)
{
    int VAR6, VAR7;
    if (FUN2(FUN3(VAR8)))
    {
        FUN4("");
        FUN5(VAR2);
        FUN4("");
    }
    VAR2->VAR9 -= FUN6();
    FUN7(VAR2);
    VAR2->VAR9 += FUN6();
    VAR2->VAR10 -= FUN6();
    FUN8(VAR2);
    VAR2->VAR10 += FUN6();
    if (FUN2(FUN3(VAR11)))
    {
        FUN4("");
        FUN5(VAR2);
        FUN4("");
    }
    FUN9(VAR2);
    VAR2->VAR12 = VAR4;
    VAR2->VAR13 = VAR4;
    FUN10(VAR2);
    for (VAR6 = VAR2->VAR14; VAR6 >= 0; VAR6 = VAR7)
    {
        VAR15 *const VAR16 = &VAR2->VAR17[VAR6];
        VAR18 *const VAR19 = &VAR2->VAR20[VAR16->VAR19];
        TCGOpcode VAR21 = VAR16->VAR21;
        const VAR22 *VAR23 = &VAR24[VAR21];
        uint16_t VAR25 = VAR2->VAR26[VAR6];
        uint8_t VAR27 = VAR2->VAR28[VAR6];
        VAR7 = VAR16->VAR29;
        VAR30[VAR21]++;
        switch (VAR21)
        {
        case VAR31:
        case VAR32:
            FUN11(VAR2, VAR23, VAR19, VAR25, VAR27);
            break;
        case VAR33:
        case VAR34:
            FUN12(VAR2, VAR19, VAR25, VAR27);
            break;
        case VAR35:
            break;
        case VAR36:
            FUN13(VAR2, VAR19[0]);
            break;
        case VAR37:
            FUN14(VAR2, VAR2->VAR38);
            FUN15(VAR2, FUN16(VAR19[0]), VAR2->VAR13);
            break;
        case VAR39:
            FUN17(VAR2, VAR16->VAR40, VAR16->VAR41, VAR19, VAR25, VAR27);
            break;
        default:
            if (VAR23->VAR42 & VAR43)
            {
                FUN18();
            }
            FUN19(VAR2, VAR23, VAR21, VAR19, VAR25, VAR27);
            break;
        }
        if (VAR5 >= 0 && VAR5 < FUN20(VAR2))
        {
            return VAR6;
        }
        FUN21(VAR2);
    }
    FUN22(VAR2);
    return -1;
}