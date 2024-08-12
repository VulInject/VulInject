int FUN1(target_ulong VAR1, uintptr_t VAR2, void *VAR3)
{
    unsigned int VAR4;
    VAR5 *VAR6;
    target_ulong VAR7, VAR8, VAR9;
    FUN2();
    VAR6 = FUN3(VAR1 >> VAR10);
    if (!VAR6)
    {
        FUN4();
        return 0;
    }
    if ((VAR6->VAR11 & VAR12) && !(VAR6->VAR11 & VAR13))
    {
        VAR7 = VAR1 & VAR14;
        VAR8 = VAR7 + VAR15;
        VAR4 = 0;
        for (VAR9 = VAR7; VAR9 < VAR8; VAR9 += VAR16)
        {
            VAR6 = FUN3(VAR9 >> VAR10);
            VAR6->VAR11 |= VAR13;
            VAR4 |= VAR6->VAR11;
            FUN5(VAR9, VAR2, VAR3);
            FUN6(VAR9);
        }
        FUN7((void *)FUN8(VAR7), VAR15, VAR4 & VAR17);
        FUN4();
        return 1;
    }
    FUN4();
    return 0;
}