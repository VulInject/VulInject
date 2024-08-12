static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 **VAR5)
{
    int VAR6;
    char VAR7[VAR8 + 1];
    VAR9 *VAR10;
    uint16_t VAR11;
    uint16_t VAR12;
    uint32_t VAR13;
    bool VAR14 = false;
    bool VAR15 = false;
    uint32_t VAR16[3];
    char VAR17[sizeof(VAR18) + sizeof(VAR19)];
    const char *VAR20;
    if (VAR2->VAR21 < sizeof(VAR13) + sizeof(VAR11))
    {
        VAR20 = "";
        goto VAR22;
    }
    if (FUN2(VAR2->VAR23, &VAR13, sizeof(VAR13), VAR5) < 0)
    {
        return -VAR24;
    }
    FUN3(&VAR13);
    VAR2->VAR21 -= sizeof(VAR13);
    if (VAR13 > VAR2->VAR21 - sizeof(VAR11) || (VAR2->VAR21 - VAR13) % 2)
    {
        VAR20 = "";
        goto VAR22;
    }
    if (VAR13 >= sizeof(VAR7))
    {
        VAR20 = "";
        goto VAR22;
    }
    if (FUN2(VAR2->VAR23, VAR7, VAR13, VAR5) < 0)
    {
        return -VAR24;
    }
    VAR7[VAR13] = '';
    VAR2->VAR21 -= VAR13;
    FUN4(VAR7);
    if (FUN2(VAR2->VAR23, &VAR11, sizeof(VAR11), VAR5) < 0)
    {
        return -VAR24;
    }
    FUN5(&VAR11);
    VAR2->VAR21 -= sizeof(VAR11);
    FUN6(VAR11);
    if (VAR11 != VAR2->VAR21 / sizeof(VAR12))
    {
        VAR20 = "";
        goto VAR22;
    }
    while (VAR11--)
    {
        if (FUN2(VAR2->VAR23, &VAR12, sizeof(VAR12), VAR5) < 0)
        {
            return -VAR24;
        }
        FUN5(&VAR12);
        VAR2->VAR21 -= sizeof(VAR12);
        FUN7(VAR12, FUN8(VAR12));
        switch (VAR12)
        {
        case VAR25:
            VAR14 = true;
            break;
        case VAR26:
            VAR15 = true;
            break;
        }
    }
    assert(VAR2->VAR21 == 0);
    VAR10 = FUN9(VAR7);
    if (!VAR10)
    {
        return FUN10(VAR2, VAR27, VAR5, "", VAR7);
    }
    if (VAR14)
    {
        VAR6 = FUN11(VAR2, VAR25, VAR13, VAR7, VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
    }
    if (VAR10->VAR28)
    {
        size_t VAR29 = strlen(VAR10->VAR28);
        VAR6 = FUN11(VAR2, VAR30, VAR29, VAR10->VAR28, VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
    }
    VAR16[0] = (VAR2->VAR31 == VAR32 || VAR15) ? VAR33 : 1;
    VAR16[1] = 4096;
    VAR16[2] = FUN12(FUN13(VAR10->VAR34), VAR35);
    FUN14(VAR16[0], VAR16[1], VAR16[2]);
    FUN15(&VAR16[0]);
    FUN15(&VAR16[1]);
    FUN15(&VAR16[2]);
    VAR6 = FUN11(VAR2, VAR26, sizeof(VAR16), VAR16, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    FUN16(VAR10->VAR36, VAR10->VAR37 | VAR3);
    FUN17(VAR17, VAR10->VAR36);
    FUN18(VAR17 + 8, VAR10->VAR37 | VAR3);
    VAR6 = FUN11(VAR2, VAR38, sizeof(VAR17), VAR17, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    if (VAR2->VAR31 == VAR32 && !VAR15)
    {
        return FUN10(VAR2, VAR39, VAR5, ""
                                                                                     "");
    }
    VAR6 = FUN19(VAR2, VAR40, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    if (VAR2->VAR31 == VAR41)
    {
        VAR2->VAR10 = VAR10;
        FUN20(&VAR2->VAR10->VAR42, VAR2, VAR43);
        FUN21(VAR2->VAR10);
        VAR6 = 1;
    }
    return VAR6;
VAR22:
    if (FUN22(VAR2->VAR23, VAR2->VAR21, VAR5) < 0)
    {
        return -VAR24;
    }
    return FUN10(VAR2, VAR44, VAR5, "", VAR20);
}