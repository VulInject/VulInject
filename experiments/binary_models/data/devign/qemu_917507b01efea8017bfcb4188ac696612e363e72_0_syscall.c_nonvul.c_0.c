static VAR1 FUN1(int VAR2, abi_ulong VAR3, socklen_t VAR4)
{
    void *VAR5;
    abi_long VAR6;
    if (VAR4 < 0)
        return -VAR7;
    VAR5 = alloca(VAR4);
    VAR6 = FUN2(VAR5, VAR3, VAR4);
    if (VAR6)
        return VAR6;
    return FUN3(connect(VAR2, VAR5, VAR4));
}