static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, uint16_t VAR6)
{
    int VAR7 = 0;
    VTD_IR_MSIAddress VAR8;
    uint16_t VAR9;
    VTDIrq VAR10 = {};
    assert(VAR4 && VAR5);
    if (!VAR2 || !VAR2->VAR11)
    {
        goto VAR12;
    }
    if (VAR4->VAR13 & VAR14)
    {
        FUN2(VAR15, ""
                             "" VAR16,
                    (VAR17)((VAR4->VAR13 & VAR14) >> VAR18));
        return -VAR19;
    }
    VAR8.VAR20 = VAR4->VAR13 & VAR21;
    if (FUN3(VAR8.VAR22) != 0xfee)
    {
        FUN2(VAR15, ""
                             "" VAR16,
                    VAR8.VAR20);
        return -VAR19;
    }
    if (VAR8.VAR23 != VAR24)
    {
        goto VAR12;
    }
    VAR9 = VAR8.VAR25 << 15 | FUN3(VAR8.VAR26);
    if (VAR8.VAR27)
    {
        VAR9 += VAR4->VAR20 & VAR28;
    }
    VAR7 = FUN4(VAR2, VAR9, &VAR10, VAR6);
    if (VAR7)
    {
        return VAR7;
    }
    if (VAR8.VAR27)
    {
        FUN2(VAR29, "");
        if (VAR4->VAR20 & VAR30)
        {
            FUN2(VAR15, ""
                                 "" VAR16,
                        VAR4->VAR20);
            return -VAR19;
        }
    }
    else
    {
        uint8_t VAR31 = VAR4->VAR20 & 0xff;
        FUN2(VAR29, "");
        if (VAR31 != VAR10.VAR31)
        {
            FUN2(VAR15, ""
                                 "",
                        VAR31, VAR10.VAR31, VAR9);
        }
    }
    VAR10.VAR32 = VAR8.VAR33;
    FUN5(&VAR10, VAR5);
    FUN2(VAR29, "" VAR34 "" VAR16 ""
                    "" VAR34 "" VAR16,
                VAR4->VAR13, VAR4->VAR20, VAR5->VAR13, VAR5->VAR20);
    return 0;
VAR12:
    memcpy(VAR5, VAR4, sizeof(*VAR4));
    return 0;
}