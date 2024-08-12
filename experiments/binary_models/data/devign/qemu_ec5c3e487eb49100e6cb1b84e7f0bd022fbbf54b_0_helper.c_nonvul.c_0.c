static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_phys_addr_t VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR12 = -1;
    VAR10 = (VAR16)-1ULL;
    VAR15 = VAR17;
    for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
    {
        VAR9 = &VAR2->VAR9[VAR11].VAR19;
        if (FUN2(VAR2, VAR9, &VAR10, VAR5, VAR2->VAR20[VAR21], 0, VAR11) < 0)
            continue;
        VAR13 = (VAR9->VAR22 >> 4) & 0xF;
        VAR14 = (VAR2->VAR20[VAR23] >> (30 - (2 * VAR13))) & 0x3;
        FUN3("", VAR24, VAR11, VAR13, VAR14, VAR6, VAR9->VAR22);
        switch (VAR14)
        {
        case 0x2:
            if (VAR15 != 0)
                goto VAR25;
        case 0x3:
            VAR4->VAR26 = VAR27 | VAR28 | VAR29;
            VAR12 = 0;
            break;
        case 0x0:
            if (VAR15 != 0)
            {
                VAR4->VAR26 = 0;
                VAR12 = -2;
                break;
            }
        case 0x1:
        VAR25:
            VAR4->VAR26 = VAR9->VAR26;
            VAR4->VAR26 |= VAR29;
            VAR12 = FUN4(VAR4->VAR26, VAR6, VAR7);
            break;
        }
        if (VAR12 >= 0)
        {
            VAR4->VAR10 = VAR10;
            FUN3("" VAR30 "" VAR31 "", VAR24, VAR5, VAR4->VAR10, VAR4->VAR26, VAR12);
            return 0;
        }
    }
    FUN3("" VAR30 "" VAR31 "", VAR24, VAR5, VAR10, VAR4->VAR26, VAR12);
    return VAR12;
}