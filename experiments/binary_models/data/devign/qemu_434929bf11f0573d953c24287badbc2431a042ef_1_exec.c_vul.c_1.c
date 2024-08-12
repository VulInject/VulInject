static inline VAR1 *FUN1(target_ulong VAR2)
{
    VAR1 **VAR3, *VAR4;
    if (VAR2 > ((VAR5)VAR6 * VAR7))
        return NULL;
    VAR3 = &VAR8[VAR2 >> VAR9];
    VAR4 = *VAR3;
    if (!VAR4)
    {
        unsigned long VAR10;
        size_t VAR11 = sizeof(VAR1) * VAR6;
        VAR4 = FUN2(0, VAR11, VAR12 | VAR13, VAR14 | VAR15, -1, 0);
        *VAR3 = VAR4;
        VAR10 = FUN3(VAR4);
        if (VAR10 == (VAR5)VAR10)
        {
            FUN4(VAR10 & VAR16, FUN5(VAR10 + VAR11), VAR17);
        }
        VAR4 = FUN6(sizeof(VAR1) * VAR6);
        *VAR3 = VAR4;
    }
    return VAR4 + (VAR2 & (VAR6 - 1));
}