static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, uint16_t VAR5, VAR6 **VAR7)
{
    int VAR8;
    char VAR9[VAR10 + 1];
    VAR11 *VAR12;
    uint16_t VAR13;
    uint16_t VAR14;
    uint32_t VAR15;
    bool VAR16 = false;
    bool VAR17 = false;
    uint32_t VAR18[3];
    char VAR19[sizeof(VAR20) + sizeof(VAR21)];
    const char *VAR22;
    if (VAR3 < sizeof(VAR15) + sizeof(VAR13))
    {
        VAR22 = "";
        goto VAR23;
    }
    if (FUN2(VAR2->VAR24, &VAR15, sizeof(VAR15), VAR7) < 0)
    {
        return -VAR25;
    }
    FUN3(&VAR15);
    VAR3 -= sizeof(VAR15);
    if (VAR15 > VAR3 - sizeof(VAR13) || (VAR3 - VAR15) % 2)
    {
        VAR22 = "";
        goto VAR23;
    }
    if (FUN2(VAR2->VAR24, VAR9, VAR15, VAR7) < 0)
    {
        return -VAR25;
    }
    VAR9[VAR15] = '';
    VAR3 -= VAR15;
    FUN4(VAR9);
    if (FUN2(VAR2->VAR24, &VAR13, sizeof(VAR13), VAR7) < 0)
    {
        return -VAR25;
    }
    FUN5(&VAR13);
    VAR3 -= sizeof(VAR13);
    FUN6(VAR13);
    if (VAR13 != VAR3 / sizeof(VAR14))
    {
        VAR22 = "";
        goto VAR23;
    }
    while (VAR13--)
    {
        if (FUN2(VAR2->VAR24, &VAR14, sizeof(VAR14), VAR7) < 0)
        {
            return -VAR25;
        }
        FUN5(&VAR14);
        VAR3 -= sizeof(VAR14);
        FUN7(VAR14, FUN8(VAR14));
        switch (VAR14)
        {
        case VAR26:
            VAR16 = true;
            break;
        case VAR27:
            VAR17 = true;
            break;
        }
    }
    assert(VAR3 == 0);
    VAR12 = FUN9(VAR9);
    if (!VAR12)
    {
        return FUN10(VAR2->VAR24, VAR28, VAR4, VAR7, "", VAR9);
    }
    if (VAR16)
    {
        VAR8 = FUN11(VAR2, VAR4, VAR26, VAR15, VAR9, VAR7);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    if (VAR12->VAR29)
    {
        size_t VAR30 = strlen(VAR12->VAR29);
        VAR8 = FUN11(VAR2, VAR4, VAR31, VAR30, VAR12->VAR29, VAR7);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    VAR18[0] = (VAR4 == VAR32 || VAR17) ? VAR33 : 1;
    VAR18[1] = 4096;
    VAR18[2] = FUN12(FUN13(VAR12->VAR34), VAR35);
    FUN14(VAR18[0], VAR18[1], VAR18[2]);
    FUN15(&VAR18[0]);
    FUN15(&VAR18[1]);
    FUN15(&VAR18[2]);
    VAR8 = FUN11(VAR2, VAR4, VAR27, sizeof(VAR18), VAR18, VAR7);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    FUN16(VAR12->VAR36, VAR12->VAR37 | VAR5);
    FUN17(VAR19, VAR12->VAR36);
    FUN18(VAR19 + 8, VAR12->VAR37 | VAR5);
    VAR8 = FUN11(VAR2, VAR4, VAR38, sizeof(VAR19), VAR19, VAR7);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    if (VAR4 == VAR32 && !VAR17)
    {
        return FUN10(VAR2->VAR24, VAR39, VAR4, VAR7, ""
                                                                                               "");
    }
    VAR8 = FUN19(VAR2->VAR24, VAR40, VAR4, VAR7);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    if (VAR4 == VAR41)
    {
        VAR2->VAR12 = VAR12;
        FUN20(&VAR2->VAR12->VAR42, VAR2, VAR43);
        FUN21(VAR2->VAR12);
        VAR8 = 1;
    }
    return VAR8;
VAR23:
    if (FUN22(VAR2->VAR24, VAR3, VAR7) < 0)
    {
        return -VAR25;
    }
    return FUN10(VAR2->VAR24, VAR44, VAR4, VAR7, "", VAR22);
}