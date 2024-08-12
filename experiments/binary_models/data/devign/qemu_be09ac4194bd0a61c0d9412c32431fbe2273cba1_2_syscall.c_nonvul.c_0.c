static VAR1 FUN1(int VAR2, abi_ulong VAR3, size_t VAR4, int VAR5, abi_ulong VAR6, socklen_t VAR7)
{
    void *VAR8;
    void *VAR9;
    abi_long VAR10;
    if (VAR7 < 0)
        return -VAR11;
    VAR9 = FUN2(VAR12, VAR3, VAR4, 1);
    if (!VAR9)
        return -VAR13;
    if (VAR6)
    {
        VAR8 = alloca(VAR7);
        FUN3(VAR8, VAR6, VAR7);
        VAR10 = FUN4(sendto(VAR2, VAR9, VAR4, VAR5, VAR8, VAR7));
    }
    else
    {
        VAR10 = FUN4(send(VAR2, VAR9, VAR4, VAR5));
    }
    FUN5(VAR9, VAR3, 0);
    return VAR10;
}