static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, uint64_t VAR5, int VAR6, VAR7 *VAR8, int *VAR9, int VAR10, bool VAR11)
{
    VAR12 *VAR13 = FUN2(FUN3(VAR2));
    uint64_t VAR14, VAR15, VAR16;
    const int VAR17[4] = {VAR18, VAR19, VAR20, VAR21};
    FUN4("" VAR22 "", VAR23, VAR5);
    VAR14 = VAR5 & VAR24;
    VAR15 = (VAR3 >> (17 + 11 * VAR6 / 4)) & 0x3ff8;
    VAR16 = FUN5(VAR13->VAR25, VAR14 + VAR15);
    FUN4("" VAR22 "" VAR22 "" VAR22 "", VAR23, VAR14, VAR15, VAR16);
    if ((VAR16 & VAR26) != 0)
    {
        FUN6("", VAR23);
        FUN7(VAR2, VAR3, VAR18, VAR4, VAR10, VAR11);
        return -1;
    }
    if ((VAR16 & VAR27) != VAR6)
    {
        FUN7(VAR2, VAR3, VAR28, VAR4, VAR10, VAR11);
        return -1;
    }
    if (VAR6 == VAR29)
    {
        return FUN8(VAR2, VAR3, VAR4, VAR16, VAR8, VAR9, VAR10, VAR11);
    }
    VAR15 = (VAR3 >> (28 + 11 * (VAR6 - 4) / 4)) & 3;
    if (VAR15 < ((VAR16 & VAR30) >> 6) || VAR15 > (VAR16 & VAR31))
    {
        FUN6("", VAR23, VAR16);
        FUN7(VAR2, VAR3, VAR17[VAR6 / 4 - 1], VAR4, VAR10, VAR11);
        return -1;
    }
    return FUN1(VAR2, VAR3, VAR4, VAR16, VAR6 - 4, VAR8, VAR9, VAR10, VAR11);
}