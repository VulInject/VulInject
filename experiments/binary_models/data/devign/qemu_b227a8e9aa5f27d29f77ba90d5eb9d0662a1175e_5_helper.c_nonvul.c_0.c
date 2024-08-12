int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_phys_addr_t VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR12 = -1;
    VAR10 = -1;
    for (VAR11 = 0; VAR11 < VAR2->VAR15; VAR11++)
    {
        VAR9 = &VAR2->VAR9[VAR11].VAR16;
        if (FUN2(VAR2, VAR9, &VAR10, VAR5, VAR2->VAR17[VAR18], 0, VAR11) < 0)
            continue;
        VAR13 = (VAR9->VAR19 >> 4) & 0xF;
        VAR14 = (VAR2->VAR17[VAR20] >> (28 - (2 * VAR13))) & 0x3;
        if (VAR21 != 0)
        {
            fprintf(VAR22, "", VAR23, VAR11, VAR13, VAR14, VAR6, VAR9->VAR19);
        }
        switch (VAR14)
        {
        case 0x2:
            if (VAR24)
                goto VAR25;
        case 0x3:
            VAR4->VAR26 = VAR27 | VAR28 | VAR29;
            VAR12 = 0;
            break;
        case 0x0:
            if (VAR24)
            {
                VAR4->VAR26 = 0;
                VAR12 = -2;
                break;
            }
        case 0x1:
        VAR25:
            VAR4->VAR26 = VAR9->VAR26;
            VAR4->VAR26 |= VAR29;
            VAR12 = FUN3(VAR4->VAR26, VAR6, VAR7);
            break;
        }
        if (VAR12 >= 0)
        {
            VAR4->VAR10 = VAR10;
            if (VAR21 != 0)
            {
                fprintf(VAR22, "" VAR30 "" VAR31 "", VAR23, VAR5, VAR4->VAR10, VAR4->VAR26, VAR12);
            }
            return 0;
        }
    }
    if (VAR21 != 0)
    {
        fprintf(VAR22, "" VAR30 "" VAR31 "", VAR23, VAR5, VAR10, VAR4->VAR26, VAR12);
    }
    return VAR12;
}