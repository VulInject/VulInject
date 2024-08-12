static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    hwaddr VAR9;
    target_ulong VAR10, VAR11;
    int VAR12, VAR13 = -1;
    int VAR14, VAR15;
    VAR14 = -1;
    VAR9 = FUN2(VAR2, VAR4->VAR16[VAR5], VAR17);
    for (VAR12 = 0; VAR12 < 8; VAR12++)
    {
        if (VAR2->VAR18)
        {
            VAR10 = FUN3(VAR2->VAR18 + VAR9 + (VAR12 * 16));
            VAR11 = FUN3(VAR2->VAR18 + VAR9 + (VAR12 * 16) + 8);
        }
        else
        {
            VAR10 = FUN4(VAR2->VAR19 + VAR9 + (VAR12 * 16));
            VAR11 = FUN4(VAR2->VAR19 + VAR9 + (VAR12 * 16) + 8);
        }
        VAR15 = FUN5(VAR4, VAR10, VAR11, VAR5, VAR6, VAR7);
        FUN6("" VAR20 "" VAR21 "" VAR21 "" VAR21 "", VAR9 + (VAR12 * 16), VAR10, VAR11, (int)(VAR10 & 1), VAR5, (int)((VAR10 >> 1) & 1), VAR4->VAR22);
        switch (VAR15)
        {
        case -3:
            return -1;
        case -2:
            VAR14 = -2;
            VAR13 = VAR12;
            break;
        case -1:
        default:
            break;
        case 0:
            VAR14 = 0;
            VAR13 = VAR12;
            goto VAR23;
        }
    }
    if (VAR13 != -1)
    {
    VAR23:
        FUN6("" VAR20 "", VAR4->VAR24, VAR4->VAR25, VAR14);
        VAR11 = VAR4->VAR24;
        if (FUN7(VAR4, &VAR11, VAR14, VAR6) == 1)
        {
            if (VAR2->VAR18)
            {
                FUN8(VAR2->VAR18 + VAR9 + (VAR13 * 16) + 8, VAR11);
            }
            else
            {
                FUN9(VAR2->VAR19 + VAR9 + (VAR13 * 16) + 8, VAR11);
            }
        }
    }
    if (VAR8 != VAR26)
    {
        VAR4->VAR24 |= (VAR4->VAR27 & ((1 << VAR8) - 1)) & VAR28;
    }
    return VAR14;
}