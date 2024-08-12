VAR1 FUN1(abi_ulong VAR2, abi_ulong VAR3, abi_ulong VAR4, unsigned long VAR5, abi_ulong VAR6)
{
    int VAR7;
    void *VAR8;
    FUN2();
    if (VAR5 & VAR9)
    {
        VAR8 = (void *)FUN3(VAR10, FUN4(VAR2), VAR3, VAR4, VAR5, FUN4(VAR6));
        if (VAR11 && VAR8 != VAR12)
        {
            FUN5(VAR2, VAR3);
        }
    }
    else if (VAR5 & VAR13)
    {
        abi_ulong VAR14;
        VAR14 = FUN6(0, VAR4);
        if (VAR14 == -1)
        {
            VAR15 = VAR16;
            VAR8 = VAR12;
        }
        else
        {
            VAR8 = (void *)FUN3(VAR10, FUN4(VAR2), VAR3, VAR4, VAR5 | VAR9, FUN4(VAR14));
            if (VAR11)
            {
                FUN5(VAR2, VAR3);
            }
        }
    }
    else
    {
        int VAR7 = 0;
        if (VAR11 && VAR3 < VAR4)
        {
            abi_ulong VAR17;
            for (VAR17 = VAR2 + VAR3; VAR17 < VAR2 + VAR4; VAR17++)
            {
                VAR7 |= FUN7(VAR17);
            }
        }
        if (VAR7 == 0)
        {
            VAR8 = FUN8(FUN4(VAR2), VAR3, VAR4, VAR5);
            if (VAR8 != VAR12 && VAR11 && VAR3 > VAR4)
            {
                FUN5(VAR2 + VAR3, VAR4 - VAR3);
            }
        }
        else
        {
            VAR15 = VAR16;
            VAR8 = VAR12;
        }
        if ((unsigned long)VAR8 + VAR4 > (VAR18)-1)
        {
            VAR8 = FUN8(FUN4(VAR2), VAR4, VAR3, VAR5);
            VAR15 = VAR16;
            VAR8 = VAR12;
        }
    }
    if (VAR8 == VAR12)
    {
        VAR6 = -1;
    }
    else
    {
        VAR6 = FUN9(VAR8);
        VAR7 = FUN7(VAR2);
        FUN10(VAR2, VAR2 + VAR3, 0);
        FUN10(VAR6, VAR6 + VAR4, VAR7 | VAR19);
    }
    FUN11();
    return VAR6;
}