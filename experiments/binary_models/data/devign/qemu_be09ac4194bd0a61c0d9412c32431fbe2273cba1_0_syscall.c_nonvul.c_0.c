static VAR1 FUN1(int VAR2, abi_ulong VAR3, abi_ulong VAR4)
{
    socklen_t VAR5;
    void *VAR6;
    abi_long VAR7;
    if (FUN2(VAR5, VAR4))
        return -VAR8;
    if (VAR5 < 0)
        return -VAR9;
    VAR6 = alloca(VAR5);
    VAR7 = FUN3(FUN4(VAR2, VAR6, &VAR5));
    if (!FUN5(VAR7))
    {
        FUN6(VAR3, VAR6, VAR5);
        if (FUN7(VAR5, VAR4))
            VAR7 = -VAR8;
    }
    return VAR7;
}