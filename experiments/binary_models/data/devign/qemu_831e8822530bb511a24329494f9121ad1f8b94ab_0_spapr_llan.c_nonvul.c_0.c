static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    VAR10 *VAR11 = FUN2(VAR5->VAR12, VAR8);
    VAR13 *VAR14 = FUN3(VAR11);
    target_long VAR15;
    FUN4("" VAR16 "" VAR16 "", VAR8, VAR9);
    if (!VAR11)
    {
        FUN5("");
        return VAR17;
    }
    if ((FUN6(VAR14, VAR9, 4) < 0) || (FUN7(VAR9) < 16))
    {
        FUN5("");
        return VAR17;
    }
    if (!VAR14->VAR18)
    {
        return VAR19;
    }
    if (VAR14->VAR20 & VAR21)
    {
        VAR15 = FUN8(VAR14, VAR9);
    }
    else
    {
        VAR15 = FUN9(VAR14, VAR9);
    }
    if (VAR15)
    {
        return VAR15;
    }
    VAR14->VAR22++;
    FUN10(FUN11(VAR14->VAR23));
    return VAR24;
}