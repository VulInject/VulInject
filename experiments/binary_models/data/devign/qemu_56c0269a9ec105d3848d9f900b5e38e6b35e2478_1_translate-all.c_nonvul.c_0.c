VAR1 *FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, int VAR6, int VAR7)
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
        VAR24.VAR25.VAR26 = 1;
    }
    VAR16 = VAR24.VAR27;
    VAR11->VAR28 = VAR16;
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR24.VAR29++;
    VAR19 = FUN6();
    FUN7(&VAR24);
    FUN8(VAR9, VAR11);
    FUN9(VAR11, VAR11->VAR4, VAR11->VAR28);
    VAR11->VAR30[0] = 0xffff;
    VAR11->VAR30[1] = 0xffff;
    VAR24.VAR30 = VAR11->VAR30;
    VAR24.VAR31 = VAR11->VAR31;
    VAR24.VAR32 = NULL;
    VAR24.VAR31 = NULL;
    VAR24.VAR32 = VAR11->VAR32;
    VAR24.VAR33++;
    VAR24.VAR34 += FUN6() - VAR19;
    VAR24.VAR35 -= FUN6();
    VAR17 = FUN10(&VAR24, VAR16);
    if (FUN4(VAR17 < 0))
    {
        goto VAR23;
    }
    VAR18 = FUN11(VAR11, (void *)VAR16 + VAR17);
    if (FUN4(VAR18 < 0))
    {
        goto VAR23;
    }
    VAR24.VAR35 += FUN6();
    VAR24.VAR36 += VAR11->VAR37;
    VAR24.VAR38 += VAR17;
    VAR24.VAR39 += VAR18;
    if (FUN12(VAR40))
    {
        FUN13("", VAR17);
        FUN14(VAR11->VAR28, VAR17);
        FUN13("");
        FUN15();
    }
    VAR24.VAR27 = (void *)FUN16((VAR41)VAR16 + VAR17 + VAR18, VAR42);
    VAR14 = (VAR4 + VAR11->VAR37 - 1) & VAR43;
    VAR13 = -1;
    if ((VAR4 & VAR43) != VAR14)
    {
        VAR13 = FUN2(VAR9, VAR14);
    }
    FUN17(VAR11, VAR12, VAR13);
    return VAR11;
}