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
    if (VAR20)
    {
        VAR7 |= VAR21;
    }
    VAR11 = FUN3(VAR4);
    if (!VAR11)
    {
        FUN4(VAR3);
        VAR11 = FUN3(VAR4);
        VAR22.VAR23.VAR24 = 1;
    }
    VAR16 = VAR22.VAR25;
    VAR11->VAR26 = VAR16;
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR22.VAR27++;
    VAR19 = FUN5();
    FUN6(&VAR22);
    FUN7(VAR9, VAR11);
    FUN8(VAR11, VAR11->VAR4, VAR11->VAR26);
    VAR11->VAR28[0] = 0xffff;
    VAR11->VAR28[1] = 0xffff;
    VAR22.VAR28 = VAR11->VAR28;
    VAR22.VAR29 = VAR11->VAR29;
    VAR22.VAR30 = NULL;
    VAR22.VAR29 = NULL;
    VAR22.VAR30 = VAR11->VAR30;
    VAR22.VAR31++;
    VAR22.VAR32 += FUN5() - VAR19;
    VAR22.VAR33 -= FUN5();
    VAR17 = FUN9(&VAR22, VAR16);
    VAR18 = FUN10(VAR11, (void *)VAR16 + VAR17);
    VAR22.VAR33 += FUN5();
    VAR22.VAR34 += VAR11->VAR35;
    VAR22.VAR36 += VAR17;
    VAR22.VAR37 += VAR18;
    if (FUN11(VAR38))
    {
        FUN12("", VAR17);
        FUN13(VAR11->VAR26, VAR17);
        FUN12("");
        FUN14();
    }
    VAR22.VAR25 = (void *)FUN15((VAR39)VAR16 + VAR17 + VAR18, VAR40);
    VAR14 = (VAR4 + VAR11->VAR35 - 1) & VAR41;
    VAR13 = -1;
    if ((VAR4 & VAR41) != VAR14)
    {
        VAR13 = FUN2(VAR9, VAR14);
    }
    FUN16(VAR11, VAR12, VAR13);
    return VAR11;
}