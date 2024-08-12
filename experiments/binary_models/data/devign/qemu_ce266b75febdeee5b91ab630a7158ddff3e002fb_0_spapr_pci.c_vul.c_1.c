static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10 = FUN2(VAR7, 0);
    uint64_t VAR11 = FUN3(VAR7, 1);
    unsigned int VAR12 = FUN2(VAR7, 3);
    unsigned int VAR13 = FUN2(VAR7, 4);
    unsigned int VAR14 = FUN2(VAR7, 5);
    unsigned int VAR15;
    unsigned int VAR16, VAR17 = 0;
    VAR18 *VAR19 = NULL;
    VAR20 *VAR21 = NULL;
    VAR22 *VAR23;
    int *VAR24;
    switch (VAR12)
    {
    case VAR25:
    case VAR26:
        VAR15 = VAR27;
        break;
    case VAR28:
        VAR15 = VAR29;
        break;
    default:
        FUN4("", VAR12);
        FUN5(VAR9, 0, VAR30);
        return;
    }
    VAR19 = FUN6(VAR4, VAR11);
    if (VAR19)
    {
        VAR21 = FUN7(VAR4, VAR11, VAR10);
    }
    if (!VAR19 || !VAR21)
    {
        FUN5(VAR9, 0, VAR30);
        return;
    }
    if (!VAR13)
    {
        VAR23 = (VAR22 *)FUN8(VAR19->VAR23, &VAR10);
        if (!VAR23)
        {
            FUN9("", VAR10);
            FUN5(VAR9, 0, VAR31);
            return;
        }
        FUN10(VAR4->VAR32, VAR23->VAR33, VAR23->VAR34);
        if (FUN11(VAR21))
        {
            FUN12(VAR21, 0, false, 0, 0);
        }
        if (FUN13(VAR21))
        {
            FUN12(VAR21, 0, true, 0, 0);
        }
        FUN14(VAR19->VAR23, &VAR10);
        FUN9("", VAR10);
        FUN5(VAR9, 0, VAR35);
        FUN5(VAR9, 1, 0);
        return;
    }
    if (VAR15 == VAR27)
    {
        VAR17 = FUN15(VAR21);
    }
    else if (VAR15 == VAR29)
    {
        VAR17 = VAR21->VAR36;
    }
    if (!VAR17)
    {
        FUN4("", VAR15, VAR10);
        FUN5(VAR9, 0, -1);
        return;
    }
    if (VAR13 > VAR17)
    {
        FUN16(VAR10, VAR13, VAR17);
        VAR13 = VAR17;
        VAR16 = 0;
        goto VAR37;
    }
    VAR16 = FUN17(VAR4->VAR32, 0, VAR13, false, VAR15 == VAR27);
    if (!VAR16)
    {
        FUN4("", VAR10);
        FUN5(VAR9, 0, VAR31);
        return;
    }
    FUN12(VAR21, VAR38, VAR15 == VAR29, VAR16, VAR13);
    VAR23 = FUN18(VAR22, 1);
    VAR23->VAR33 = VAR16;
    VAR23->VAR34 = VAR13;
    VAR24 = FUN18(int, 1);
    *VAR24 = VAR10;
    FUN19(VAR19->VAR23, VAR24, VAR23);
VAR37:
    FUN5(VAR9, 0, VAR35);
    FUN5(VAR9, 1, VAR13);
    FUN5(VAR9, 2, ++VAR14);
    if (VAR8 > 3)
    {
        FUN5(VAR9, 3, VAR15);
    }
    FUN20(VAR10, VAR12, VAR13, VAR16);
}