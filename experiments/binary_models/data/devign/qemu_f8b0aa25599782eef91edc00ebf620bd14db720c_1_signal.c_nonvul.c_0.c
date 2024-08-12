FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, abi_ulong VAR7, int VAR8, abi_ulong VAR9)
{
    abi_ulong VAR10 = VAR4->VAR11.VAR12;
    abi_ulong VAR13;
    int VAR14 = 0;
    abi_ulong VAR15 = VAR2->VAR15;
    if (VAR4->VAR11.VAR16 & VAR17)
        VAR15 = (VAR15 & ~VAR18) | VAR19;
    if (VAR20 & VAR21)
    {
        VAR14 = VAR10 & 1;
        if (VAR14)
            VAR15 |= VAR22;
        else
            VAR15 &= ~VAR22;
    }
    if (VAR4->VAR11.VAR16 & VAR23)
    {
        VAR13 = VAR4->VAR11.VAR24;
    }
    else
    {
        unsigned int VAR25 = VAR14;
        if (VAR4->VAR11.VAR16 & VAR26)
            VAR25 += 2;
        if (FUN2(VAR27[VAR25], VAR6))
            return 1;
        FUN3((VAR5)VAR6, (VAR5)(VAR6 + 1));
        VAR13 = VAR9 + VAR14;
    }
    VAR2->VAR28[0] = VAR8;
    VAR2->VAR28[13] = VAR7;
    VAR2->VAR28[14] = VAR13;
    VAR2->VAR28[15] = VAR10 & (VAR14 ? ~1 : ~3);
    VAR2->VAR15 = VAR15;
    return 0;
}