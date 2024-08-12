void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3());
    VAR5 *VAR6 = FUN4(VAR4);
    VAR7 *VAR8;
    unsigned VAR9, VAR10, VAR11, VAR12;
    AcpiCpuInfo VAR13;
    AcpiPmInfo VAR14;
    AcpiMiscInfo VAR15;
    AcpiMcfgInfo VAR16;
    PcPciInfo VAR17;
    VAR18 *VAR19;
    size_t VAR20 = 0;
    VAR7 *VAR21 = VAR2->VAR22;
    AcpiSlicOem VAR23 = {.VAR24 = NULL, .VAR25 = NULL};
    FUN5(&VAR13);
    FUN6(&VAR14);
    FUN7(&VAR15);
    FUN8(&VAR17);
    FUN9(&VAR23);
    VAR8 = FUN10(false, true, sizeof(VAR26));
    FUN11("");
    FUN12(VAR2->VAR27, VAR28, 64, false);
    VAR9 = VAR21->VAR29;
    FUN13(VAR21, VAR2->VAR27);
    VAR10 = VAR21->VAR29;
    FUN14(VAR21, VAR2->VAR27, &VAR13, &VAR14, &VAR15, &VAR17);
    VAR20 += VAR21->VAR29 - VAR10;
    VAR12 = VAR21->VAR29;
    FUN15(VAR8, VAR21);
    FUN16(VAR21, VAR2->VAR27, &VAR14, VAR9, VAR10, VAR23.VAR24, VAR23.VAR25);
    VAR20 += VAR21->VAR29 - VAR12;
    FUN15(VAR8, VAR21);
    FUN17(VAR21, VAR2->VAR27, &VAR13);
    if (VAR15.VAR30)
    {
        FUN15(VAR8, VAR21);
        FUN18(VAR21, VAR2->VAR27);
    }
    if (VAR15.VAR31 != VAR32)
    {
        FUN15(VAR8, VAR21);
        FUN19(VAR21, VAR2->VAR27, VAR2->VAR33);
        if (VAR15.VAR31 == VAR34)
        {
            FUN15(VAR8, VAR21);
            FUN20(VAR21, VAR2->VAR27);
        }
    }
    if (VAR4->VAR35)
    {
        FUN15(VAR8, VAR21);
        FUN21(VAR21, VAR2->VAR27);
    }
    if (FUN22(&VAR16))
    {
        FUN15(VAR8, VAR21);
        FUN23(VAR21, VAR2->VAR27, &VAR16);
    }
    if (FUN24())
    {
        FUN15(VAR8, VAR21);
        FUN25(VAR21, VAR2->VAR27);
    }
    if (VAR4->VAR36.VAR37)
    {
        FUN26(VAR8, VAR21, VAR2->VAR27);
    }
    for (VAR19 = FUN27(); VAR19; VAR19 = FUN28(VAR19))
    {
        unsigned VAR29 = FUN29(VAR19);
        FUN15(VAR8, VAR21);
        FUN30(VAR21, VAR19, VAR29);
    }
    VAR11 = VAR21->VAR29;
    FUN31(VAR21, VAR2->VAR27, VAR8, VAR23.VAR24, VAR23.VAR25);
    FUN32(VAR2->VAR38, VAR2->VAR27, VAR11);
    if (VAR6->VAR39)
    {
        int VAR40 = VAR6->VAR39 + VAR41 * VAR42;
        int VAR43 = FUN33(VAR21->VAR29 - VAR20 + VAR40, VAR44);
        if (VAR21->VAR29 > VAR43)
        {
            FUN34("");
        }
        FUN35(VAR21, VAR43);
    }
    else
    {
        if (VAR21->VAR29 > VAR45 / 2)
        {
            FUN34("");
            FUN34("");
            FUN34(""
                         "");
        }
        FUN36(VAR21, VAR45);
    }
    FUN36(VAR2->VAR27, VAR44);
    FUN37(VAR8, true);
}