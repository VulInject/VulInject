VAR1 *FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, uint32_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3->VAR10;
    VAR1 *VAR11;
    tb_page_addr_t VAR12, VAR13;
    target_ulong VAR14;
    VAR15 *VAR16;
    int VAR17, VAR18;
    int64_t VAR19;
    VAR12 = FUN2(VAR9, VAR4);
    if (VAR20 && !(VAR7 & VAR21))
    {
        VAR7 |= VAR22;
    }
    VAR11 = FUN3(VAR4);
    if (FUN4(!VAR11))
    {
    VAR23:
        FUN5(VAR3);
        VAR11 = FUN3(VAR4);
        assert(VAR11 != NULL);
    }
    VAR16 = VAR24.VAR25;
    VAR11->VAR26 = VAR16;
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR24.VAR27++;
    VAR19 = FUN6();
    FUN7(&VAR24);
    FUN8(VAR9, VAR11);
    FUN9(VAR11, VAR11->VAR4, VAR11->VAR26);
    VAR11->VAR28[0] = VAR29;
    VAR11->VAR28[1] = VAR29;
    VAR24.VAR30 = VAR11->VAR28;
    VAR24.VAR31 = VAR11->VAR32;
    VAR24.VAR33 = NULL;
    VAR24.VAR31 = NULL;
    VAR24.VAR33 = VAR11->VAR34;
    VAR24.VAR35++;
    VAR24.VAR36 += FUN6() - VAR19;
    VAR24.VAR37 -= FUN6();
    VAR17 = FUN10(&VAR24, VAR11);
    if (FUN4(VAR17 < 0))
    {
        goto VAR23;
    }
    VAR18 = FUN11(VAR11, (void *)VAR16 + VAR17);
    if (FUN4(VAR18 < 0))
    {
        goto VAR23;
    }
    VAR24.VAR37 += FUN6();
    VAR24.VAR38 += VAR11->VAR39;
    VAR24.VAR40 += VAR17;
    VAR24.VAR41 += VAR18;
    if (FUN12(VAR42) && FUN13(VAR11->VAR4))
    {
        FUN14("", VAR17);
        FUN15(VAR11->VAR26, VAR17);
        FUN14("");
        FUN16();
    }
    VAR24.VAR25 = (void *)FUN17((VAR43)VAR16 + VAR17 + VAR18, VAR44);
    assert(((VAR43)VAR11 & 3) == 0);
    VAR11->VAR45 = (VAR43)VAR11 | 2;
    VAR11->VAR46[0] = (VAR43)NULL;
    VAR11->VAR46[1] = (VAR43)NULL;
    if (VAR11->VAR28[0] != VAR29)
    {
        FUN18(VAR11, 0);
    }
    if (VAR11->VAR28[1] != VAR29)
    {
        FUN18(VAR11, 1);
    }
    VAR14 = (VAR4 + VAR11->VAR39 - 1) & VAR47;
    VAR13 = -1;
    if ((VAR4 & VAR47) != VAR14)
    {
        VAR13 = FUN2(VAR9, VAR14);
    }
    FUN19(VAR11, VAR12, VAR13);
    return VAR11;
}