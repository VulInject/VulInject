static int FUN1(abi_ulong VAR1, abi_ulong VAR2, abi_ulong VAR3, int VAR4, int VAR5, int VAR6, abi_ulong VAR7)
{
    abi_ulong VAR8, VAR9;
    void *VAR10;
    int VAR11, VAR12;
    VAR8 = VAR1 + VAR13;
    VAR10 = FUN2(VAR1);
    VAR11 = 0;
    for (VAR9 = VAR1; VAR9 < VAR8; VAR9++)
    {
        if (VAR9 < VAR2 || VAR9 >= VAR3)
            VAR11 |= FUN3(VAR9);
    }
    if (VAR11 == 0)
    {
        void *VAR14 = FUN4(VAR10, VAR13, VAR4, VAR5 | VAR15, -1, 0);
        if (VAR14 == VAR16)
            return -1;
        VAR11 = VAR4;
    }
    VAR11 &= VAR17;
    VAR12 = VAR4 | VAR11;
    if (!(VAR5 & VAR15))
    {
        if ((VAR5 & VAR18) == VAR19 && (VAR4 & VAR20))
            return -1;
        if (!(VAR11 & VAR20))
            FUN5(VAR10, VAR13, VAR11 | VAR20);
        if (pread(VAR6, FUN2(VAR2), VAR3 - VAR2, VAR7) == -1)
            return -1;
        if (VAR12 != (VAR11 | VAR20))
            FUN5(VAR10, VAR13, VAR12);
    }
    else
    {
        if (VAR12 != VAR11)
        {
            FUN5(VAR10, VAR13, VAR12);
        }
    }
    return 0;
}