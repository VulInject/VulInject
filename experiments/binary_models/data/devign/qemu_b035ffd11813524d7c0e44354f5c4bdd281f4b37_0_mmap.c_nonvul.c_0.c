void *FUN1(size_t VAR1)
{
    void *VAR2;
    FUN2();
    VAR2 = FUN3(NULL, VAR1, VAR3 | VAR4, VAR5 | VAR6, -1, 0);
    if (FUN4(VAR2))
    {
        abi_ulong VAR7 = FUN5(VAR2);
        FUN6(VAR7 & VAR8, FUN7(VAR7 + VAR1), VAR9);
    }
    FUN8();
    return VAR2;
}