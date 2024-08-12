int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_phys_addr_t VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR12 = -1;
    VAR10 = -1;
    VAR15 = VAR16;
    for (VAR11 = 0; VAR11 < VAR2->VAR17; VAR11++)
    {
        VAR9 = &VAR2->VAR9[VAR11].VAR18;
        if (FUN2(VAR2, VAR9, &VAR10, VAR5, VAR2->VAR19[VAR20], 0, VAR11) < 0)
            continue;
        VAR13 = (VAR9->VAR21 >> 4) & 0xF;
        VAR14 = (VAR2->VAR19[VAR22] >> (28 - (2 * VAR13))) & 0x3;
        if (VAR23 != 0)
        {
            fprintf(VAR24, "", VAR25, VAR11, VAR13, VAR14, VAR6, VAR9->VAR21);
        }
        switch (VAR14)
        {
        case 0x2:
            if (VAR15 != 0)
                goto VAR26;
        case 0x3:
            VAR4->VAR27 = VAR28 | VAR29 | VAR30;
            VAR12 = 0;
            break;
        case 0x0:
            if (VAR15 != 0)
            {
                VAR4->VAR27 = 0;
                VAR12 = -2;
                break;
            }
        case 0x1:
        VAR26:
            VAR4->VAR27 = VAR9->VAR27;
            VAR4->VAR27 |= VAR30;
            VAR12 = FUN3(VAR4->VAR27, VAR6, VAR7);
            break;
        }
        if (VAR12 >= 0)
        {
            VAR4->VAR10 = VAR10;
            if (VAR23 != 0)
            {
                fprintf(VAR24, "" VAR31 "" VAR32 "", VAR25, VAR5, VAR4->VAR10, VAR4->VAR27, VAR12);
            }
            return 0;
        }
    }
    if (VAR23 != 0)
    {
        fprintf(VAR24, "" VAR31 "" VAR32 "", VAR25, VAR5, VAR10, VAR4->VAR27, VAR12);
    }
    return VAR12;
}