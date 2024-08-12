static int FUN1(VAR1 *VAR2, uint64_t VAR3, bool VAR4, VAR5 *VAR6, VAR7 *VAR8, bool *VAR9, bool *VAR10)
{
    dma_addr_t VAR11 = FUN2(VAR2);
    uint32_t VAR12 = FUN3(VAR2);
    uint32_t VAR13;
    uint64_t VAR14;
    uint64_t VAR15;
    if (!FUN4(VAR3, VAR2))
    {
        FUN5(VAR16, "" VAR17 "", VAR3);
        return -VAR18;
    }
    VAR15 = VAR4 ? VAR19 : VAR20;
    while (true)
    {
        VAR13 = FUN6(VAR3, VAR12);
        VAR14 = FUN7(VAR11, VAR13);
        if (VAR14 == (VAR5)-1)
        {
            FUN5(VAR16, ""
                                 "" VAR21 "" VAR17,
                        VAR12, VAR3);
            if (VAR12 == FUN3(VAR2))
            {
                return -VAR22;
            }
            else
            {
                return -VAR23;
            }
        }
        *VAR9 = (*VAR9) && (VAR14 & VAR20);
        *VAR10 = (*VAR10) && (VAR14 & VAR19);
        if (!(VAR14 & VAR15))
        {
            FUN5(VAR16, ""
                                 "" VAR17 "" VAR17,
                        (VAR4 ? "" : ""), VAR3, VAR14);
            return VAR4 ? -VAR24 : -VAR25;
        }
        if (FUN8(VAR14, VAR12))
        {
            FUN5(VAR16, ""
                                 "" VAR21 "" VAR17,
                        VAR12, VAR14);
            return -VAR26;
        }
        if (FUN9(VAR14, VAR12))
        {
            *VAR6 = VAR14;
            *VAR8 = VAR12;
            return 0;
        }
        VAR11 = FUN10(VAR14);
        VAR12--;
    }
}