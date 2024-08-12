void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    unsigned VAR7, VAR8, VAR9, VAR10;
    AcpiCpuInfo VAR11;
    AcpiPmInfo VAR12;
    AcpiMiscInfo VAR13;
    AcpiMcfgInfo VAR14;
    PcPciInfo VAR15;
    VAR16 *VAR17;
    size_t VAR18 = 0;
    FUN2(&VAR11);
    FUN3(&VAR12);
    FUN4(&VAR13);
    FUN5(&VAR13);
    FUN6(&VAR15);
    VAR6 = FUN7(false, true, sizeof(VAR19));
    FUN8(3, "");
    FUN9(VAR4->VAR20, VAR21, 64, false);
    VAR7 = VAR4->VAR22->VAR23;
    FUN10(VAR4->VAR22, VAR4->VAR20, VAR2);
    VAR9 = VAR4->VAR22->VAR23;
    FUN11(VAR4->VAR22, VAR4->VAR20, &VAR13);
    VAR18 += VAR4->VAR22->VAR23 - VAR9;
    FUN12(VAR6, VAR4->VAR22);
    FUN13(VAR4->VAR22, VAR4->VAR20, &VAR12, VAR7, VAR9);
    VAR8 = VAR4->VAR22->VAR23;
    FUN12(VAR6, VAR4->VAR22);
    FUN14(VAR4->VAR22, VAR4->VAR20, &VAR11, &VAR12, &VAR13, &VAR15, VAR2);
    VAR18 += VAR4->VAR22->VAR23 - VAR8;
    FUN12(VAR6, VAR4->VAR22);
    FUN15(VAR4->VAR22, VAR4->VAR20, &VAR11, VAR2);
    if (VAR13.VAR24)
    {
        FUN12(VAR6, VAR4->VAR22);
        FUN16(VAR4->VAR22, VAR4->VAR20);
    }
    if (VAR2->VAR25)
    {
        FUN12(VAR6, VAR4->VAR22);
        FUN17(VAR4->VAR22, VAR4->VAR20, &VAR11, VAR2);
    }
    if (FUN18(&VAR14))
    {
        FUN12(VAR6, VAR4->VAR22);
        FUN19(VAR4->VAR22, VAR4->VAR20, &VAR14);
    }
    for (VAR17 = FUN20(); VAR17; VAR17 = FUN21(VAR17))
    {
        unsigned VAR23 = FUN22(VAR17);
        FUN12(VAR6, VAR4->VAR22);
        FUN23(VAR4->VAR22, VAR17, VAR23);
    }
    VAR10 = VAR4->VAR22->VAR23;
    FUN24(VAR4->VAR22, VAR4->VAR20, VAR6);
    FUN25(VAR4->VAR26, VAR4->VAR20, VAR10);
    if (VAR2->VAR27)
    {
        int VAR28 = VAR2->VAR27 + VAR29 * VAR30;
        int VAR31 = FUN26(VAR4->VAR22->VAR23 - VAR18 + VAR28, VAR32);
        if (VAR4->VAR22->VAR23 > VAR31)
        {
            FUN27("");
        }
        FUN28(VAR4->VAR22, VAR31);
    }
    else
    {
        if (VAR4->VAR22->VAR23 > VAR33)
        {
            FUN27("");
            FUN27("");
            FUN29(1);
        }
        FUN28(VAR4->VAR22, VAR33);
    }
    FUN30(VAR4->VAR20, VAR32);
    FUN31(VAR6, true);
}