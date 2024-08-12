FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, abi_ulong VAR7, int VAR8, abi_ulong VAR9)
{
    abi_ulong VAR10 = VAR4->VAR11;
    abi_ulong VAR12;
    int VAR13 = VAR10 & 1;
    uint32_t VAR14 = FUN2(VAR2);
    VAR14 &= ~VAR15;
    if (VAR13)
    {
        VAR14 |= VAR16;
    }
    else
    {
        VAR14 &= ~VAR16;
    }
    if (VAR4->VAR17 & VAR18)
    {
        VAR12 = VAR4->VAR19;
    }
    else
    {
        unsigned int VAR20 = VAR13;
        if (VAR4->VAR17 & VAR21)
            VAR20 += 2;
        FUN3(VAR22[VAR20], VAR6);
        VAR12 = VAR9 + VAR13;
    }
    VAR2->VAR23[0] = VAR8;
    VAR2->VAR23[13] = VAR7;
    VAR2->VAR23[14] = VAR12;
    VAR2->VAR23[15] = VAR10 & (VAR13 ? ~1 : ~3);
    FUN4(VAR2, VAR14, VAR15 | VAR16, VAR24);
}