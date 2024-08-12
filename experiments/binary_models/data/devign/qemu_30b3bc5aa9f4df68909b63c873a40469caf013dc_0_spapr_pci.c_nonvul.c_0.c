static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3());
    VAR7 *VAR8 = FUN4(VAR2);
    VAR9 *VAR10 = FUN5(VAR8);
    VAR11 *VAR12 = FUN6(VAR8);
    char *VAR13;
    int VAR14;
    VAR15 *VAR16;
    uint64_t VAR17 = 4096;
    VAR18 *VAR19;
    const unsigned VAR20 = VAR10->VAR21 ? VAR22 : 1;
    if (VAR10->VAR23 != (VAR24)-1)
    {
        VAR25 *VAR26 = FUN7(VAR6);
        VAR3 *VAR27 = NULL;
        VAR26->FUN8(VAR6, VAR10->VAR23, &VAR10->VAR28, &VAR10->VAR29, &VAR10->VAR30, &VAR10->VAR31, VAR20, VAR10->VAR32, &VAR27);
        if (VAR27)
        {
            FUN9(VAR4, VAR27);
            return;
        }
    }
    else
    {
        FUN10(VAR4, ""VAR23\"");
        return;
    }
    if (VAR10->VAR33 != 0)
    {
        if (VAR10->VAR34 > VAR35)
        {
            FUN10(VAR4, "" VAR36 "", VAR10->VAR34);
            return;
        }
        VAR10->VAR37 = VAR10->VAR31;
    }
    else if (VAR10->VAR34 > VAR35)
    {
        VAR10->VAR33 = VAR10->VAR34 - VAR35;
        VAR10->VAR31 = VAR10->VAR30 + VAR35;
        VAR10->VAR37 = VAR38 + VAR35;
        VAR10->VAR34 = VAR35;
    }
    if (FUN11(VAR6, VAR10->VAR28))
    {
        FUN10(VAR4, "");
        return;
    }
    if (VAR10->VAR39 != -1 && (VAR10->VAR39 >= VAR40 || !VAR41[VAR10->VAR39].VAR42))
    {
        FUN10(VAR4, "");
        return;
    }
    VAR10->VAR43 = FUN12("" VAR44, VAR10->VAR28);
    VAR13 = FUN12("", VAR10->VAR43);
    FUN13(&VAR10->VAR45, FUN14(VAR10), VAR13, VAR46);
    FUN15(VAR13);
    VAR13 = FUN12("", VAR10->VAR43);
    FUN16(&VAR10->VAR47, FUN14(VAR10), VAR13, &VAR10->VAR45, VAR38, VAR10->VAR34);
    FUN15(VAR13);
    FUN17(FUN18(), VAR10->VAR30, &VAR10->VAR47);
    if (VAR10->VAR33 != 0)
    {
        VAR13 = FUN12("", VAR10->VAR43);
        FUN16(&VAR10->VAR48, FUN14(VAR10), VAR13, &VAR10->VAR45, VAR10->VAR37, VAR10->VAR33);
        FUN15(VAR13);
        FUN17(FUN18(), VAR10->VAR31, &VAR10->VAR48);
    }
    VAR13 = FUN12("", VAR10->VAR43);
    FUN13(&VAR10->VAR49, FUN14(VAR10), VAR13, VAR50);
    FUN15(VAR13);
    VAR13 = FUN12("", VAR10->VAR43);
    FUN16(&VAR10->VAR51, FUN14(VAR10), VAR13, &VAR10->VAR49, 0, VAR50);
    FUN15(VAR13);
    FUN17(FUN18(), VAR10->VAR29, &VAR10->VAR51);
    VAR16 = FUN19(VAR2, NULL, VAR52, VAR53, VAR10, &VAR10->VAR45, &VAR10->VAR49, FUN20(0, 0), VAR54, VAR55);
    VAR12->VAR16 = VAR16;
    FUN21(FUN22(VAR12->VAR16), FUN23(VAR10), NULL);
    VAR13 = FUN12("", VAR10->VAR43);
    FUN13(&VAR10->VAR56, FUN14(VAR10), VAR13, VAR46);
    FUN15(VAR13);
    FUN24(&VAR10->VAR57, &VAR10->VAR56, VAR10->VAR43);
    if (FUN25())
    {
        VAR17 = FUN26();
    }
    FUN27(&VAR10->VAR58, FUN14(VAR10), &VAR59, VAR6, "", VAR17);
    FUN17(&VAR10->VAR56, VAR60, &VAR10->VAR58);
    FUN28(VAR16, VAR61, VAR10);
    FUN29(VAR16, VAR62);
    FUN30(&VAR6->VAR63, VAR10, VAR64);
    for (VAR14 = 0; VAR14 < VAR54; VAR14++)
    {
        uint32_t VAR65;
        VAR3 *VAR27 = NULL;
        VAR65 = FUN31(VAR6->VAR66, 1, true, false, &VAR27);
        if (VAR27)
        {
            FUN9(VAR4, VAR27);
            FUN32(VAR4, "");
            return;
        }
        VAR10->VAR67[VAR14].VAR65 = VAR65;
    }
    if (VAR10->VAR68)
    {
        for (VAR14 = 0; VAR14 < VAR69 * 8; VAR14++)
        {
            FUN33(FUN14(VAR12), VAR70, (VAR10->VAR23 << 16) | VAR14);
        }
    }
    if (((VAR10->VAR71 & FUN34()) == 0) && FUN25())
    {
        FUN35(""
                     "" VAR44 "",
                     FUN34(), VAR10->VAR71);
    }
    for (VAR14 = 0; VAR14 < VAR20; ++VAR14)
    {
        VAR19 = FUN36(FUN23(VAR10), VAR10->VAR32[VAR14]);
        if (!VAR19)
        {
            FUN10(VAR4, "", VAR14, VAR10->VAR43);
            return;
        }
        FUN17(&VAR10->VAR56, 0, FUN37(VAR19));
    }
    VAR10->VAR72 = FUN38(VAR73, VAR74, VAR75, VAR75);
}