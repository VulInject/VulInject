static int FUN1(dma_addr_t VAR1, uint64_t VAR2, uint64_t VAR3, vtd_page_walk_hook VAR4, void *private, uint32_t VAR5, bool read, bool write, bool VAR6, uint8_t VAR7)
{
    bool VAR8, VAR9, VAR10;
    uint32_t VAR11;
    uint64_t VAR12;
    uint64_t VAR13, VAR14;
    IOMMUTLBEntry VAR15;
    uint64_t VAR16 = VAR2;
    uint64_t VAR17;
    int VAR18 = 0;
    FUN2(VAR1, VAR5, VAR2, VAR3);
    VAR13 = 1ULL << FUN3(VAR5);
    VAR14 = FUN4(VAR5);
    while (VAR16 < VAR3)
    {
        VAR17 = (VAR16 & VAR14) + VAR13;
        VAR11 = FUN5(VAR16, VAR5);
        VAR12 = FUN6(VAR1, VAR11);
        if (VAR12 == (VAR19)-1)
        {
            FUN7(VAR16, VAR17);
            goto VAR20;
        }
        if (FUN8(VAR12, VAR5))
        {
            FUN9(VAR16, VAR17);
            goto VAR20;
        }
        VAR8 = read && (VAR12 & VAR21);
        VAR9 = write && (VAR12 & VAR22);
        VAR10 = VAR8 | VAR9;
        if (FUN10(VAR12, VAR5))
        {
            VAR15.VAR23 = &VAR24;
            VAR15.VAR16 = VAR16 & VAR14;
            VAR15.VAR25 = FUN11(VAR12, VAR7);
            VAR15.VAR26 = ~VAR14;
            VAR15.VAR27 = FUN12(VAR8, VAR9);
            if (!VAR10 && !VAR6)
            {
                FUN13(VAR16, VAR17);
                goto VAR20;
            }
            FUN14(VAR5, VAR15.VAR16, VAR15.VAR25, VAR15.VAR26, VAR15.VAR27);
            if (VAR4)
            {
                VAR18 = FUN15(&VAR15, private);
                if (VAR18 < 0)
                {
                    return VAR18;
                }
            }
        }
        else
        {
            if (!VAR10)
            {
                FUN13(VAR16, VAR17);
                goto VAR20;
            }
            VAR18 = FUN1(FUN11(VAR12, VAR7), VAR16, FUN16(VAR17, VAR3), VAR4, private, VAR5 - 1, VAR8, VAR9, VAR6, VAR7);
            if (VAR18 < 0)
            {
                return VAR18;
            }
        }
    VAR20:
        VAR16 = VAR17;
    }
    return 0;
}