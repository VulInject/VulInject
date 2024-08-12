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
    VAR28 *VAR29;
    FUN4(&VAR15);
    FUN5(&VAR16);
    FUN6(&VAR18, &VAR19);
    FUN7(&VAR25);
    VAR10 = FUN8(false, true, sizeof(VAR30));
    FUN9("");
    FUN10(VAR2->VAR31, VAR32, VAR23, 64, false);
    VAR11 = VAR23->VAR33;
    FUN11(VAR23, VAR2->VAR31);
    VAR12 = VAR23->VAR33;
    FUN12(VAR23, VAR2->VAR31, &VAR15, &VAR16, &VAR18, &VAR19, VAR4);
    VAR22 += VAR23->VAR33 - VAR12;
    VAR14 = VAR23->VAR33;
    FUN13(VAR10, VAR23);
    FUN14(VAR23, VAR2->VAR31, &VAR15, VAR11, VAR12, VAR25.VAR26, VAR25.VAR27);
    VAR22 += VAR23->VAR33 - VAR14;
    FUN13(VAR10, VAR23);
    FUN15(VAR23, VAR2->VAR31, VAR6);
    VAR29 = FUN16();
    if (VAR29)
    {
        FUN13(VAR10, VAR23);
        FUN17(FUN18(VAR29), VAR23, VAR2->VAR34, VAR2->VAR31);
    }
    if (VAR16.VAR35)
    {
        FUN13(VAR10, VAR23);
        FUN19(VAR23, VAR2->VAR31);
    }
    if (VAR16.VAR36 != VAR37)
    {
        FUN13(VAR10, VAR23);
        FUN20(VAR23, VAR2->VAR31, VAR2->VAR38);
        if (VAR16.VAR36 == VAR39)
        {
            FUN13(VAR10, VAR23);
            FUN21(VAR23, VAR2->VAR31);
        }
    }
    if (VAR6->VAR40)
    {
        FUN13(VAR10, VAR23);
        FUN22(VAR23, VAR2->VAR31, VAR4);
        if (VAR41)
        {
            FUN13(VAR10, VAR23);
            FUN23(VAR23, VAR2->VAR31);
        }
    }
    if (FUN24(&VAR17))
    {
        FUN13(VAR10, VAR23);
        FUN25(VAR23, VAR2->VAR31, &VAR17);
    }
    if (FUN26())
    {
        IommuType VAR42 = FUN27();
        if (VAR42 == VAR43)
        {
            FUN13(VAR10, VAR23);
            FUN28(VAR23, VAR2->VAR31);
        }
        else if (VAR42 == VAR44)
        {
            FUN13(VAR10, VAR23);
            FUN29(VAR23, VAR2->VAR31);
        }
    }
    if (VAR6->VAR45.VAR46)
    {
        FUN30(VAR10, VAR23, VAR2->VAR31, &VAR6->VAR45, VAR4->VAR47);
    }
    for (VAR21 = FUN31(); VAR21; VAR21 = FUN32(VAR21))
    {
        unsigned VAR33 = FUN33(VAR21);
        FUN13(VAR10, VAR23);
        FUN34(VAR23, VAR21, VAR33);
    }
    VAR13 = VAR23->VAR33;
    FUN35(VAR23, VAR2->VAR31, VAR10, VAR25.VAR26, VAR25.VAR27);
    FUN36(VAR2->VAR48, VAR2->VAR31, VAR13);
    if (VAR8->VAR49)
    {
        int VAR50 = VAR8->VAR49 + VAR51 * VAR6->VAR52;
        int VAR53 = FUN37(VAR23->VAR33 - VAR22 + VAR50, VAR54);
        if (VAR23->VAR33 > VAR53)
        {
            FUN38("");
        }
        FUN39(VAR23, VAR53);
    }
    else
    {
        if (VAR23->VAR33 > VAR55 / 2)
        {
            FUN38("");
            FUN38("");
            FUN38(""
                        "");
        }
        FUN40(VAR23, VAR55);
    }
    FUN40(VAR2->VAR31->VAR56, VAR54);
    FUN41(VAR10, true);
}