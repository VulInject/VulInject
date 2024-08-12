static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6 = 0;
    VTD_IR_MSIAddress VAR7;
    uint16_t VAR8;
    VTDIrq VAR9 = {0};
    assert(VAR4 && VAR5);
    if (!VAR2 || !VAR2->VAR10)
    {
        goto VAR11;
    }
    if (VAR4->VAR12 & VAR13)
    {
        FUN2(VAR14, ""
                             "" VAR15,
                    (VAR16)((VAR4->VAR12 & VAR13) >> VAR17));
        return -VAR18;
    }
    VAR7.VAR19 = VAR4->VAR12 & VAR20;
    if (FUN3(VAR7.VAR21) != 0xfee)
    {
        FUN2(VAR14, ""
                             "" VAR15,
                    VAR7.VAR19);
        return -VAR18;
    }
    if (VAR7.VAR22 != VAR23)
    {
        goto VAR11;
    }
    VAR8 = VAR7.VAR24 << 15 | FUN3(VAR7.VAR25);
    if (VAR7.VAR26)
    {
        VAR8 += VAR4->VAR19 & VAR27;
    }
    VAR6 = FUN4(VAR2, VAR8, &VAR9);
    if (VAR6)
    {
        return VAR6;
    }
    if (VAR7.VAR26)
    {
        FUN2(VAR28, "");
        if (VAR4->VAR19 & VAR29)
        {
            FUN2(VAR14, ""
                                 "" VAR15,
                        VAR4->VAR19);
            return -VAR18;
        }
    }
    else
    {
        uint8_t VAR30 = VAR4->VAR19 & 0xff;
        FUN2(VAR28, "");
        if (VAR30 != VAR9.VAR30)
        {
            FUN2(VAR14, ""
                                 "",
                        VAR30, VAR9.VAR30, VAR8);
        }
    }
    VAR9.VAR31 = VAR7.VAR32;
    FUN5(&VAR9, VAR5);
    FUN2(VAR28, "" VAR33 "" VAR15 ""
                    "" VAR33 "" VAR15,
                VAR4->VAR12, VAR4->VAR19, VAR5->VAR12, VAR5->VAR19);
    return 0;
VAR11:
    memcpy(VAR5, VAR4, sizeof(*VAR4));
    return 0;
}