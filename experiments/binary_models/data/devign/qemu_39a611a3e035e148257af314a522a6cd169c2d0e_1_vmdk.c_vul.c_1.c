static int FUN1(const char *VAR1, int64_t VAR2, bool VAR3, bool VAR4, bool VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9;
    VAR10 *VAR11 = NULL;
    VMDK4Header VAR12;
    VAR6 *VAR13;
    uint32_t VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21 = NULL;
    int VAR22;
    VAR8 = FUN2(VAR1, NULL, &VAR13);
    if (VAR8 < 0)
    {
        FUN3(VAR7, VAR13);
        goto VAR23;
    }
    VAR8 = FUN4(&VAR11, VAR1, NULL, NULL, VAR24, &VAR13);
    if (VAR8 < 0)
    {
        FUN3(VAR7, VAR13);
        goto VAR23;
    }
    if (VAR3)
    {
        VAR8 = FUN5(VAR11, VAR2);
        if (VAR8 < 0)
        {
            FUN6(VAR7, "");
        }
        goto VAR23;
    }
    VAR15 = FUN7(VAR25);
    memset(&VAR12, 0, sizeof(VAR12));
    VAR12.VAR26 = VAR5 ? 2 : 1;
    VAR12.VAR27 = VAR28 | VAR29 | (VAR4 ? VAR30 | VAR31 : 0) | (VAR5 ? VAR32 : 0);
    VAR12.VAR33 = VAR4 ? VAR34 : 0;
    VAR12.VAR35 = VAR2 / VAR36;
    VAR12.VAR37 = 128;
    VAR12.VAR38 = VAR36;
    VAR16 = FUN8(VAR2 / VAR36, VAR12.VAR37);
    VAR18 = FUN8(VAR12.VAR38 * sizeof(VAR20), VAR36);
    VAR19 = FUN8(VAR16, VAR12.VAR38);
    VAR17 = FUN8(VAR19 * sizeof(VAR20), VAR36);
    VAR12.VAR39 = 1;
    VAR12.VAR40 = 20;
    VAR12.VAR41 = VAR12.VAR39 + VAR12.VAR40;
    VAR12.VAR42 = VAR12.VAR41 + VAR17 + (VAR18 * VAR19);
    VAR12.VAR43 = FUN9(VAR12.VAR42 + VAR17 + (VAR18 * VAR19), VAR12.VAR37);
    VAR12.VAR26 = FUN10(VAR12.VAR26);
    VAR12.VAR27 = FUN10(VAR12.VAR27);
    VAR12.VAR35 = FUN11(VAR12.VAR35);
    VAR12.VAR37 = FUN11(VAR12.VAR37);
    VAR12.VAR38 = FUN10(VAR12.VAR38);
    VAR12.VAR39 = FUN11(VAR12.VAR39);
    VAR12.VAR40 = FUN11(VAR12.VAR40);
    VAR12.VAR41 = FUN11(VAR12.VAR41);
    VAR12.VAR42 = FUN11(VAR12.VAR42);
    VAR12.VAR43 = FUN11(VAR12.VAR43);
    VAR12.VAR33 = FUN12(VAR12.VAR33);
    VAR12.VAR44[0] = 0xa;
    VAR12.VAR44[1] = 0x20;
    VAR12.VAR44[2] = 0xd;
    VAR12.VAR44[3] = 0xa;
    VAR8 = FUN13(VAR11, 0, &VAR15, sizeof(VAR15));
    if (VAR8 < 0)
    {
        FUN14(VAR7, VAR45);
        goto VAR23;
    }
    VAR8 = FUN13(VAR11, sizeof(VAR15), &VAR12, sizeof(VAR12));
    if (VAR8 < 0)
    {
        FUN14(VAR7, VAR45);
        goto VAR23;
    }
    VAR8 = FUN5(VAR11, FUN15(VAR12.VAR43) << 9);
    if (VAR8 < 0)
    {
        FUN6(VAR7, "");
        goto VAR23;
    }
    VAR22 = VAR17 * VAR36;
    VAR21 = FUN16(VAR22);
    for (VAR9 = 0, VAR14 = FUN15(VAR12.VAR41) + VAR17; VAR9 < VAR19; VAR9++, VAR14 += VAR18)
    {
        VAR21[VAR9] = FUN10(VAR14);
    }
    VAR8 = FUN13(VAR11, FUN15(VAR12.VAR41) * VAR36, VAR21, VAR22);
    if (VAR8 < 0)
    {
        FUN14(VAR7, VAR45);
        goto VAR23;
    }
    for (VAR9 = 0, VAR14 = FUN15(VAR12.VAR42) + VAR17; VAR9 < VAR19; VAR9++, VAR14 += VAR18)
    {
        VAR21[VAR9] = FUN10(VAR14);
    }
    VAR8 = FUN13(VAR11, FUN15(VAR12.VAR42) * VAR36, VAR21, VAR22);
    if (VAR8 < 0)
    {
        FUN14(VAR7, VAR45);
        goto VAR23;
    }
    VAR8 = 0;
VAR23:
    if (VAR11)
    {
        FUN17(VAR11);
    }
    FUN18(VAR21);
    return VAR8;
}