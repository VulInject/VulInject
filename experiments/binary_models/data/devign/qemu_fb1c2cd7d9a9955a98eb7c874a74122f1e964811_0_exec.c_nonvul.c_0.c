static inline VAR1 *FUN1(target_ulong VAR2)
{
    VAR1 **VAR3, *VAR4;
    VAR3 = FUN2(VAR2);
    if (!VAR3)
        return NULL;
    VAR4 = *VAR3;
    if (!VAR4)
    {
        size_t VAR5 = sizeof(VAR1) * VAR6;
        VAR4 = FUN3(0, VAR5, VAR7 | VAR8, VAR9 | VAR10, -1, 0);
        *VAR3 = VAR4;
        if (FUN4(VAR4))
        {
            unsigned long VAR11 = FUN5(VAR4);
            FUN6(VAR11 & VAR12, FUN7(VAR11 + VAR5), VAR13);
        }
        VAR4 = FUN8(sizeof(VAR1) * VAR6);
        *VAR3 = VAR4;
    }
    return VAR4 + (VAR2 & (VAR6 - 1));
}