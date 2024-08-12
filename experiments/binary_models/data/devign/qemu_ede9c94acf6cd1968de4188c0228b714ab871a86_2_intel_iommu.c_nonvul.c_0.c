static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 *VAR5, uint16_t VAR6)
{
    static const uint16_t VAR7[VAR8] =
        {0xffff, 0xfffb, 0xfff9, 0xfff8};
    dma_addr_t VAR9 = 0x00;
    uint16_t VAR10, VAR11;
    uint8_t VAR12, VAR13, VAR14;
    VAR9 = VAR2->VAR15 + VAR3 * sizeof(*VAR5);
    if (FUN2(&VAR16, VAR9, VAR5, sizeof(*VAR5)))
    {
        FUN3(VAR17, "" VAR18 "" VAR19, VAR2->VAR15, VAR3);
        return -VAR20;
    }
    if (!VAR5->VAR21)
    {
        FUN3(VAR17, ""
                             "" VAR18 "" VAR18,
                    VAR3, FUN4(VAR5->VAR22[1]), FUN4(VAR5->VAR22[0]));
        return -VAR23;
    }
    if (VAR5->VAR24 || VAR5->VAR25 || VAR5->VAR26)
    {
        FUN3(VAR17, "" VAR19 "" VAR18 "" VAR18, VAR3, FUN4(VAR5->VAR22[1]), FUN4(VAR5->VAR22[0]));
        return -VAR27;
    }
    if (VAR6 != VAR28)
    {
        VAR11 = FUN5(VAR5->VAR11);
        switch (VAR5->VAR29)
        {
        case VAR30:
            FUN3(VAR31, "", VAR3);
            break;
        case VAR32:
            VAR10 = VAR7[VAR5->VAR33];
            if ((VAR11 & VAR10) != (VAR6 & VAR10))
            {
                FUN3(VAR17, ""
                                     "",
                            VAR3, VAR6, VAR11);
                return -VAR34;
            }
            break;
        case VAR35:
            VAR13 = VAR11 >> 8;
            VAR14 = VAR11 & 0xff;
            VAR12 = VAR6 >> 8;
            if (VAR12 > VAR13 || VAR12 < VAR14)
            {
                FUN3(VAR17, ""
                                     "",
                            VAR3, VAR12, VAR14, VAR13);
                return -VAR34;
            }
            break;
        default:
            FUN3(VAR17, ""
                                 "",
                        VAR5->VAR29, VAR3);
            return -VAR34;
            break;
        }
    }
    return 0;
}