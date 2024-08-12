static void FUN1(abi_ulong VAR1, abi_ulong VAR2, int VAR3)
{
    uintptr_t VAR4, VAR5, VAR6;
    VAR2 = FUN2(VAR2);
    VAR4 = (VAR7)FUN3(VAR1);
    VAR6 = (VAR7)FUN3(VAR2);
    VAR5 = (VAR4 + VAR8 - 1);
    VAR5 &= -VAR8;
    if (VAR5 < VAR6)
    {
        void *VAR9 = FUN4((void *)VAR5, VAR6 - VAR5, VAR3, VAR10 | VAR11 | VAR12, -1, 0);
        if (VAR9 == VAR13)
        {
            FUN5("");
            FUN6(-1);
        }
    }
    if ((FUN7(VAR2 - 1) & VAR3) != VAR3)
    {
        FUN8(VAR1 & VAR14, VAR2, VAR3 | VAR15);
    }
    if (VAR4 < VAR5)
    {
        memset((void *)VAR4, 0, VAR5 - VAR4);
    }
}