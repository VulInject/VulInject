static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10 = FUN2(VAR7, 0);
    uint64_t VAR11 = ((VAR12)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    unsigned int VAR13 = FUN2(VAR7, 3);
    unsigned int VAR14 = FUN2(VAR7, 4);
    unsigned int VAR15 = FUN2(VAR7, 5);
    unsigned int VAR16;
    unsigned int VAR17, VAR18 = 0, VAR19 = 0;
    VAR20 *VAR21 = NULL;
    VAR22 *VAR23 = NULL;
    VAR24 *VAR25;
    int *VAR26;
    switch (VAR13)
    {
    case VAR27:
    case VAR28:
        VAR16 = VAR29;
        break;
    case VAR30:
        VAR16 = VAR31;
        break;
    default:
        FUN3("", VAR13);
        FUN4(VAR9, 0, VAR32);
        return;
    }
    VAR21 = FUN5(VAR4, VAR11);
    if (VAR21)
    {
        VAR23 = FUN6(VAR4, VAR11, VAR10);
    }
    if (!VAR21 || !VAR23)
    {
        FUN4(VAR9, 0, VAR32);
        return;
    }
    if (!VAR14)
    {
        VAR25 = (VAR24 *)FUN7(VAR21->VAR25, &VAR10);
        if (!VAR25)
        {
            FUN8("", VAR10);
            FUN4(VAR9, 0, VAR33);
            return;
        }
        FUN9(VAR4->VAR34, VAR25->VAR35, VAR25->VAR19);
        if (FUN10(VAR23))
        {
            FUN11(VAR23, 0, false, 0, VAR19);
        }
        if (FUN12(VAR23))
        {
            FUN11(VAR23, 0, true, 0, VAR19);
        }
        FUN13(VAR21->VAR25, &VAR10);
        FUN8("", VAR10);
        FUN4(VAR9, 0, VAR36);
        FUN4(VAR9, 1, 0);
        return;
    }
    if (VAR16 == VAR29)
    {
        VAR18 = FUN14(VAR23);
    }
    else if (VAR16 == VAR31)
    {
        VAR18 = VAR23->VAR37;
    }
    if (!VAR18)
    {
        FUN3("", VAR16, VAR10);
        FUN4(VAR9, 0, -1);
        return;
    }
    if (VAR14 > VAR18)
    {
        FUN15(VAR10, VAR14, VAR18);
        VAR14 = VAR18;
        VAR17 = 0;
        goto VAR38;
    }
    VAR17 = FUN16(VAR4->VAR34, 0, VAR14, false, VAR16 == VAR29);
    if (!VAR17)
    {
        FUN3("", VAR10);
        FUN4(VAR9, 0, VAR33);
        return;
    }
    FUN11(VAR23, VAR39, VAR16 == VAR31, VAR17, VAR14);
    VAR25 = FUN17(VAR24, 1);
    VAR25->VAR35 = VAR17;
    VAR25->VAR19 = VAR14;
    VAR26 = FUN17(int, 1);
    *VAR26 = VAR10;
    FUN18(VAR21->VAR25, VAR26, VAR25);
VAR38:
    FUN4(VAR9, 0, VAR36);
    FUN4(VAR9, 1, VAR14);
    FUN4(VAR9, 2, ++VAR15);
    FUN4(VAR9, 3, VAR16);
    FUN19(VAR10, VAR13, VAR14, VAR17);
}