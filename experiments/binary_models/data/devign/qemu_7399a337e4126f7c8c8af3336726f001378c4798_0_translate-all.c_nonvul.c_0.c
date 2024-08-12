int FUN1(target_ulong VAR1, uintptr_t VAR2)
{
    unsigned int VAR3;
    bool VAR4;
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
        VAR3 = 0;
        VAR4 = false;
        for (VAR9 = VAR7; VAR9 < VAR8; VAR9 += VAR16)
        {
            VAR6 = FUN3(VAR9 >> VAR10);
            VAR6->VAR11 |= VAR13;
            VAR3 |= VAR6->VAR11;
            VAR4 |= FUN5(VAR9, VAR2);
            FUN6(VAR9);
        }
        FUN7((void *)FUN8(VAR7), VAR15, VAR3 & VAR17);
        FUN4();
        return VAR4 ? 2 : 1;
    }
    FUN4();
    return 0;
}