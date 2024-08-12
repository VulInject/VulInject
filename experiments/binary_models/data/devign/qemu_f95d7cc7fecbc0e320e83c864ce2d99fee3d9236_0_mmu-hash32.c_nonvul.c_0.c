static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7, int VAR8)
{
    hwaddr VAR9;
    target_ulong VAR10, VAR11;
    int VAR12, VAR13 = -1;
    int VAR14;
    VAR14 = -1;
    VAR9 = FUN2(VAR2, VAR4->VAR15[VAR6]);
    for (VAR12 = 0; VAR12 < VAR16; VAR12++)
    {
        VAR10 = FUN3(VAR2, VAR9 + VAR12 * VAR17);
        VAR11 = FUN4(VAR2, VAR9 + VAR12 * VAR17);
        FUN5("" VAR18 "" VAR19 "" VAR19 "" VAR19 "", VAR9 + (VAR12 * 8), VAR10, VAR11, (int)(VAR10 >> 31), VAR6, (int)((VAR10 >> 6) & 1), VAR4->VAR20);
        if (FUN6(VAR10, VAR11, VAR6, VAR4->VAR20))
        {
            VAR13 = VAR12;
            break;
        }
    }
    if (VAR13 != -1)
    {
        VAR14 = FUN7(VAR4, VAR10, VAR11, VAR7);
        FUN5("" VAR18 "", VAR4->VAR21, VAR4->VAR22, VAR14);
        VAR11 = VAR4->VAR21;
        if (FUN8(VAR4, &VAR11, VAR14, VAR7) == 1)
        {
            FUN9(VAR2, VAR9 + VAR13 * VAR17, VAR11);
        }
    }
    if (VAR8 != VAR23)
    {
        VAR4->VAR21 |= (VAR5 & ((1 << VAR8) - 1)) & VAR24;
    }
    return VAR14;
}