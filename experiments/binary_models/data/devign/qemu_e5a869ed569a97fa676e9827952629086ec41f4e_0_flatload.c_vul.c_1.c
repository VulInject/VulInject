static int FUN1(int VAR1, abi_ulong VAR2, abi_ulong VAR3, abi_ulong VAR4)
{
    void *VAR5;
    int VAR6;
    VAR5 = FUN2(VAR7, VAR2, VAR3, 0);
    VAR6 = pread(VAR1, VAR5, VAR3, VAR4);
    FUN3(VAR5, VAR2, VAR3);
    return VAR6;