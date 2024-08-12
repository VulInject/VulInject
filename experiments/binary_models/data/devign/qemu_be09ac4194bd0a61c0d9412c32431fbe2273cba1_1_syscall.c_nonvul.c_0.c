static VAR1 FUN1(int VAR2, abi_ulong VAR3, size_t VAR4, int VAR5, abi_ulong VAR6, abi_ulong VAR7)
{
    socklen_t VAR8;
    void *VAR9;
    void *VAR10;
    abi_long VAR11;
    VAR10 = FUN2(VAR12, VAR3, VAR4, 0);
    if (!VAR10)
        return -VAR13;
    if (VAR6)
    {
        if (FUN3(VAR8, VAR7))
        {
            VAR11 = -VAR13;
            goto VAR14;
        }
        if (VAR8 < 0)
        {
            VAR11 = -VAR15;
            goto VAR14;
        }
        VAR9 = alloca(VAR8);
        VAR11 = FUN4(recvfrom(VAR2, VAR10, VAR4, VAR5, VAR9, &VAR8));
    }
    else
    {
        VAR9 = NULL;
        VAR11 = FUN4(recv(VAR2, VAR10, VAR4, VAR5));
    }
    if (!FUN5(VAR11))
    {
        if (VAR6)
        {
            FUN6(VAR6, VAR9, VAR8);
            if (FUN7(VAR8, VAR7))
            {
                VAR11 = -VAR13;
                goto VAR14;
            }
        }
        FUN8(VAR10, VAR3, VAR4);
    }
    else
    {
    VAR14:
        FUN8(VAR10, VAR3, 0);
    }
    return VAR11;
}