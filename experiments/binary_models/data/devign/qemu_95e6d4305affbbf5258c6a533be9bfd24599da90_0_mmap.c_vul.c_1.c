static VAR1 FUN1(abi_ulong VAR2, abi_ulong VAR3)
{
    abi_ulong VAR4;
    abi_ulong VAR5;
    int VAR6;
    int VAR7 = 0;
    if (VAR3 > VAR8)
    {
        return (VAR1)-1;
    }
    VAR3 = FUN2(VAR3);
    VAR5 = VAR2 + VAR3;
    if (VAR5 > VAR8)
    {
        VAR5 = VAR8;
    }
    VAR4 = VAR5 - VAR9;
    while (1)
    {
        if (VAR4 > VAR5)
        {
            if (VAR7)
            {
                return (VAR1)-1;
            }
            VAR5 = VAR8;
            VAR4 = VAR5 - VAR9;
            VAR7 = 1;
            continue;
        }
        VAR6 = FUN3(VAR4);
        if (VAR6)
        {
            VAR5 = VAR4;
        }
        if (VAR4 + VAR3 == VAR5)
        {
            break;
        }
        VAR4 -= VAR9;
    }
    if (VAR2 == VAR10)
    {
        VAR10 = VAR4;
    }
    return VAR4;
}