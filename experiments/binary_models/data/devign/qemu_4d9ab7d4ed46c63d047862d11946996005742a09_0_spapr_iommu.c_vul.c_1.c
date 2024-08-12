static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    int VAR8;
    target_ulong VAR9 = VAR7[0];
    target_ulong VAR10 = VAR7[1];
    target_ulong VAR11 = VAR10;
    target_ulong VAR12 = VAR7[2];
    target_ulong VAR13 = VAR7[3];
    target_ulong VAR14 = VAR15, VAR16 = 0;
    VAR17 *VAR18 = FUN2(VAR9);
    VAR19 *VAR20 = FUN3(VAR3);
    hwaddr VAR21, VAR22;
    if (!VAR18)
    {
        return VAR15;
    }
    if ((VAR13 > 512) || (VAR12 & VAR23))
    {
        return VAR15;
    }
    VAR21 = FUN4(VAR18->VAR24);
    VAR22 = FUN5(VAR18->VAR24);
    VAR10 &= VAR21;
    for (VAR8 = 0; VAR8 < VAR13; ++VAR8, VAR10 += VAR22)
    {
        target_ulong VAR25 = (VAR12 & ~VAR26) + VAR8 * sizeof(VAR1);
        VAR16 = FUN6(VAR20->VAR27, VAR25);
        VAR14 = FUN7(VAR18, VAR10, VAR16);
        if (VAR14)
        {
            break;
        }
    }
    VAR8 = VAR8 ? (VAR8 - 1) : 0;
    if (FUN8(VAR9))
    {
        FUN9(VAR9, VAR11, VAR12, VAR8, VAR16, VAR14);
    }
    else
    {
        FUN10(VAR9, VAR11, VAR12, VAR8, VAR16, VAR14);
    }
    return VAR14;
}