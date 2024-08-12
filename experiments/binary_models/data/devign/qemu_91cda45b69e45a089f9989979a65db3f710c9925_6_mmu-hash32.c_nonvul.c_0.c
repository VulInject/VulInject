static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    hwaddr VAR8;
    target_ulong VAR9, VAR10;
    int VAR11, VAR12 = -1;
    int VAR13, VAR14;
    VAR13 = -1;
    VAR8 = FUN2(VAR2, VAR4->VAR15[VAR5]);
    for (VAR11 = 0; VAR11 < VAR16; VAR11++)
    {
        VAR9 = FUN3(VAR2, VAR8 + VAR11 * VAR17);
        VAR10 = FUN4(VAR2, VAR8 + VAR11 * VAR17);
        VAR14 = FUN5(VAR4, VAR9, VAR10, VAR5, VAR6);
        FUN6("" VAR18 "" VAR19 "" VAR19 "" VAR19 "", VAR8 + (VAR11 * 8), VAR9, VAR10, (int)(VAR9 >> 31), VAR5, (int)((VAR9 >> 6) & 1), VAR4->VAR20);
        switch (VAR14)
        {
        case -3:
            return -1;
        case -2:
            VAR13 = -2;
            VAR12 = VAR11;
            break;
        case -1:
        default:
            break;
        case 0:
            VAR13 = 0;
            VAR12 = VAR11;
            goto VAR21;
        }
    }
    if (VAR12 != -1)
    {
    VAR21:
        FUN6("" VAR18 "", VAR4->VAR22, VAR4->VAR23, VAR13);
        VAR10 = VAR4->VAR22;
        if (FUN7(VAR4, &VAR10, VAR13, VAR6) == 1)
        {
            FUN8(VAR2, VAR8 + VAR12 * VAR17, VAR10);
        }
    }
    if (VAR7 != VAR24)
    {
        VAR4->VAR22 |= (VAR4->VAR25 & ((1 << VAR7) - 1)) & VAR26;
    }
    return VAR13;
}