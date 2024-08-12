int FUN1(VAR1 *VAR2, uint32_t VAR3, const struct VAR4 *VAR5, int VAR6, uint8_t VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = (VAR10 *)VAR9;
    VAR12 *VAR13 = FUN3(VAR9, VAR3);
    VAR14 *VAR15 = FUN4(VAR13);
    char *VAR16;
    size_t VAR17 = FUN5(VAR5, VAR6);
    char *VAR18;
    uint16_t VAR19 = 0;
    uint16_t VAR20 = 0;
    size_t VAR21;
    VAR22 *VAR23[VAR24 + 1];
    hwaddr VAR25;
    uint16_t VAR26;
    int VAR27;
    int VAR28;
    if (!VAR15)
    {
        return -VAR29;
    }
    VAR18 = FUN6(VAR15, false);
    if (!VAR18)
    {
        VAR28 = -VAR30;
        goto VAR31;
    }
    FUN7(VAR23, VAR24, VAR18, FUN8(VAR15));
    if (!VAR23[VAR32] || !VAR23[VAR33])
    {
        VAR28 = -VAR34;
        goto VAR31;
    }
    VAR25 = FUN9(VAR23[VAR32]);
    VAR26 = FUN10(VAR23[VAR33]);
    if (VAR17 > VAR26)
    {
        VAR28 = -VAR35;
        goto VAR31;
    }
    if (VAR7)
    {
        VAR19 |= VAR36;
    }
    VAR21 = FUN11(sizeof(VAR37)) + FUN11(sizeof(VAR37)) + FUN11(sizeof(VAR38)) + FUN11(sizeof(VAR37)) + FUN11(sizeof(VAR37));
    if (VAR21 > FUN12(VAR15))
    {
        VAR28 = -VAR35;
        goto VAR31;
    }
    VAR16 = FUN13(VAR17);
    if (!VAR16)
    {
        VAR28 = -VAR39;
        goto VAR31;
    }
    FUN14(VAR5, VAR6, 0, VAR16, VAR17);
    FUN15(VAR11, VAR25, VAR16, VAR17);
    FUN16(VAR16);
    VAR27 = 0;
    FUN17(VAR18, &VAR27, VAR40, VAR19);
    FUN17(VAR18, &VAR27, VAR41, VAR20);
    FUN18(VAR18, &VAR27, VAR32, VAR25);
    FUN17(VAR18, &VAR27, VAR33, VAR26);
    FUN17(VAR18, &VAR27, VAR42, VAR17);
    VAR28 = FUN19(VAR15, VAR21);
VAR31:
    if (FUN20(VAR13, VAR28))
    {
        FUN21(VAR9, FUN22(VAR3 - 1));
    }
    return VAR28;
}