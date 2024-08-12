VAR1 FUN1(abi_ulong VAR2)
{
    abi_ulong VAR3;
    abi_long VAR4;
    int VAR5;
    if (!VAR2)
        return VAR6;
    if (VAR2 < VAR7)
        return VAR6;
    VAR3 = FUN2(VAR6);
    if (VAR2 < VAR3)
    {
        VAR6 = VAR2;
        return VAR6;
    }
    VAR5 = FUN2(VAR2 - VAR3 + 1);
    VAR4 = FUN3(FUN4(VAR3, VAR5, VAR8 | VAR9, VAR10 | VAR11, 0, 0));
    if (VAR4 == VAR3)
    {
        VAR6 = VAR2;
        return VAR6;
    }
    else if (VAR4 != -1)
    {
        FUN5(VAR4, VAR5);
        VAR4 = -1;
    }
    return -VAR12;
    return VAR6;
}