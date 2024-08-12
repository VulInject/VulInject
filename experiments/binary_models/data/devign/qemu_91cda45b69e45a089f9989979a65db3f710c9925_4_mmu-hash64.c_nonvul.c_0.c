static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    hwaddr VAR8;
    target_ulong VAR9, VAR10;
    int VAR11, VAR12 = -1;
    int VAR13, VAR14;
    VAR13 = -1;
    VAR8 = (VAR4->VAR15[VAR5] * VAR16) & VAR2->VAR17;
    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
    {
        VAR9 = FUN2(VAR2, VAR8 + VAR11 * VAR19);
        VAR10 = FUN3(VAR2, VAR8 + VAR11 * VAR19);
        VAR14 = FUN4(VAR4, VAR9, VAR10, VAR5, VAR6);
        FUN5("" VAR20 "" VAR21 "" VAR21 "" VAR21 "", VAR8 + (VAR11 * 16), VAR9, VAR10, (int)(VAR9 & 1), VAR5, (int)((VAR9 >> 1) & 1), VAR4->VAR22);
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
            goto VAR23;
        }
    }
    if (VAR12 != -1)
    {
    VAR23:
        FUN5("" VAR20 "", VAR4->VAR24, VAR4->VAR25, VAR13);
        VAR10 = VAR4->VAR24;
        if (FUN6(VAR4, &VAR10, VAR13, VAR6) == 1)
        {
            FUN7(VAR2, VAR8 + VAR12 * VAR19, VAR10);
        }
    }
    if (VAR7 != VAR26)
    {
        VAR4->VAR24 |= (VAR4->VAR27 & ((1 << VAR7) - 1)) & VAR28;
    }
    return VAR13;
}