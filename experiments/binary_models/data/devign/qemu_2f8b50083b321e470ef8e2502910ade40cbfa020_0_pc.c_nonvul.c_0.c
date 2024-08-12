VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 **VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11;
    VAR4 *VAR12, *VAR13;
    VAR4 *VAR14, *VAR15;
    VAR1 *VAR16;
    VAR17 *VAR18 = FUN2(VAR3);
    assert(VAR18->VAR19 == VAR3->VAR20 + VAR3->VAR21);
    VAR10 = (VAR18->VAR22 != NULL);
    VAR12 = FUN3(sizeof(*VAR12));
    FUN4(VAR12, NULL, "", VAR18->VAR19);
    *VAR7 = VAR12;
    VAR14 = FUN3(sizeof(*VAR14));
    FUN5(VAR14, NULL, "", VAR12, 0, VAR3->VAR20);
    FUN6(VAR5, 0, VAR14);
    FUN7(0, VAR3->VAR20, VAR23);
    if (VAR3->VAR21 > 0)
    {
        VAR15 = FUN3(sizeof(*VAR15));
        FUN5(VAR15, NULL, "", VAR12, VAR3->VAR20, VAR3->VAR21);
        FUN6(VAR5, 0x100000000ULL, VAR15);
        FUN7(0x100000000ULL, VAR3->VAR21, VAR23);
    }
    if (!VAR9->VAR24 && (VAR18->VAR25 || (VAR18->VAR26 > VAR18->VAR19)))
    {
        VAR27 *VAR28 = FUN8(VAR18);
        FUN9(""-VAR29 ''\"", VAR28->VAR30);
        FUN10(VAR31);
    }
    if (VAR9->VAR24 && (VAR18->VAR19 < VAR18->VAR26))
    {
        ram_addr_t VAR32 = VAR18->VAR26 - VAR18->VAR19;
        if (VAR18->VAR25 > VAR33)
        {
            FUN9("" VAR34, VAR18->VAR25);
            FUN10(VAR31);
        }
        if (FUN11(VAR18->VAR26, VAR35) != VAR18->VAR26)
        {
            FUN9(""
                         "",
                         VAR35);
            FUN10(VAR31);
        }
        VAR3->VAR36.VAR37 = FUN12(0x100000000ULL + VAR3->VAR21, 1ULL << 30);
        if (VAR3->VAR38)
        {
            VAR32 += (1ULL << 30) * VAR18->VAR25;
        }
        if ((VAR3->VAR36.VAR37 + VAR32) < VAR32)
        {
            FUN9("" VAR39, VAR18->VAR26);
            FUN10(VAR31);
        }
        FUN13(&VAR3->VAR36.VAR40, FUN14(VAR3), "", VAR32);
        FUN6(VAR5, VAR3->VAR36.VAR37, &VAR3->VAR36.VAR40);
    }
    FUN15(VAR6, VAR9->VAR41);
    VAR13 = FUN3(sizeof(*VAR13));
    FUN16(VAR13, NULL, "", VAR42, &VAR43);
    FUN17(VAR13);
    FUN18(VAR6, VAR44, VAR13, 1);
    VAR16 = FUN19();
    FUN20(VAR16);
    if (VAR9->VAR24 && VAR3->VAR36.VAR37)
    {
        VAR45 *VAR46 = FUN3(sizeof(*VAR46));
        VAR47 *VAR48 = FUN21(VAR3);
        uint64_t VAR49 = VAR3->VAR36.VAR37;
        if (!VAR48->VAR50)
        {
            VAR49 += FUN22(&VAR3->VAR36.VAR40);
        }
        *VAR46 = FUN23(FUN12(VAR49, 0x1ULL << 30));
        FUN24(VAR16, "", VAR46, sizeof(*VAR46));
    }
    if (VAR10)
    {
        FUN25(VAR3, VAR16);
    }
    for (VAR11 = 0; VAR11 < VAR51; VAR11++)
    {
        FUN26(VAR52[VAR11].VAR30, VAR52[VAR11].VAR53);
    }
    VAR9->VAR16 = VAR16;
    return VAR16;
}