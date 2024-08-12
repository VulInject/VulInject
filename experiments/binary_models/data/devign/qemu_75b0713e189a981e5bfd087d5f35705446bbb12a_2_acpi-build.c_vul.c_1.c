void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10;
    unsigned VAR11, VAR12, VAR13, VAR14;
    AcpiPmInfo VAR15;
    AcpiMiscInfo VAR16;
    AcpiMcfgInfo VAR17;
    Range VAR18, VAR19;
    VAR20 *VAR21;
    size_t VAR22 = 0;
    VAR9 *VAR23 = VAR2->VAR24;
    AcpiSlicOem VAR25 = {.VAR26 = NULL, .VAR27 = NULL};
    FUN4(&VAR15);
    FUN5(&VAR16);
    FUN6(&VAR18, &VAR19);
    FUN7(&VAR25);
    VAR10 = FUN8(false, true, sizeof(VAR28));
    FUN9("");
    FUN10(VAR2->VAR29, VAR30, VAR23, 64, false);
    VAR11 = VAR23->VAR31;
    FUN11(VAR23, VAR2->VAR29);
    VAR12 = VAR23->VAR31;
    FUN12(VAR23, VAR2->VAR29, &VAR15, &VAR16, &VAR18, &VAR19, VAR4);
    VAR22 += VAR23->VAR31 - VAR12;
    VAR14 = VAR23->VAR31;
    FUN13(VAR10, VAR23);
    FUN14(VAR23, VAR2->VAR29, &VAR15, VAR11, VAR12, VAR25.VAR26, VAR25.VAR27);
    VAR22 += VAR23->VAR31 - VAR14;
    FUN13(VAR10, VAR23);
    FUN15(VAR23, VAR2->VAR29, VAR6);
    if (VAR16.VAR32)
    {
        FUN13(VAR10, VAR23);
        FUN16(VAR23, VAR2->VAR29);
    }
    if (VAR16.VAR33 != VAR34)
    {
        FUN13(VAR10, VAR23);
        FUN17(VAR23, VAR2->VAR29, VAR2->VAR35);
        if (VAR16.VAR33 == VAR36)
        {
            FUN13(VAR10, VAR23);
            FUN18(VAR23, VAR2->VAR29);
        }
    }
    if (VAR6->VAR37)
    {
        FUN13(VAR10, VAR23);
        FUN19(VAR23, VAR2->VAR29, VAR4);
    }
    if (FUN20(&VAR17))
    {
        FUN13(VAR10, VAR23);
        FUN21(VAR23, VAR2->VAR29, &VAR17);
    }
    if (FUN22())
    {
        IommuType VAR38 = FUN23();
        if (VAR38 == VAR39)
        {
            FUN13(VAR10, VAR23);
            FUN24(VAR23, VAR2->VAR29);
        }
        else if (VAR38 == VAR40)
        {
            FUN13(VAR10, VAR23);
            FUN25(VAR23, VAR2->VAR29);
        }
    }
    if (VAR6->VAR41.VAR42)
    {
        FUN26(VAR10, VAR23, VAR2->VAR29, VAR6->VAR41.VAR43, VAR4->VAR44);
    }
    for (VAR21 = FUN27(); VAR21; VAR21 = FUN28(VAR21))
    {
        unsigned VAR31 = FUN29(VAR21);
        FUN13(VAR10, VAR23);
        FUN30(VAR23, VAR21, VAR31);
    }
    VAR13 = VAR23->VAR31;
    FUN31(VAR23, VAR2->VAR29, VAR10, VAR25.VAR26, VAR25.VAR27);
    FUN32(VAR2->VAR45, VAR2->VAR29, VAR13);
    if (VAR8->VAR46)
    {
        int VAR47 = VAR8->VAR46 + VAR48 * VAR49;
        int VAR50 = FUN33(VAR23->VAR31 - VAR22 + VAR47, VAR51);
        if (VAR23->VAR31 > VAR50)
        {
            FUN34("");
        }
        FUN35(VAR23, VAR50);
    }
    else
    {
        if (VAR23->VAR31 > VAR52 / 2)
        {
            FUN34("");
            FUN34("");
            FUN34(""
                         "");
        }
        FUN36(VAR23, VAR52);
    }
    FUN36(VAR2->VAR29->VAR53, VAR51);
    FUN37(VAR10, true);
}