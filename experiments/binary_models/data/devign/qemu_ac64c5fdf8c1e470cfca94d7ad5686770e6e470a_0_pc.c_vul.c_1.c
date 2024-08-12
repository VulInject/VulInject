void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, bool VAR7, bool VAR8, uint32_t VAR9)
{
    int VAR10;
    VAR11 *VAR12[VAR13];
    VAR14 *VAR15 = NULL;
    int VAR16 = 0;
    qemu_irq VAR17 = NULL;
    qemu_irq VAR18 = NULL;
    VAR3 *VAR19;
    VAR5 *VAR20, *VAR21, *VAR22, *VAR23 = NULL;
    VAR24 *VAR25 = FUN2(VAR24, 1);
    VAR24 *VAR26 = FUN2(VAR24, 1);
    FUN3(VAR25, NULL, &VAR27, NULL, "", 1);
    FUN4(VAR2->VAR28, 0x80, VAR25);
    FUN3(VAR26, NULL, &VAR29, NULL, "", 1);
    FUN4(VAR2->VAR28, 0xf0, VAR26);
    if (!VAR30 && (!FUN5() || FUN6()))
    {
        VAR15 = FUN7(NULL, VAR31);
        if (VAR15)
        {
            uint8_t VAR32 = FUN8(FUN9(VAR15), VAR33, NULL);
            if (!VAR32)
            {
                FUN10(VAR15, VAR33, VAR9);
            }
            FUN11(VAR15);
            FUN12(FUN13(VAR15), 0, VAR34);
            for (VAR10 = 0; VAR10 < VAR35; VAR10++)
            {
                FUN14(FUN13(VAR15), VAR10, VAR4[VAR10]);
            }
            VAR16 = -1;
            VAR17 = FUN15(VAR15, VAR36);
            VAR18 = FUN15(VAR15, VAR37);
        }
    }
    *VAR6 = FUN16(VAR2, 2000, VAR18);
    FUN17(VAR38, *VAR6);
    if (!FUN18())
    {
        if (FUN19())
        {
            VAR23 = FUN20(VAR2, 0x40);
        }
        else
        {
            VAR23 = FUN21(VAR2, 0x40, VAR16, VAR17);
        }
        if (VAR15)
        {
            FUN22(VAR15, 0, FUN15(FUN23(VAR23), 0));
        }
        FUN24(VAR2, VAR23);
    }
    FUN25(VAR2, VAR39);
    FUN26(VAR2, VAR40);
    VAR19 = FUN27(VAR41, VAR42, 2);
    VAR20 = FUN28(VAR2, "");
    FUN29(VAR20, VAR19[0]);
    if (!VAR8)
    {
        FUN30(VAR2);
        VAR22 = FUN31(VAR2, "");
    }
    else
    {
        VAR22 = NULL;
    }
    if (VAR22)
    {
        VAR14 *VAR43 = FUN23(VAR22);
        FUN32(VAR43, "", VAR20);
        FUN11(VAR43);
    }
    VAR21 = FUN28(VAR2, "");
    FUN33(VAR21, VAR19[1]);
    FUN34(VAR2, 0);
    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
    {
        VAR12[VAR10] = FUN35(VAR44, 0, VAR10);
        VAR7 |= !!VAR12[VAR10];
    }
    if (VAR7)
    {
        FUN36(VAR2, VAR12);
    }