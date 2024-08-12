static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10 = FUN2(VAR7, 0);
    uint64_t VAR11 = ((VAR12)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    unsigned int VAR13 = FUN2(VAR7, 3);
    unsigned int VAR14 = FUN2(VAR7, 4);
    unsigned int VAR15 = FUN2(VAR7, 5);
    unsigned int VAR16;
    int VAR17, VAR18, VAR19 = 0;
    VAR20 *VAR21 = NULL;
    VAR22 *VAR23 = NULL;
    switch (VAR13)
    {
    case VAR24:
    case VAR25:
        VAR16 = VAR26;
        break;
    case VAR27:
        VAR16 = VAR28;
        break;
    default:
        FUN3("", VAR13);
        FUN4(VAR9, 0, VAR29);
        return;
    }
    VAR21 = FUN5(VAR4, VAR11);
    if (VAR21)
    {
        VAR23 = FUN6(VAR4, VAR11, VAR10);
    }
    if (!VAR21 || !VAR23)
    {
        FUN4(VAR9, 0, VAR29);
        return;
    }
    if (!VAR14)
    {
        VAR17 = FUN7(VAR21, VAR10, false);
        if (VAR17 < 0)
        {
            FUN8("", -1, VAR10);
            FUN4(VAR9, 0, VAR30);
            return;
        }
        FUN8("", VAR17, VAR10);
        FUN4(VAR9, 0, VAR31);
        FUN4(VAR9, 1, 0);
        return;
    }
    VAR17 = FUN7(VAR21, VAR10, true);
    if (VAR17 >= VAR32 || VAR17 < 0)
    {
        FUN3("");
        FUN4(VAR9, 0, VAR30);
        return;
    }
    FUN8("", VAR17, VAR10);
    if (VAR16 == VAR26)
    {
        VAR19 = FUN9(VAR23);
    }
    else if (VAR16 == VAR28)
    {
        VAR19 = VAR23->VAR33;
    }
    if (!VAR19)
    {
        FUN3("", VAR16, VAR17);
        FUN4(VAR9, 0, -1);
        return;
    }
    if (VAR14 > VAR19)
    {
        VAR14 = VAR19;
    }
    if (VAR21->VAR34[VAR17].VAR35 && (VAR14 != VAR21->VAR34[VAR17].VAR35))
    {
        FUN3("", VAR17);
        FUN4(VAR9, 0, VAR30);
        return;
    }
    if (!VAR21->VAR34[VAR17].VAR35)
    {
        VAR18 = FUN10(VAR4->VAR36, 0, VAR14, false, VAR16 == VAR26);
        if (VAR18 < 0)
        {
            FUN3("", VAR17);
            FUN4(VAR9, 0, VAR30);
            return;
        }
        VAR21->VAR34[VAR17].VAR18 = VAR18;
        VAR21->VAR34[VAR17].VAR35 = VAR14;
        VAR21->VAR34[VAR17].VAR10 = VAR10;
    }
    FUN11(VAR23, VAR4->VAR37, VAR16 == VAR28, VAR21->VAR34[VAR17].VAR18, VAR14);
    FUN4(VAR9, 0, VAR31);
    FUN4(VAR9, 1, VAR14);
    FUN4(VAR9, 2, ++VAR15);
    FUN4(VAR9, 3, VAR16);
    FUN12(VAR13, VAR14);
}